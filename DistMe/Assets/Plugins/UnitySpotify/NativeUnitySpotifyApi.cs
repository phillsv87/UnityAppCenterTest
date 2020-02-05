using System.Runtime.InteropServices;

namespace UnitySpotify
{

    /// <summary>
    /// Implements the IUnitySpotifyApi interface using the Spotify Native SDKs using interpo
    /// calls.
    /// </summary>
    public class NativeUnitySpotifyApi : IUnitySpotifyApi
    {

        public enum UnitySpotifyBool
        {
            False = 0,
            True = 1
        }

        private const CharSet DefaultCharSet = CharSet.Unicode;

        [DllImport("__Internal", CharSet = DefaultCharSet)]
        private static extern UnitySpotifyBool UnitySpotifyIsConnected();
        
        [DllImport("__Internal", CharSet = DefaultCharSet)]
        private static extern UnitySpotifyBool UnitySpotifyIsInited();

        [DllImport("__Internal", CharSet = DefaultCharSet)]
        private static extern void UnitySpotifyInit(string config, int cid, UnitySpotifyApiCallback callback);

        [DllImport("__Internal", CharSet = DefaultCharSet)]
        private static extern void UnitySpotifyConnect(int cid, UnitySpotifyApiCallback callback);

        [DllImport("__Internal", CharSet = DefaultCharSet)]
        private static extern void UnitySpotifyResume(int cid, UnitySpotifyApiCallback callback);

        [DllImport("__Internal", CharSet = DefaultCharSet)]
        private static extern void UnitySpotifyPause(int cid, UnitySpotifyApiCallback callback);

        [DllImport("__Internal", CharSet= DefaultCharSet)]
        private static extern void UnitySpotifyPlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback);

        [DllImport("__Internal", CharSet = DefaultCharSet)]
        private static extern void UnitySpotifyRepeat(RepeatMode mode, int cid, UnitySpotifyApiCallback callback);

        public void Connect(int cid, UnitySpotifyApiCallback callback)
        {
            UnitySpotifyConnect(cid,callback);
        }

        public void Init(string config, int cid, UnitySpotifyApiCallback callback)
        {
            UnitySpotifyInit(config,cid,callback);
        }

        public bool IsConnected()
        {
            return UnitySpotifyIsConnected() == UnitySpotifyBool.True;
        }

        public bool IsInited()
        {
            return UnitySpotifyIsInited() == UnitySpotifyBool.True;
        }

        public void Pause(int cid, UnitySpotifyApiCallback callback)
        {
            UnitySpotifyPause(cid,callback);
        }

        public void PlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback)
        {
            UnitySpotifyPlayUri(positionMs,uri,cid,callback);
        }

        public void Repeat(RepeatMode mode, int cid, UnitySpotifyApiCallback callback)
        {
            UnitySpotifyRepeat(mode,cid,callback);
        }

        public void Resume(int cid, UnitySpotifyApiCallback callback)
        {
            UnitySpotifyResume(cid,callback);
        }
    }
}