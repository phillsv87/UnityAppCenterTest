namespace UnitySpotify
{
    public class ClientConfig
    {
        public string ClientId { get; set; }
        public string RedirectUrl { get; set; }
        public string RedirectUrlWeb { get; set; }
        public string SpotifyApiBaseUrl { get; set; }
        public string ApiBaseUrl { get; set; }
        public bool AlwaysShowSignIn { get; set; }
    }
}