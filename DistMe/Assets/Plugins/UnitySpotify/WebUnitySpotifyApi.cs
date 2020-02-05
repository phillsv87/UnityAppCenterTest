using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class WebUnitySpotifyApi : IUnitySpotifyApi, IDisposable
{

    private string Token;

    public string DeviceId;

    private HttpClient client;

    private UnitySpotifyConfig config;

    private bool AlwaysShowSignIn;

    private string[] Scopes = {
        "app-remote-control",
        "user-modify-playback-state",
        "streaming"
    };

    public const string TokenPrefsKey= "SpotifyApiToken";


    public WebUnitySpotifyApi(UnitySpotifyConfig config)
    {

        this.config = config;

        if (Token != null)
        {
            var savedToken = PlayerPrefs.GetString(TokenPrefsKey);
            if (savedToken != null)
            {
                Debug.Log("Token loaded from PlayerPrefs - " + savedToken);
                Token = savedToken;
            }
        }

        client = new HttpClient();
    }

    public void Dispose()
    {

        client.Dispose();
        client = null;
    }

    private async Task SignInAsync(CancellationToken cancel)
    {
        Debug.Log("Start Spotify Login");
        var r=await client.GetAsync(config.ApiBaseUrl+"/State",cancel);
        r.EnsureSuccessStatusCode();
        var state = await r.Content.ReadAsStringAsync();
        var task = WaitForCallback(state, cancel);

        var url = "https://accounts.spotify.com/authorize?state=" + state + "&" +
            "show_dialog=" + (AlwaysShowSignIn ? "true" : "false") + "&" +
            "response_type=code&" +
            "client_id=cec072dca1a648f18da1c553888f95d1&" +
            "scope=" + string.Join("%20", Scopes) + "&" +
            "redirect_uri=" + config.RedirectUrlWeb ;

        Application.OpenURL(url);

        await task;

    }

    private async Task WaitForCallback(string state, CancellationToken cancel)
    {
        var r = await client.GetAsync(config.ApiBaseUrl + "/Token?state=" + Uri.EscapeDataString(state),cancel);
        r.EnsureSuccessStatusCode();
        var token = await r.Content.ReadAsStringAsync();
        Token = token;
        PlayerPrefs.SetString(TokenPrefsKey, token);
        PlayerPrefs.Save();
        Debug.Log("Token = " + token);
        client.DefaultRequestHeaders.Authorization=
            new AuthenticationHeaderValue("Bearer", token);
    }



    private async Task<string> SendAsync(
        string cmdName,
        HttpMethod method,
        string path,
        string payload,
        CancellationToken cancel)
    {
        var uri = config.SpotifyApiBaseUrl + path;
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

    private async Task PlayAsync(CancellationToken cancel)
    {
        await SendAsync(
            "PlayUris",
            HttpMethod.Put,
            "/me/player/play" + GetDeviceIdQuery(),
            "{}",
            cancel);
    }

    private async Task PlayUrisAsync(int positionMs, string[] uris, CancellationToken cancel)
    {
        await SendAsync(
            "PlayUris",
            HttpMethod.Put,
            "/me/player/play" + GetDeviceIdQuery(),
            @"{""uris"":[""" + string.Join("\",\"",uris) + @"""],""position_ms"":"+positionMs+"}",
            cancel);
    }

    private async Task PauseAsync(CancellationToken cancel)
    {
        await SendAsync(
            "Pause",
            HttpMethod.Put,
            "/me/player/pause" + GetDeviceIdQuery(),
            "{}",
            cancel);
    }

    private async Task RepeatAsync(UnitySpotifyRepeatMode mode, CancellationToken cancel)
    {
        await SendAsync(
            "Repeat",
            HttpMethod.Put,
            "/me/player/repeat?state="+mode.ToString().ToLower()+GetDeviceIdQuery(false),
            "{}",
            cancel);
    }

    private async Task DoAsync(int cid, UnitySpotifyApiCallback callback, Func<Task> work)
    {
        try
        {
            await work();
            callback?.Invoke(cid, UnitySpotifyError.None, null);
        }catch(Exception ex)
        {
            callback?.Invoke(cid, UnitySpotifyError.ApiCallFailed, ex.Message);
        }
    }


    #region API methods


    public UnitySpotifyBool IsConnected()
    {
        return Token != null ? UnitySpotifyBool.True : UnitySpotifyBool.False;
    }

    public UnitySpotifyBool IsInited()
    {
        return UnitySpotifyBool.True;
    }

    public void Init(string config, int cid, UnitySpotifyApiCallback callback)
    {
        callback?.Invoke(cid, UnitySpotifyError.None, null);
    }

    public void Connect(int cid, UnitySpotifyApiCallback callback)
    {
        DoAsync(cid, callback, () => SignInAsync(CancellationToken.None))._Ignore();
    }

    public void Resume(int cid, UnitySpotifyApiCallback callback)
    {
        DoAsync(cid, callback, () => PlayAsync(CancellationToken.None))._Ignore();
    }

    public void Pause(int cid, UnitySpotifyApiCallback callback)
    {
        DoAsync(cid, callback, () => PauseAsync(CancellationToken.None))._Ignore();
    }

    public void PlayUri(int positionMs, string uri, int cid, UnitySpotifyApiCallback callback)
    {
        DoAsync(cid, callback, () => PlayUrisAsync(positionMs,new string[] {uri},CancellationToken.None))._Ignore();
    }

    public void Repeat(UnitySpotifyRepeatMode mode, int cid, UnitySpotifyApiCallback callback)
    {
        DoAsync(cid, callback, () => RepeatAsync(mode,CancellationToken.None))._Ignore();
    }

    #endregion

}