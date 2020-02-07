# Unity Spotify Plugin

The Unity Spotify Plugin adds basic spotify player functionality to a Unity3D project using a
combination of the Spotify native SDKs and the Spotify Web API.

## Unity3d Install

1. Configure URL scheme and Bundle Identifier
- iOS
    - Open Player Settings. File > Build Settings > Player Settings ( Button is in the button left of menu)
    - Open iPhone, iPad, iPod settings
    - Click on "Other Settings"
    - Set "Bundle Identifier" to your applications Bundle Identifier. ( Example - com.example.myapp )
    - Set "Supported URL schemes" to 1
    - Set "Element 0" to your applications URL scheme. ( Example - vnd.myapp )

2. Add "Json.NET Converters" dependency
- Open - https://assetstore.unity.com/packages/tools/input-management/json-net-converters-simple-compatible-solution-58621
- Download and Import

3. Copy Plugin Contents
Copy the contents of the src directory to the root of your Unity3D project.

4. Attach UnitySpotifyBehaviour
Attach the UnitySpotifyBehaviour script to a GameObject.
The UnitySpotifyBehaviour script is located at Assets/Plugins/UnitySpotify/UnitySpotifyBehaviour.cs

5. Set ConfigUrl of the UnitySpotifyBehaviour script
- format: https://**{ApiHost}**/api/Spotify/**{ConfigToken}**/Config
- example: https://api.appdomain.com/api/Spotify/b4da7d89-6cb0-4a3e-8d18-13ddde1c2ceb/Config

## Script Usage Examples
Examples assume the UnitySpotifyBehaviour script has been attached and configured.

``` C#
using UnityEngine;
using UnitySpotify;

public class ExampleBehaviour : MonoBehaviour
{

    public void PlayTrack()
    {
        UnitySpotifyApi.PlayUri(
            2000, // Start at 2 seconds
            "spotify:track:6rqhFgbbKwnb9MLmUQDhG6", // Track Uri
            (err, msg) => Debug.Log($"Play Result - Error:{err}, Message:{msg}") // Log Result
        );
    }

    public void Resume()
    {
        UnitySpotifyApi.Resume(
            (err, msg) => Debug.Log($"Resume Result - Error:{err}, Message:{msg}") // Log Result
        );
    }

    public void Pause()
    {
        UnitySpotifyApi.Pause(
            null // Ignore Result
        );
    }

    public void RepeatTrack()
    {
        UnitySpotifyApi.Repeat(
            RepeatMode.Track, // Repeat Track
            (err, msg) => Debug.Log($"Repeat Result - Error:{err}, Message:{msg}") // Log Result
        );
    }

}
```

## API Reference

``` C#
namespace UnitySpotify
{
    public static class UnitySpotifyApi
    {
        /// <summary>
        /// Returns true if there is a connection is established with a Spotify player.
        /// </summary>
        public static bool IsConnected();

        /// <summary>
        /// Returns true if an IUnitySpotifyApi implementation has been initialized.
        /// </summary>
        public static bool IsInited();

        /// <summary>
        /// Sets the delegate used to get the ClientConfig used by the IUnitySpotifyApi
        /// implementation.
        /// </summary>
        public static void SetConfigDelegate(Func<ClientConfig> getConfig);

        /// <summary>
        /// Sets the delegate used to get the ClientConfig from a URL that will be used by the
        /// IUnitySpotifyApi implementation.
        /// </summary>
        public static void SetConfigUrlDelegate(Func<string> getConfig);

        /// <summary>
        /// Initializes a IUnitySpotifyApi implementation. This method will be called automatically
        /// as needed, but can be called directly to initializes the API early.
        /// </summary>
        public static void Init(UnitySpotifyCallback callback);

        /// <summary>
        /// Establishes a connection to a Spotify player. This method will be called automatically
        /// as needed, but can be called directly to establish a connection early.
        /// </summary>
        public static void Connect(UnitySpotifyCallback callback);

        /// <summary>
        /// Resumes playback
        /// </summary>
        public static void Resume(UnitySpotifyCallback callback);

        /// <summary>
        /// Pauses playback
        /// </summary>
        public static void Pause(UnitySpotifyCallback callback);

        /// <summary>
        /// Begins playback of a uri.
        /// </summary>
        /// <param name="positionMs">Position in milliseconds where to start playback</param>
        public static void PlayUri(int positionMs, string uri, UnitySpotifyCallback callback);

        /// <summary>
        /// Set the repeat mode.
        /// </summary>
        public static void Repeat(RepeatMode mode, UnitySpotifyCallback callback);
    }
}
```