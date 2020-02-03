using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
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
        QueueWork(false,() =>
        {
            UnitySpotifyInit((err,msg)=>
            {
                AddCallback(callback, err, msg);
                WorkNext();
            });
        });
    }

    public static void SignIn(UnitySpotifyCallback callback)
    {
        QueueWork(false, () =>
        {
            UnitySpotifySignIn((err, msg) =>
            {
                AddCallback(callback, err, msg);
                WorkNext();
            });
        });
    }

    public static void Connect(UnitySpotifyCallback callback)
    {
        QueueWork(false, () =>
        {
            UnitySpotifyConnect((err, msg) =>
            {
                AddCallback(callback, err, msg);
                WorkNext();
            });
        });
    }

    public static void Resume(UnitySpotifyCallback callback)
    {
        QueueWork(true,() =>
        {
            UnitySpotifyResume((err, msg) =>
            {
                AddCallback(callback, err, msg);
                WorkNext();
            });
        });
    }

    public static void Pause(UnitySpotifyCallback callback)
    {
        QueueWork(true,() =>
        {
            UnitySpotifyPause((err, msg) =>
            {
                AddCallback(callback, err, msg);
                WorkNext();
            });
        });
    }

    public static void PlayUri(int positionMs, string uri, UnitySpotifyCallback callback)
    {
        QueueWork(true,() =>
        {
            UnitySpotifyPlayUri(positionMs,uri,(err, msg) =>
            {
                AddCallback(callback, err, msg);
                WorkNext();
            });
        });
    }

    public static void Repeat(UnitySpotifyRepeatMode mode, UnitySpotifyCallback callback)
    {
        QueueWork(true,() =>
        {
            UnitySpotifyRepeat(mode,(err, msg) =>
            {
                AddCallback(callback, err, msg);
                WorkNext();
            });
        });
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


    private static readonly object WorkSync = new object();

    private static readonly Queue<Action> _WorkQueue = new Queue<Action>();

    private static Action _CurrentWork = null;

    private static void QueueWork(bool ensureConnected, Action work)
    {

        if (ensureConnected && !IsConnected())
        {
            Connect((err, msg) =>
            {
                WorkNext(work);
            });
        }
        else
        {

            WorkNext(work);
        }
    }

    private static void WorkNext(Action addWork=null)
    {
        Task.Run(() =>
        {
            Action work = null;
            lock (WorkSync)
            {
                if (addWork == null)
                {
                    _CurrentWork = null;
                }
                else
                { 
                    _WorkQueue.Enqueue(addWork);
                }

                if(_CurrentWork==null && _WorkQueue.Count != 0)
                {
                    work = _WorkQueue.Dequeue();
                    _CurrentWork = work;
                }
            }
            work?.Invoke();
        });
    }

}
