//
//  UnitySpotify.m
//  Unity-iPhone
//
//  Created by Phillip Vance on 1/31/20.
//

#import "UnitySpotify.h"

@implementation UnitySpotify

- (void)sessionManager:(SPTSessionManager *)manager didInitiateSession:(SPTSession *)session
{
  NSLog(@"success: %@", session);
  self.appRemote.connectionParameters.accessToken = session.accessToken;
  [self.appRemote connect];
}

- (void)sessionManager:(SPTSessionManager *)manager didFailWithError:(NSError *)error
{
  NSLog(@"fail: %@", error);
}

- (void)sessionManager:(SPTSessionManager *)manager didRenewSession:(SPTSession *)session
{
  NSLog(@"renewed: %@", session);
}

- (void)appRemoteDidEstablishConnection:(SPTAppRemote *)appRemote
{
  NSLog(@"connected");
  self.appRemote.playerAPI.delegate = self;
}

- (void)appRemote:(SPTAppRemote *)appRemote didDisconnectWithError:(NSError *)error
{
  NSLog(@"disconnected");
}

- (void)appRemote:(SPTAppRemote *)appRemote didFailConnectionAttemptWithError:(NSError *)error
{
  NSLog(@"failed");
}

- (void)playerStateDidChange:(id<SPTAppRemotePlayerState>)playerState
{
  NSLog(@"player state changed");
}



- (id)init
{
    
    self = [super init];
    
    if(!self){
        return self;
    }
    
    NSString *spotifyClientID = @"cec072dca1a648f18da1c553888f95d1";
    NSURL *spotifyRedirectURL = [NSURL URLWithString:@"vnd.spinnycube://callback"];

    self.configuration  = [[SPTConfiguration alloc] initWithClientID:spotifyClientID redirectURL:spotifyRedirectURL];
    
    NSURL *tokenSwapURL = [NSURL URLWithString:@"https://oc-api.ngrok.io/api/Spotify/token"];
    NSURL *tokenRefreshURL = [NSURL URLWithString:@"https://oc-api.ngrok.io/api/Spotify/refresh_token"];

    self.configuration.tokenSwapURL = tokenSwapURL;
    self.configuration.tokenRefreshURL = tokenRefreshURL;
    self.configuration.playURI = @"";

    self.sessionManager = [[SPTSessionManager alloc] initWithConfiguration:self.configuration delegate:self];
    
    self.appRemote = [[SPTAppRemote alloc] initWithConfiguration:self.configuration logLevel:SPTAppRemoteLogLevelDebug];
    self.appRemote.delegate = self;
    
    return self;
    
}

- (void)signIn
{
    
    SPTScope requestedScope = SPTAppRemoteControlScope;
    if (@available(iOS 11.0, *)) {
        [self.sessionManager initiateSessionWithScope:requestedScope options:SPTDefaultAuthorizationOption];
    } else {
        // Fallback on earlier versions
    }
}

- (BOOL)isSignedIn
{
    return self.appRemote.connectionParameters.accessToken!=nil;
}

- (void)play
{
    [self.appRemote.playerAPI resume:nil];
}

- (void)pause
{
    [self.appRemote.playerAPI pause:nil];
}

- (void)play:(NSInteger)positionMs uri:(NSString*)uri
{
    [self.appRemote.playerAPI play:uri callback:^(id  _Nullable result, NSError * _Nullable error) {
        if(!error && positionMs>0){
            [self.appRemote.playerAPI seekToPosition:positionMs callback:nil];
        }
    }];
}

- (void)repeat:(UnitySpotifyRepeatMode)mode
{
    SPTAppRemotePlaybackOptionsRepeatMode sMode;
    switch(mode){
            
        case UnitySpotifyRepeatModeTrack:
            sMode=SPTAppRemotePlaybackOptionsRepeatModeTrack;
            break;
                
        case UnitySpotifyRepeatModeContext:
            sMode=SPTAppRemotePlaybackOptionsRepeatModeContext;
            break;
            
        default:
            sMode=SPTAppRemotePlaybackOptionsRepeatModeOff;
            break;
    }
    
    [self.appRemote.playerAPI setRepeatMode:sMode callback:nil];
}

- (void)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options
{
    [self.sessionManager application:app openURL:url options:options];
}

@end


@implementation UnitySpotifyAppDelegate

- (BOOL)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options
{


    return [super application:app openURL:url options:options];
}

@end

#define UNSP_INIT()  if(UnitySpotifyInit()!=UnitySpotifyErrorNone){return UnitySpotifyErrorInitFailed;}

#define UNSP_VERIFY_SIGNIN() UNSP_INIT();if(![_defaultInst isSignedIn]){return UnitySpotifyErrorNotSignedIn;}


static UnitySpotify * _defaultInst=0;

UnitySpotifyError UnitySpotifyInit()
{
    if(_defaultInst){
        return UnitySpotifyErrorNone;
    }

    _defaultInst = [[UnitySpotify alloc] init];
    if(!_defaultInst){
        return UnitySpotifyErrorInitFailed;
    }
    
    return UnitySpotifyErrorNone;
}

UnitySpotifyError UnitySpotifySignIn()
{

    UNSP_INIT();

    [_defaultInst signIn];
    
    return UnitySpotifyErrorNone;
}


UnitySpotifyError UnitySpotifyPlay()
{
    UNSP_VERIFY_SIGNIN();
    
    [_defaultInst play];
    
    return UnitySpotifyErrorNone;
}

UnitySpotifyError UnitySpotifyPause()
{
    UNSP_VERIFY_SIGNIN();
    
    [_defaultInst pause];
    
    return UnitySpotifyErrorNone;
}

UnitySpotifyError UnitySpotifyPlayUri(int positionMs, const char * uri)
{
    UNSP_VERIFY_SIGNIN();
    
    if(!uri || positionMs<0){
        return UnitySpotifyErrorInvalidParam;
    }
    
    NSString * str=[NSString stringWithCString:uri encoding:NSUTF8StringEncoding];
    if(!str){
        return UnitySpotifyErrorOutOfMemory;
    }
    
    [_defaultInst play:positionMs uri:str];
    
    return UnitySpotifyErrorNone;
}

UnitySpotifyError UnitySpotifyRepeat(UnitySpotifyRepeatMode mode)
{
    UNSP_VERIFY_SIGNIN();
    
    [_defaultInst repeat:mode];
    
    return UnitySpotifyErrorNone;
}
