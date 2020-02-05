using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using AOT;
using UnityEngine;

namespace UnitySpotify
{

    

    public delegate void UnitySpotifyCallback(UnitySpotifyError error, string msg);

    public delegate void UnitySpotifyApiCallback(int cid, UnitySpotifyError error, string msg);

    

    public static class UnitySpotifyApi
    {

        

        private static Func<ClientConfig> _ConfigDelegate;

        private static Func<string> _ConfigUrlDelegate;

        private static IUnitySpotifyApi _Api;

        /// <summary>
        /// Returns true if there is a connection is established with a Spotify player.
        /// </summary>
        public static bool IsConnected()
        {
            if (_Api == null)
            {
                return false;
            }

            try
            {
                return _Api.IsConnected();
            }catch(Exception ex)
            {
                Debug.Log("UnitySpotify IsConnected error - " + ex.Message);
                return false;
            }
        }

        /// <summary>
        /// Returns true if an IUnitySpotifyApi implementation has been initialized.
        /// </summary>
        public static bool IsInited()
        {

            if (_Api == null)
            {
                return false;
            }

            try
            {
                return _Api.IsInited();
            }catch(Exception ex)
            {
                Debug.Log("UnitySpotify IsInited error - " + ex.Message);
                return false;
            }
        }

        /// <summary>
        /// Sets the delegate used to get the ClientConfig used by the IUnitySpotifyApi
        /// implementation.
        /// </summary>
        /// <param name="getConfig"></param>
        public static void SetConfigDelegate(Func<ClientConfig> getConfig)
        {
            _ConfigDelegate = getConfig;
        }

        /// <summary>
        /// Sets the delegate used to get the ClientConfig from a URL that will be used by the
        /// IUnitySpotifyApi implementation.
        /// </summary>
        /// <param name="getConfig"></param>
        public static void SetConfigUrlDelegate(Func<string> getConfig)
        {
            _ConfigUrlDelegate = getConfig;
        }

        /// <summary>
        /// Initializes a IUnitySpotifyApi implementation. This method will be called automatically
        /// as needed, but can be called directly to initializes the API early.
        /// </summary>
        /// <param name="callback"></param>
        public static void Init(UnitySpotifyCallback callback)
        {
            QueueWork(false, false, (cid) => InitAsync(cid,CancellationToken.None)._Ignore(), callback);;
        }

        /// <summary>
        /// Establishes a connection to a Spotify player. This method will be called automatically
        /// as nneded, but can be called direclty to establish a connection early.
        /// </summary>
        /// <param name="callback"></param>
        public static void Connect(UnitySpotifyCallback callback)
        {
            QueueWork(true, false, (cid) => _Api.Connect(cid, WorkCallback), callback);
        }

        /// <summary>
        /// Resumes playback
        /// </summary>
        /// <param name="callback"></param>
        public static void Resume(UnitySpotifyCallback callback)
        {
            QueueWork(true, true, (cid) => _Api.Resume(cid, WorkCallback), callback);
        }

        /// <summary>
        /// Pauses playback
        /// </summary>
        /// <param name="callback"></param>
        public static void Pause(UnitySpotifyCallback callback)
        {
            QueueWork(true, true, (cid) => _Api.Pause(cid, WorkCallback), callback);
        }

        /// <summary>
        /// Begains playback of a uri.
        /// </summary>
        /// <param name="positionMs">Position in millisecons where to start playback</param>
        /// <param name="uri"></param>
        /// <param name="callback"></param>
        public static void PlayUri(int positionMs, string uri, UnitySpotifyCallback callback)
        {
            QueueWork(true, true, (cid) => _Api.PlayUri(positionMs, uri, cid, WorkCallback), callback);
        }

        /// <summary>
        /// Set the repeat mode.
        /// </summary>
        /// <param name="mode"></param>
        /// <param name="callback"></param>
        public static void Repeat(RepeatMode mode, UnitySpotifyCallback callback)
        {
            QueueWork(true, true, (cid) => _Api.Repeat(mode, cid, WorkCallback), callback);
        }





        private static async Task InitAsync(int cid, CancellationToken cancel)
        {

            string configString = null;

            ClientConfig config = null;

            try
            {

                if (_ConfigDelegate != null)
                {
                    config = _ConfigDelegate();
                    
                }else if (_ConfigUrlDelegate != null)
                {
                    using (var client = new HttpClient())
                    {
                        var r = await client.GetAsync(_ConfigUrlDelegate(),cancel);
                        r.EnsureSuccessStatusCode();
                        var json=await r.Content.ReadAsStringAsync();
                        config=Newtonsoft.Json.JsonConvert.DeserializeObject<ClientConfig>(json);
                    }
                }

                if (config!=null)
                {
                    var props = typeof(ClientConfig).GetProperties();
                    configString = string.Join(
                        "\n",
                        props.Select(p => p.Name + " " + p.GetValue(config)));
                }

                
            }catch(Exception ex)
            {
                Debug.Log("Create config failed - " + ex.Message+", "+ex.StackTrace);
                WorkCallback(cid, UnitySpotifyError.InitFailed, ex.Message);
                return;
            }

            try
            {
                _Api = new NativeUnitySpotifyApi();
                _Api.IsInited();
            }
            catch
            {
                Debug.Log("Fallback to web api");
                _Api = new WebUnitySpotifyApi(config);
            }

            _Api.Init(configString, cid, WorkCallback);
        }


