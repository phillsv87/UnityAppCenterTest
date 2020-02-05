using System;
using System.Runtime.InteropServices;
using System.Threading.Tasks;

public class DummyUnitySpotifyApi : IUnitySpotifyApi
{

    private UnitySpotifyBool _IsConnected = UnitySpotifyBool.False;
    private UnitySpotifyBool _IsInited = UnitySpotifyBool.False;

    public void Connect(int cid, UnitySpotifyApiCallback callback)
    {
        _IsConnected = UnitySpotifyBool.True;
        DelayAsync(() => callback?.Invoke(cid,UnitySpotifyError.None,null))._Ignore();
    }

    public void Init(string config, int cid, UnitySpotifyApiCallback callback)
    {
        _IsInited = UnitySpotifyBool.True;
        DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
    }

    public UnitySpotifyBool IsConnected()
    {
        return _IsConnected;
    }

    public UnitySpotifyBool IsInited()
    {
        return _IsInited;
    }

    private async Task DelayAsync(Action work)
    {
        await Task.Delay(300);
        work();
    }

    public void Pause(int cid, UnitySpotifyApiCallback callback)
    {
        DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
    }

    public void PlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback)
    {
        DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
    }

    public void Repeat(UnitySpotifyRepeatMode mode, int cid, UnitySpotifyApiCallback callback)
    {
        DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
    }

    public void Resume(int cid, UnitySpotifyApiCallback callback)
    {
        DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
    }

    public void SignIn(int cid, UnitySpotifyApiCallback callback)
    {
        Connect(cid, callback);
    }
}