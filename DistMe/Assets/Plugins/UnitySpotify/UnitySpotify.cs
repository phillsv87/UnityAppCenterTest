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

public enum UnitySpotifyError
{
    None = 0,
    InitFailed = 1,
    NotSignedIn = 2,
    InvalidParam = 3,
    OutOfMemory = 4,
    SignInCanceled = 5,
    SignInFailed = 6,
    InitRequired = 7,
    ApiCallFailed = 8,
    SeekFailed = 9,
    Timeout = 10,
    WorkFailed = 11,
    InvalidConfig = 12,
    ConfigNotSet = 13

}

public enum UnitySpotifyRepeatMode
{
    Off = 0,
    Track = 1,
    Context = 2,
}

public enum UnitySpotifyBool
{
    False = 0,
    True = 1
}

public delegate void UnitySpotifyCallback(UnitySpotifyError error, string msg);

public delegate void UnitySpotifyApiCallback(int cid, UnitySpotifyError error, string msg);

public class UnitySpotifyConfig
{
    public string ClientId { get; set; }
    public string RedirectUrl { get; set; }
    public string RedirectUrlWeb { get; set; }
    public string SpotifyApiBaseUrl { get; set; }
    public string ApiBaseUrl { get; set; }
    public bool AlwaysShowSignIn { get; set; }
}

public interface IUnitySpotifyApi
{
    
    UnitySpotifyBool IsConnected();

    
    UnitySpotifyBool IsInited();

    
    void Init(string config, int cid, UnitySpotifyApiCallback callback);

    
    void Connect(int cid, UnitySpotifyApiCallback callback);

    
    void Resume(int cid, UnitySpotifyApiCallback callback);

    
    void Pause(int cid, UnitySpotifyApiCallback callback);

    
    void PlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback);

    
    void Repeat(UnitySpotifyRepeatMode mode, int cid, UnitySpotifyApiCallback callback);
}

public static class UnitySpotify
{

    

    private static Func<UnitySpotifyConfig> _ConfigDelegate;

    private static Func<string> _ConfigUrlDelegate;

    private static IUnitySpotifyApi _Api;

    public static bool IsConnected()
    {
        if (_Api == null)
        {
            return false;
        }

        try
        {
            return _Api.IsConnected() == UnitySpotifyBool.True;
        }catch(Exception ex)
        {
            Debug.Log("UnitySpotify IsConnected error - " + ex.Message);
            return false;
        }
    }

    public static bool IsInited()
    {

        if (_Api == null)
        {
            return false;
        }

        try
        {
            return _Api.IsInited() == UnitySpotifyBool.True;
        }catch(Exception ex)
        {
            Debug.Log("UnitySpotify IsInited error - " + ex.Message);
            return false;
        }
    }

    public static void SetConfigDelegate(Func<UnitySpotifyConfig> getConfig)
    {
        _ConfigDelegate = getConfig;
    }

    public static void SetConfigUrlDelegate(Func<string> getConfig)
    {
        _ConfigUrlDelegate = getConfig;
    }

    public static void Init(UnitySpotifyCallback callback)
    {
        QueueWork(false, false, (cid) => InitAsync(cid,CancellationToken.None)._Ignore(), callback);;
    }

    private static async Task InitAsync(int cid, CancellationToken cancel)
    {

        string configString = null;

        UnitySpotifyConfig config = null;

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
                    config=Newtonsoft.Json.JsonConvert.DeserializeObject<UnitySpotifyConfig>(json);
                }
            }

            if (config!=null)
            {
                var props = typeof(UnitySpotifyConfig).GetProperties();
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
            //_Api = new DummyUnitySpotifyApi();
            _Api.IsInited();
        }
        catch
        {
            Debug.Log("Fallback to web api");
            _Api = new WebUnitySpotifyApi(config);
        }

        _Api.Init(configString, cid, WorkCallback);
    }

    public static void Connect(UnitySpotifyCallback callback)
    {
        QueueWork(true, false, (cid) => _Api.Connect(cid, WorkCallback), callback);
    }

    public static void Resume(UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => _Api.Resume(cid, WorkCallback), callback);
    }

    public static void Pause(UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => _Api.Pause(cid, WorkCallback), callback);
    }

    public static void PlayUri(int positionMs, string uri, UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => _Api.PlayUri(positionMs, uri, cid, WorkCallback), callback);
    }

    public static void Repeat(UnitySpotifyRepeatMode mode, UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => _Api.Repeat(mode, cid, WorkCallback), callback);
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

}



public static class TaskHelper
{
    public static void _Ignore(this Task task)
    {
        //do nothing
    }
}