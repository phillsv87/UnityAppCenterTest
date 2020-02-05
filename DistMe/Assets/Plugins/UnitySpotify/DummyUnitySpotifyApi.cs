using System;
using System.Runtime.InteropServices;
using System.Threading.Tasks;

namespace UnitySpotify
{

    public class DummyUnitySpotifyApi : IUnitySpotifyApi
    {

        private bool _IsConnected = false;
        private bool _IsInited = false;

        public void Connect(int cid, UnitySpotifyApiCallback callback)
        {
            _IsConnected = true;
            DelayAsync(() => callback?.Invoke(cid,UnitySpotifyError.None,null))._Ignore();
        }

        public void Init(string config, int cid, UnitySpotifyApiCallback callback)
        {
            _IsInited = true;
            DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
        }

        public bool IsConnected()
        {
            return _IsConnected;
        }

        public bool IsInited()
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

        public void Repeat(RepeatMode mode, int cid, UnitySpotifyApiCallback callback)
        {
            DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
        }

        public void Resume(int cid, UnitySpotifyApiCallback callback)
        {
            DelayAsync(() => callback?.Invoke(cid, UnitySpotifyError.None, null))._Ignore();
        }
    }
}