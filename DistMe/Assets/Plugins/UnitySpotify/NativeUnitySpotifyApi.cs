using System.Runtime.InteropServices;

public class NativeUnitySpotifyApi : IUnitySpotifyApi
{

    private const CharSet DefaultCharSet = CharSet.Unicode;

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern UnitySpotifyBool UnitySpotifyIsConnected();
    
    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern UnitySpotifyBool UnitySpotifyIsInited();

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyInit(string config, int cid, UnitySpotifyApiCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifySignIn(int cid, UnitySpotifyApiCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyConnect(int cid, UnitySpotifyApiCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyResume(int cid, UnitySpotifyApiCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyPause(int cid, UnitySpotifyApiCallback callback);

    [DllImport("__Internal", CharSet= DefaultCharSet)]
    private static extern void UnitySpotifyPlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyRepeat(UnitySpotifyRepeatMode mode, int cid, UnitySpotifyApiCallback callback);

    public void Connect(int cid, UnitySpotifyApiCallback callback)
    {
        UnitySpotifyConnect(cid,callback);
    }

    public void Init(string config, int cid, UnitySpotifyApiCallback callback)
    {
        UnitySpotifyInit(config,cid,callback);
    }

    public UnitySpotifyBool IsConnected()
    {
        return UnitySpotifyIsConnected();
    }

    public UnitySpotifyBool IsInited()
    {
        return UnitySpotifyIsInited();
    }

    public void Pause(int cid, UnitySpotifyApiCallback callback)
    {
        UnitySpotifyPause(cid,callback);
    }

    public void PlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback)
    {
        UnitySpotifyPlayUri(positionMs,uri,cid,callback);
    }

    public void Repeat(UnitySpotifyRepeatMode mode, int cid, UnitySpotifyApiCallback callback)
    {
        UnitySpotifyRepeat(mode,cid,callback);
    }

    public void Resume(int cid, UnitySpotifyApiCallback callback)
    {
        UnitySpotifyResume(cid,callback);
    }

    public void SignIn(int cid, UnitySpotifyApiCallback callback)
    {
        UnitySpotifySignIn(cid,callback);
    }
}