        private static readonly object CallbackSync = new object();

        private static List<Action> UnitySpotifyApiCallbackQueue = new List<Action>();

        private static void AddCallback(Action callback)
        {
            lock (CallbackSync)
            {
                UnitySpotifyApiCallbackQueue.Add(callback);
            }
        }

        public static void FlushQueue()
        {
            if (UnitySpotifyApiCallbackQueue.Count != 0)
            {
                List<Action> callbacks;

                lock (CallbackSync)
                {
                    callbacks = UnitySpotifyApiCallbackQueue;
                    UnitySpotifyApiCallbackQueue = new List<Action>();
                }

                foreach (var cb in callbacks)
                {
                    try
                    {
                        cb?.Invoke();
                    }
                    catch (Exception ex)
                    {
                        Debug.Log("UnitySpotify callback error: " + ex.Message);
                    }
                }
            }


            if (_WorkQueue.Count != 0)
            {
                List<WorkItem> timeouts = null;
                lock (WorkSync)
                {
                    var now = DateTime.UtcNow;
                    for(int i = 0; i< _WorkQueue.Count; i++)
                    {
                        if (_WorkQueue[i].TTL < now)
                        {
                            if (timeouts == null)
                            {
                                timeouts = new List<WorkItem>();
                            }
                            timeouts.Add(_WorkQueue[i]);
                            _WorkQueue.RemoveAt(i);
                            i--;
                        }
                    }
                }

                if (timeouts != null)
                {
                    foreach (var item in timeouts)
                    {
                        try
                        {
                            item?.Callback?.Invoke(UnitySpotifyError.Timeout, null);
                        }
                        catch (Exception ex)
                        {
                            Debug.Log("UnitySpotify WorkQueue callback error - " + ex.Message);
                        }
                    }
                    WorkNext(null);
                }
            }
        }


        private class WorkItem
        {
            public UnitySpotifyCallback Callback;
            public Action<int> Work;
            public int Cid;
            public bool Active;
            public DateTime TTL;

            public WorkItem(UnitySpotifyCallback callback, Action<int> work)
            {
                Callback = callback;
                Work = work;
            }
        }

        private static readonly object WorkSync = new object();

        private static readonly List<WorkItem> _WorkQueue = new List<WorkItem>();

        private static void QueueWork(bool ensureInited, bool ensureConnected, Action<int> work, UnitySpotifyCallback callback)
        {

            if (work == null)
            {
                throw new ArgumentNullException(nameof(work));
            }

            if(ensureInited && !IsInited())
            {
                Init((err, msg) => QueueWork(false, ensureConnected, work, callback));
                return;
            }

            if (ensureConnected && !IsConnected())
            {
                Connect((err, msg) => QueueWork(false,false,work,callback));
                return;
            }

            WorkNext(new WorkItem(callback,work));
            
        }

        private static void WorkNext(WorkItem addItem)
        {
            WorkItem work = null;
            lock (WorkSync)
            {
                if (addItem != null)
                {
                    int cid = 0;
                    while (_WorkQueue.Any(w=>w.Cid==cid))
                    {
                        cid++;
                    }
                    addItem.Cid = cid;
                    addItem.TTL = DateTime.UtcNow.AddSeconds(15);
                    _WorkQueue.Add(addItem);
                }

                if (_WorkQueue.Count != 0 && !_WorkQueue[0].Active)
                {
                    work = _WorkQueue[0];
                    work.Active = true;
                }
            }
            if (work != null)
            {
                try
                {
                    work.Work(work.Cid);
                }catch(Exception ex)
                {
                    Debug.Log("UnitySpotify work error - " + ex.Message+","+ex.StackTrace);
                    WorkCallback(work.Cid, UnitySpotifyError.WorkFailed, null);
                }
            }
        }

        [MonoPInvokeCallback(typeof(UnitySpotifyApiCallback))]
        private static void WorkCallback(int cid, UnitySpotifyError err, string msg)
        {
            AddCallback(() =>
            {
                WorkItem item;
                lock (WorkSync)
                {
                    item = _WorkQueue.FirstOrDefault(w => w.Cid == cid);
                    if (item != null)
                    {
                        _WorkQueue.Remove(item);
                    }
                }
                try
                {
                    item?.Callback?.Invoke(err, msg);
                }catch(Exception ex)
                {
                    Debug.Log("UnitySpotify WorkQueue callback error - " + ex.Message);
                }
                WorkNext(null);
            });
        }

        internal static void _Ignore(this Task task)
        {
            //do nothing
        }
    }
}