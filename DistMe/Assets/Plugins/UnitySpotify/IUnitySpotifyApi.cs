namespace UnitySpotify
{
    public interface IUnitySpotifyApi
    {
        
        bool IsConnected();

        
        bool IsInited();

        
        void Init(string config, int cid, UnitySpotifyApiCallback callback);

        
        void Connect(int cid, UnitySpotifyApiCallback callback);

        
        void Resume(int cid, UnitySpotifyApiCallback callback);

        
        void Pause(int cid, UnitySpotifyApiCallback callback);

        
        void PlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback);

        
        void Repeat(RepeatMode mode, int cid, UnitySpotifyApiCallback callback);
    }
}