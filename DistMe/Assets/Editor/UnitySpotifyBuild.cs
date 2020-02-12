using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using UnityEngine;

public class UnitySpotifyBuild
{
	private static void CopyAndReplaceDirectory(string srcPath, string dstPath)
	{
		if (Directory.Exists(dstPath))
			Directory.Delete(dstPath);
		if (File.Exists(dstPath))
			File.Delete(dstPath);

		Directory.CreateDirectory(dstPath);

		foreach (var file in Directory.GetFiles(srcPath))
			File.Copy(file, Path.Combine(dstPath, Path.GetFileName(file)));

		foreach (var dir in Directory.GetDirectories(srcPath))
			CopyAndReplaceDirectory(dir, Path.Combine(dstPath, Path.GetFileName(dir)));
	}

    private static UnitySpotifyBuildSettings GetSettings()
    {
        var path="Assets/Editor/UnitySpotifyBuildSettings.txt";
        if(!File.Exists(path)){
            throw new Exception(path+" not found");
        }

        var settings=new UnitySpotifyBuildSettings();
        var props=typeof(UnitySpotifyBuildSettings).GetProperties();
        var str=File.ReadAllText(path);
        Debug.Log("UnitySpotifyBuild - seetings:\n"+str);
        var lines=str.Split('\n');
        foreach(var line in lines){
            if(string.IsNullOrWhiteSpace(line) || line.StartsWith("#")){
                continue;
            }
            var parts=line.Trim().Split(new char[]{' '},2);
            if(parts.Length!=2){
                continue;
            }
            
            var prop=props.FirstOrDefault(p=>p.Name==parts[0]);
            if(prop==null){
                continue;
            }

            try{
                prop.SetValue(settings,prop.PropertyType.Equals(typeof(string))?parts[1]:Convert.ChangeType(parts[1],prop.PropertyType));
            }catch(Exception ex){
                throw new Exception($"Unable to set settings.{prop.Name} to:{parts[1]}",ex);
            }
        }

        return settings;
    }
    

	[PostProcessBuild(1000)]
	public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
	{

        Debug.Log($"UnitySpotifyBuild - Start - {buildTarget} - {path}");

        var settings=GetSettings();

		if (buildTarget == BuildTarget.iOS)
		{

            string cConfig="";

            string projPath = path + "/Unity-iPhone.xcodeproj/project.pbxproj";

            PBXProject proj = new PBXProject();
            proj.ReadFromString(File.ReadAllText(projPath));

            string target = proj.TargetGuidByName("Unity-iPhone");

            // Add user packages to project. Most other source or resource files and packages 
            // can be added the same way.
            CopyAndReplaceDirectory("NativeAssets/SpotifyiOS.framework", Path.Combine(path, "Frameworks/SpotifyiOS.framework"));
            proj.AddFileToBuild(target, proj.AddFile("Frameworks/SpotifyiOS.framework",
                                                     "Frameworks/SpotifyiOS.framework", PBXSourceTree.Source));

            // Add custom system frameworks. Duplicate frameworks are ignored.
            // needed by our native plugin in Assets/Plugins/iOS
            proj.AddFrameworkToProject(target, "AssetsLibrary.framework", false /*not weak*/);

            // Add our framework directory to the framework include path
            proj.AddBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "$(PROJECT_DIR)/Frameworks");

            // Set a custom link flag
            proj.AddBuildProperty(target, "OTHER_LDFLAGS", "-ObjC");

            File.WriteAllText(projPath, proj.WriteToString());


            // Get plist
            string plistPath = path + "/Info.plist";
            PlistDocument plist = new PlistDocument();
            plist.ReadFromString(File.ReadAllText(plistPath));

            // Get root
            PlistElementDict rootDict = plist.root;
            var ary=rootDict.CreateArray("LSApplicationQueriesSchemes");
            ary.AddString("spotify");

            // Write to file
            File.WriteAllText(plistPath, plist.WriteToString());

            if(settings.HookUnityAppController){
                cConfig+="#define UNITYSPOTIFY_HOOKUNITYAPPCONTROLLER\n";
                InsertHooks(buildTarget,path);
            }


            if(!string.IsNullOrWhiteSpace(cConfig)){
                Debug.Log("UnitySpotifyBuild - set UnitySpotifyConfig.h");
                File.WriteAllText(Path.Combine(path,"Libraries/Plugins/iOS/UnitySpotifyConfig.h"),
$@"#ifndef UnitySpotifyConfig_h
#define UnitySpotifyConfig_h

// Inserted
{cConfig}

#endif
"
                );
            }

        }

        Debug.Log($"UnitySpotifyBuild - Complete");
	}

    private static void InsertHooks(BuildTarget buildTarget, string path)
    {
        var acPath=Path.Combine(path,"Classes/UnityAppController.mm");
        if(!File.Exists(acPath)){
            throw new Exception("UnityAppController does not exist at "+acPath);
        }
        var ac="#include \"UnitySpotify.h\"\n"+File.ReadAllText(acPath);
        var reg=new Regex(@"\-\s*\(\s*BOOL\s*\)\s*application\s*:\s*\(\s*UIApplication\s*\*\s*\)\s*(\w+)\s*openURL\s*:\s*\(\s*NSURL\s*\*\s*\)\s*(\w+)\s*options\s*:\s*\(\s*NSDictionary\s*<\s*NSString\s*\*\s*,\s*id\s*>\s*\*\s*\)\s*(\w+)",RegexOptions.IgnoreCase);


        var m=reg.Match(ac);
        if(m?.Success!=true){
            throw new Exception("Unable to find \"- (BOOL)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options\" in "+acPath);
        }

        var insert=$"/* Inserted by UnitySpotifyBuild */UnitySpotifyOnOpenURL({m.Groups[1].Value}, {m.Groups[2].Value}, {m.Groups[3].Value});/* End Insert */";

        var openB=ac.IndexOf('{',m.Index+m.Length);
        ac=ac.Substring(0,openB+1)+insert+ac.Substring(openB+1);

        Debug.Log("UnitySpotifyBuild - Hooks inserted");

        File.WriteAllText(acPath,ac);
    }
}

public class UnitySpotifyBuildSettings
{
    /// <summary>
    /// If true code will be inserted into UnityAppController.mm to hook application callbacks
    /// instead of using IMPL_APP_CONTROLLER_SUBCLASS to override the default app delegate.
    /// This can be useful when an exiting plugin already overrides the default app delegate.
    /// </summary>
    public bool HookUnityAppController{get;set;}
}