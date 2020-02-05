using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace UnitySpotify
{

    public class UnitySpotifyBehaviour : MonoBehaviour
    {

        #region config fields
        public string ConfigUrl;
        #endregion

        // Start is called before the first frame update
        void Start()
        {
            UnitySpotifyApi.SetConfigUrlDelegate(()=>ConfigUrl);
        }

        // Update is called once per frame
        void Update()
        {
            UnitySpotifyApi.FlushQueue();
        }

        private void LogCallback(string method, UnitySpotifyError err, string msg)
        {
            Debug.Log($"{method} result - err:{err}, msg:{msg}");
        }


        public void Connect()
        {
            UnitySpotifyApi.Connect((err, msg) => LogCallback(nameof(Connect), err, msg));
        }

        public void Resume()
        {
            UnitySpotifyApi.Resume((err, msg) => LogCallback(nameof(Resume), err, msg));
        }

        public void Pause()
        {
            UnitySpotifyApi.Pause((err, msg) => LogCallback(nameof(Pause), err, msg));
        }

        public void RepeatOff()
        {
            UnitySpotifyApi.Repeat(RepeatMode.Off, (err, msg) => LogCallback(nameof(RepeatOff), err, msg));
        }

        public void RepeatTrack()
        {
            UnitySpotifyApi.Repeat(RepeatMode.Track, (err, msg) => LogCallback(nameof(RepeatTrack), err, msg));
        }

        public void RepeatContext()
        {
            UnitySpotifyApi.Repeat(RepeatMode.Context, (err, msg) => LogCallback(nameof(RepeatContext), err, msg));
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

            UnitySpotifyApi.PlayUri(pos, uri, (err, msg) => LogCallback(nameof(PlayUri), err, msg));

        }

    }
}