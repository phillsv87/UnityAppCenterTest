﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
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

public struct UnitySpotifyConfig
{
    public string ClientId { get; set; }
    public string RedirectUrl { get; set; }
    public string ApiBaseUrl { get; set; }
}

public static class UnitySpotify
{

    private const CharSet DefaultCharSet = CharSet.Unicode;

    public delegate void _Callback(int cid, UnitySpotifyError error, string msg);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern UnitySpotifyBool UnitySpotifyIsConnected();
    
    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern UnitySpotifyBool UnitySpotifyIsInited();

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyInit(string config, int cid, _Callback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifySignIn(int cid, _Callback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyConnect(int cid, _Callback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyResume(int cid, _Callback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyPause(int cid, _Callback callback);

    [DllImport("__Internal", CharSet= DefaultCharSet)]
    private static extern void UnitySpotifyPlayUri(int positionMs, string uri, int cid, _Callback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyRepeat(UnitySpotifyRepeatMode mode, int cid, _Callback callback);

    private static Func<UnitySpotifyConfig> _ConfigDelegate;

    public static bool IsConnected()
    {
        try
        {
            return UnitySpotifyIsConnected() == UnitySpotifyBool.True;
        }catch(Exception ex)
        {
            Debug.Log("UnitySpotify IsConnected error - " + ex.Message);
            return false;
        }
    }

    public static bool IsInited()
    {
        try
        {
            return UnitySpotifyIsInited() == UnitySpotifyBool.True;
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

    public static void Init(UnitySpotifyCallback callback)
    {

        string config;

        if (_ConfigDelegate == null)
        {
            config = null;
        }
        else
        {
            var value = _ConfigDelegate();
            var props = typeof(UnitySpotifyConfig).GetProperties();
            config = string.Join("\n", props.Select(p => p.Name + " " + p.GetValue(value)));
        }

        QueueWork(false, false, (cid) => UnitySpotifyInit(config, cid, WorkCallback), callback);
    }

    public static void SignIn(UnitySpotifyCallback callback)
    {
        QueueWork(true, false, (cid) => UnitySpotifySignIn(cid, WorkCallback), callback);
    }

    public static void Connect(UnitySpotifyCallback callback)
    {
        QueueWork(true, false, (cid) => UnitySpotifyConnect(cid, WorkCallback), callback);
    }

    public static void Resume(UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => UnitySpotifyResume(cid, WorkCallback), callback);
    }

    public static void Pause(UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => UnitySpotifyPause(cid, WorkCallback), callback);
    }

    public static void PlayUri(int positionMs, string uri, UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => UnitySpotifyPlayUri(positionMs, uri, cid, WorkCallback), callback);
    }

    public static void Repeat(UnitySpotifyRepeatMode mode, UnitySpotifyCallback callback)
    {
        QueueWork(true, true, (cid) => UnitySpotifyRepeat(mode, cid, WorkCallback), callback);
    }


    private static readonly object CallbackSync = new object();

    private static List<Action> _CallbackQueue = new List<Action>();

    private static void AddCallback(Action callback)
    {
        lock (CallbackSync)
        {
            _CallbackQueue.Add(callback);
        }
    }

    private static void AddCallback(UnitySpotifyCallback callback, UnitySpotifyError err, string msg)
    {
        if (callback != null)
        {
            AddCallback(()=>callback(err,msg));
        }
    }

    public static void FlushQueue()
    {
        if (_CallbackQueue.Count != 0)
        {
            List<Action> callbacks;

            lock (CallbackSync)
            {
                callbacks = _CallbackQueue;
                _CallbackQueue = new List<Action>();
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
                Debug.Log("UnitySpotify work error - " + ex.Message);
                WorkCallback(work.Cid, UnitySpotifyError.WorkFailed, null);
            }
        }
    }

    [MonoPInvokeCallback(typeof(_Callback))]
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
