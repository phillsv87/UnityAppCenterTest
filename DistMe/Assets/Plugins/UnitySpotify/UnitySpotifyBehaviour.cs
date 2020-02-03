using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UnitySpotifyBehaviour : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        UnitySpotify.Init((err, msg) => LogCallback("Init", err, msg));
    }

    // Update is called once per frame
    void Update()
    {
        UnitySpotify.FlushQueue();
    }

    private void LogCallback(string method, UnitySpotifyError err, string msg)
    {
        Debug.Log($"{method} result - err:{err}, msg:{msg}");
    }


    public void SignIn()
    {
        UnitySpotify.SignIn((err, msg) => LogCallback(nameof(SignIn), err, msg));
    }


    public void Connect()
    {
        UnitySpotify.Connect((err, msg) => LogCallback(nameof(Connect), err, msg));
    }

    public void Resume()
    {
        UnitySpotify.Resume((err, msg) => LogCallback(nameof(Resume), err, msg));
    }

    public void Pause()
    {
        UnitySpotify.Pause((err, msg) => LogCallback(nameof(Pause), err, msg));
    }

    public void RepeatOff()
    {
        UnitySpotify.Repeat(UnitySpotifyRepeatMode.Off, (err, msg) => LogCallback(nameof(RepeatOff), err, msg));
    }

    public void RepeatTrack()
    {
        UnitySpotify.Repeat(UnitySpotifyRepeatMode.Track, (err, msg) => LogCallback(nameof(RepeatTrack), err, msg));
    }

    public void RepeatContext()
    {
        UnitySpotify.Repeat(UnitySpotifyRepeatMode.Context, (err, msg) => LogCallback(nameof(RepeatContext), err, msg));
    }


    public InputField UriInput;
    public InputField PosMsInput;

    public void PlayUri()
    {
        var uri = UriInput?.text;
        var _pos = PosMsInput?.text;

        if (string.IsNullOrWhiteSpace(uri))
        {
            return;
        }

        int pos = int.TryParse(_pos, out int p) ? p : 0;

        UnitySpotify.PlayUri(pos, uri, (err, msg) => LogCallback(nameof(PlayUri), err, msg));

    }

}
