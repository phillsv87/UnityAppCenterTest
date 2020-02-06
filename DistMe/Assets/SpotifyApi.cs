using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class SpotifyApi : MonoBehaviour
{

    private string Token;

    public string ApiBaseUrl= "https://oc-api.ngrok.io/api/";

    public string SpotifyApiBaseUrl = "https://api.spotify.com/v1/";

    public bool AlwaysShowSignIn = false;

    public bool UseKeyboard = false;

    public string ConfigToken="8f5427ac-0219-4d5e-9152-9d18f426bc0d";

    #if UNITY_EDITOR_WIN
    public bool UseSystemOpen = true;
    #else
    public bool UseSystemOpen = false;
    #endif

    public string DeviceId;

    private HttpClient client;

    private UniWebView webView;

    private bool IsPaused = true;

    private string[] Scopes = {
        "user-read-private",
        "user-read-email",
        "app-remote-control",
        "user-read-playback-state",
        "user-modify-playback-state",
        "user-read-currently-playing",
        "streaming"
    };

    public const string TokenPrefsKey= "SpotifyApiToken";

    // Start is called before the first frame update
    void Start()
    {


        if (Token != null)
        {
            var savedToken = PlayerPrefs.GetString(TokenPrefsKey);
            if (savedToken != null)
            {
                Debug.Log("Token loaded from PlayerPrefs - " + savedToken);
                Token = savedToken;
            }
        }

        try{
            var webViewGameObject = new GameObject("UniWebView");
            webView = webViewGameObject.AddComponent<UniWebView>();
            webView.OnShouldClose += (view) => {
                webView = null;
                return true;
            };
        }catch{
            UseSystemOpen=true;
        }

        client = new HttpClient();
    }

    // Update is called once per frame
    void Update()
    {
        if (!UseKeyboard)
        {
            return;
        }

        if (Input.GetKeyDown("l"))
        {
            SignIn();
        }
        else if (Input.GetKeyDown("p"))
        {
            PlayPause();
        }
    }

    private async Task SignInAsync(CancellationToken cancel)
    {
        Debug.Log("Start Spotify Login");
        var r=await client.GetAsync(ApiBaseUrl+"Spotify/"+ConfigToken+"/State",cancel);
        r.EnsureSuccessStatusCode();
        var state = await r.Content.ReadAsStringAsync();
        var task=WaitForCallback(state,cancel);

        var url = "https://accounts.spotify.com/authorize?state=" + state + "&" +
            "show_dialog=" + (AlwaysShowSignIn ? "true" : "false") + "&" +
            "response_type=code&" +
            "client_id=cec072dca1a648f18da1c553888f95d1&" +
            "scope=" + string.Join("%20", Scopes) + "&" +
            "redirect_uri=" + ApiBaseUrl+"/Spotify/"+ConfigToken;

        if (UseSystemOpen)
        {
            Application.OpenURL(url);
        }
        else
        {
            webView.Frame = new Rect(0, 0, Screen.width, Screen.height);
            webView.Load(url);
            webView.Show();
        }

        

    }

    private async Task WaitForCallback(string state, CancellationToken cancel)
    {
        var r = await client.GetAsync(ApiBaseUrl + "Spotify/"+ConfigToken+"/Token?state=" + Uri.EscapeDataString(state),cancel);
        r.EnsureSuccessStatusCode();
        var token = await r.Content.ReadAsStringAsync();
        Token = token;
        PlayerPrefs.SetString(TokenPrefsKey, token);
        PlayerPrefs.Save();
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



    private async Task<string> SendAsync(
        string cmdName,
        HttpMethod method,
        string path,
        string payload,
        CancellationToken cancel)
    {
        var uri = SpotifyApiBaseUrl + path;
        Debug.Log(cmdName+" "+method+" "+uri);

        var request = new HttpRequestMessage(method, uri);
        if (payload != null)
        {
            request.Content = new StringContent(payload);
        }

        var r = await client.SendAsync(request, cancel);
        var str = await r.Content.ReadAsStringAsync();
        Debug.Log(cmdName + " - " + str);
        r.EnsureSuccessStatusCode();
        return str;
    }

    private string GetDeviceIdQuery(bool isFirstParam=true)
    {
        if (string.IsNullOrWhiteSpace(DeviceId))
        {
            return string.Empty;
        }
        else
        {
            return (isFirstParam?"?":"&")+"device_id=" + DeviceId;
        }
    }

    #region API methods

    public void SignIn()
    {
        SignInAsync(CancellationToken.None).Ignore();
    }

    public bool IsSignedIn => Token != null;

    public void Play()
    {
        PlayAsync(CancellationToken.None).Ignore();
    }

    public async Task PlayAsync(CancellationToken cancel)
    {
        await SendAsync(
            "PlayUris",
            HttpMethod.Put,
            "me/player/play" + GetDeviceIdQuery(),
            "{}",
            cancel);
    }

    public void PlayUris(int positionMs, params string[] uris)
    {
        PlayUrisAsync(positionMs, uris, CancellationToken.None).Ignore();
    }

    public async Task PlayUrisAsync(int positionMs, string[] uris, CancellationToken cancel)
    {
        await SendAsync(
            "PlayUris",
            HttpMethod.Put,
            "me/player/play" + GetDeviceIdQuery(),
            @"{""uris"":[""" + string.Join("\",\"",uris) + @"""],""position_ms"":"+positionMs+"}",
            cancel);
    }

    public void PlayTrack(int positionMs, string id)
    {
        PlayUris(positionMs,$"spotify:track:{id}");
    }

    public void Pause()
    {
        PauseAsync(CancellationToken.None).Ignore();
    }

    public async Task PauseAsync(CancellationToken cancel)
    {
        await SendAsync(
            "Pause",
            HttpMethod.Put,
            "me/player/pause" + GetDeviceIdQuery(),
            "{}",
            cancel);
    }

    public async Task RepeatAsync(SpotifyRepeatMode mode, CancellationToken cancel)
    {
        await SendAsync(
            "Repeat",
            HttpMethod.Put,
            "me/player/repeat?state="+mode.ToString().ToLower()+GetDeviceIdQuery(false),
            "{}",
            cancel);
    }

    public void Repeat(SpotifyRepeatMode mode)
    {
        RepeatAsync(mode, CancellationToken.None).Ignore();
    }

    public void RepeatTrack()
    {
        RepeatAsync(SpotifyRepeatMode.Track, CancellationToken.None).Ignore();
    }

    public void RepeatOff()
    {
        RepeatAsync(SpotifyRepeatMode.Off, CancellationToken.None).Ignore();
    }

    public void PlayPause()
    {
        if (IsPaused)
        {
            Play();
        }
        else
        {
            Pause();
        }
        IsPaused = !IsPaused;
    }

    #endregion

}


public static class TaskHelper
{
    public static void Ignore(this Task task)
    {
        //do nothing
    }
}

public enum SpotifyRepeatMode
{
    Off = 0,

    Track = 1,

    Context = 2
}