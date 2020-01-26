using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;
using UnityEngine;

public class SpotiftyLogin : MonoBehaviour
{

    UniWebView webView;

    public string Token;

    private string ApiBaseUrl= "https://oc-api.ngrok.io/api/";

    private HttpClient client;

    private bool IsPaused = true;

    // Start is called before the first frame update
    void Start()
    {


        var webViewGameObject = new GameObject("UniWebView");
        webView = webViewGameObject.AddComponent<UniWebView>();
        webView.OnShouldClose += (view) => {
            webView = null;
            return true;
        };

        client = new HttpClient();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown("l"))
        {
            var t = DoSignInAsync();
        }
        else if (Input.GetKeyDown("p"))
        {
            PlayPause();
        }
    }

    private async Task DoSignInAsync()
    {
        Debug.Log("Start Spotify Login");
        var r=await client.GetAsync(ApiBaseUrl+"Spotify/State");
        r.EnsureSuccessStatusCode();
        var state = await r.Content.ReadAsStringAsync();
        var task=WaitForCallback(client,state);
        webView.Frame = new Rect(0, 0, Screen.width, Screen.height);
        webView.Load(
            "https://accounts.spotify.com/authorize?state=" + state +
            "&show_dialog=false"+
            "&response_type=code&" +
            "client_id=cec072dca1a648f18da1c553888f95d1&" +
            "scope=user-read-private%20user-read-email%20app-remote-control%20user-read-playback-state%20user-modify-playback-state%20user-read-currently-playing%20streaming&" +
            "redirect_uri=" + ApiBaseUrl + "spotify");
        webView.Show();

    }

    private async Task WaitForCallback(HttpClient client, string state)
    {
        var r = await client.GetAsync(ApiBaseUrl + "Spotify/Token?state=" + Uri.EscapeDataString(state));
        r.EnsureSuccessStatusCode();
        var token = await r.Content.ReadAsStringAsync();
        Token = token;
        Debug.Log("Token = " + token);
        client.DefaultRequestHeaders.Authorization=
            new AuthenticationHeaderValue("Bearer", token);
        CloseWebView();
    }

    void OnDestroy()
    {
        CloseWebView();

        client.Dispose();
        client = null;
    }

    void CloseWebView()
    {
        var wv = webView;
        webView = null;
        if (wv != null)
        {
            Destroy(wv);
        }
    }

    //laptop
    //private string DeviceId = "52ab6fce70955db871d077578d45bf8b958f89dd";


    //phone
    private string DeviceId = "5e902bbd3a1f8f1677c418141d3a89f17ef81d73";

    public async Task Play()
    {
        Debug.Log("Play");
        var r = await client.PutAsync("https://api.spotify.com/v1/me/player/play", new StringContent(
            //"{}"
            @"{""uris"":[""spotify:track:4iV5W9uYEdYUVa79Axb7Rh""]}"
        ));
        var str = await r.Content.ReadAsStringAsync();
        r.Headers.Add("Content-Type", "application/json");
        Debug.Log("Play - " + str);
    }

    public async Task Pause()
    {
        Debug.Log("Pause");
        var r=await client.PutAsync("https://api.spotify.com/v1/me/player/pause", new StringContent("{}"));
        var str = await r.Content.ReadAsStringAsync();
        Debug.Log("Pause - " + str);
    }

    public void PlayPause()
    {
        if (IsPaused)
        {
            var t = Play();
        }
        else
        {
            var t = Pause();
        }
        IsPaused = !IsPaused;
    }

    public void Login()
    {
        var t = DoSignInAsync();
    }

}
