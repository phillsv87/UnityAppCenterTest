using System;
using System.Collections;
using System.Collections.Generic;
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
    SeekFailed = 9

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

public static class UnitySpotify
{

    private const CharSet DefaultCharSet = CharSet.Unicode;

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern UnitySpotifyBool UnitySpotifyIsConnected();
    
    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern UnitySpotifyBool UnitySpotifyIsInited();

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyInit(UnitySpotifyCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifySignIn(UnitySpotifyCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyConnect(UnitySpotifyCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyResume(UnitySpotifyCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyPause(UnitySpotifyCallback callback);

    [DllImport("__Internal", CharSet= DefaultCharSet)]
    private static extern void UnitySpotifyPlayUri(int positionMs, string uri, UnitySpotifyCallback callback);

    [DllImport("__Internal", CharSet = DefaultCharSet)]
    private static extern void UnitySpotifyRepeat(UnitySpotifyRepeatMode mode, UnitySpotifyCallback callback);



    public static bool IsConnected()
    {
        return UnitySpotifyIsConnected() == UnitySpotifyBool.True;
    }

    public static bool IsInited()
    {
        return UnitySpotifyIsInited() == UnitySpotifyBool.True;
    }

    public static void Init(UnitySpotifyCallback callback)
    {
        QueueWork(false, false, () => UnitySpotifyInit(WorkCallback), callback);
    }

    public static void SignIn(UnitySpotifyCallback callback)
    {
        QueueWork(true, false, () => UnitySpotifySignIn(WorkCallback), callback);
    }

    public static void Connect(UnitySpotifyCallback callback)
    {
        QueueWork(true, false, () => UnitySpotifyConnect(WorkCallback), callback);
    }

    public static void Resume(UnitySpotifyCallback callback)
    {
        QueueWork(true, true, () => UnitySpotifyResume(WorkCallback), callback);
    }

    public static void Pause(UnitySpotifyCallback callback)
    {
        QueueWork(true, true, () => UnitySpotifyPause(WorkCallback), callback);
    }

    public static void PlayUri(int positionMs, string uri, UnitySpotifyCallback callback)
    {
        QueueWork(true, true, () => UnitySpotifyPlayUri(positionMs,uri,WorkCallback), callback);
    }

    public static void Repeat(UnitySpotifyRepeatMode mode, UnitySpotifyCallback callback)
    {
        QueueWork(true, true, () => UnitySpotifyRepeat(mode,WorkCallback), callback);
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
        if (_CallbackQueue.Count == 0)
        {
            return;
        }

        List<Action> callbacks;

        lock (CallbackSync)
        {
            callbacks = _CallbackQueue;
            _CallbackQueue = new List<Action>();
        }

        foreach(var cb in callbacks)
        {
            try
            {
                cb?.Invoke();
            }catch(Exception ex)
            {
                Debug.Log("UnitySpotify callback error: "+ex.Message);
            }
        }
    }


    private class WorkItem
    {
        public UnitySpotifyCallback Callback;
        public Action Work;
    }

    private static readonly object WorkSync = new object();

    private static readonly Queue<WorkItem> _WorkQueue = new Queue<WorkItem>();

    private static WorkItem _CurrentWork = null;

    private static void QueueWork(bool ensureInited, bool ensureConnected, Action work, UnitySpotifyCallback callback)
    {

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

        WorkNext(new WorkItem()
        {
            Work = work,
            Callback = callback
        });
        
    }

    private static void WorkNext(WorkItem addItem)
    {
        WorkItem work = null;
        lock (WorkSync)
        {
            if (addItem != null)
            {
                _WorkQueue.Enqueue(addItem);
            }

            if (_CurrentWork == null && _WorkQueue.Count != 0)
            {
                work = _WorkQueue.Dequeue();
                _CurrentWork = work;
            }
        }
        work?.Work?.Invoke();
    }

    [MonoPInvokeCallback(typeof(UnitySpotifyCallback))]
    private static void WorkCallback(UnitySpotifyError err, string msg)
    {
        AddCallback(() =>
        {
            var current = _CurrentWork;
            _CurrentWork = null;
            current?.Callback?.Invoke(err, msg);
            WorkNext(null);
        });
    }

}
