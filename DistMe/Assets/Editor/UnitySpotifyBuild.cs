﻿using System.Collections;
using System.Collections.Generic;
using System.IO;
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

	[PostProcessBuild]
	public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
	{

		if (buildTarget == BuildTarget.iOS)
		{
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
            proj.SetBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "$(inherited)");
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

        }
	}
}
