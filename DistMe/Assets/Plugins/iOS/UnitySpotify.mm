//
//  UnitySpotify.m
//  Unity-iPhone
//
//  Created by Phillip Vance on 1/31/20.
//

#import "UnitySpotify.h"

#define US_LOG(msg, ...) NSLog(@"____________________________ " msg, ##__VA_ARGS__);

static UnitySpotify * _defaultInst=0;


@implementation UnitySpotify {
    UnitySpotifyCallback _signInCallback;
}



-(void)setCallSignInCallback:(UnitySpotifyCallback _Nullable)callback
                   withError:(UnitySpotifyError) error
                  andMessage:(const char * _Nullable) msg
{
    UnitySpotifyCallback cb=self->_signInCallback;
    self->_signInCallback=callback;
    US_LOG("signin CB:%d err:%d newCb:%d",cb?1:0,error,callback?1:0);
    if(cb){
        dispatch_async(dispatch_get_main_queue(), ^{
            cb(error,msg);
        });
    }
}




- (void)sessionManager:(SPTSessionManager *)manager didInitiateSession:(SPTSession *)session
{
    US_LOG("success: %@", session);
    dispatch_async(dispatch_get_main_queue(), ^{
        self.appRemote.connectionParameters.accessToken = session.accessToken;
        [self.appRemote connect];
    });
}

- (void)sessionManager:(SPTSessionManager *)manager didFailWithError:(NSError *)error
{
  US_LOG("fail: %@", error);
}

- (void)sessionManager:(SPTSessionManager *)manager didRenewSession:(SPTSession *)session
{
  US_LOG("renewed: %@", session);
}

- (void)appRemoteDidEstablishConnection:(SPTAppRemote *)appRemote
{
  US_LOG("connected");
  dispatch_async(dispatch_get_main_queue(), ^{
      [self setCallSignInCallback:nil withError:UnitySpotifyErrorNone andMessage:nil];
      self.appRemote.playerAPI.delegate = self;
  });
}

- (void)appRemote:(SPTAppRemote *)appRemote didDisconnectWithError:(NSError *)error
{
  US_LOG("disconnected");
}

- (void)appRemote:(SPTAppRemote *)appRemote didFailConnectionAttemptWithError:(NSError *)error
{
  US_LOG("failed %@",error);
    dispatch_async(dispatch_get_main_queue(), ^{
        [self setCallSignInCallback:nil withError:UnitySpotifyErrorSignInFailed andMessage:nil];
    });
}

- (void)playerStateDidChange:(id<SPTAppRemotePlayerState>)playerState
{
  US_LOG("player state changed");
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

- (void)signIn:(UnitySpotifyCallback _Nullable )callback
{
    
    [self setCallSignInCallback:callback withError:UnitySpotifyErrorSignInCanceled andMessage:nil];
    
    SPTScope requestedScope = SPTAppRemoteControlScope|SPTUserModifyPlaybackStateScope|SPTStreamingScope;
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

- (void)resume:(UnitySpotifyCallback _Nullable )callback
{
    [self.appRemote.playerAPI resume:^(id _Nullable result, NSError * _Nullable error) {
        US_LOG("resume %@ %@",result,error);
        if(callback){
            callback(error?UnitySpotifyErrorApiCallFailed:UnitySpotifyErrorNone,nil);
        }
    }];
}

- (void)pause:(UnitySpotifyCallback _Nullable )callback
{
    [self.appRemote.playerAPI pause:^(id _Nullable result, NSError * _Nullable error) {
        US_LOG("pause %@ %@",result,error);
        if(callback){
            callback(error?UnitySpotifyErrorApiCallFailed:UnitySpotifyErrorNone,nil);
        }
    }];
}
- (void)play:(NSInteger)positionMs uri:(NSString*)uri withCallback:(UnitySpotifyCallback _Nullable )callback
{
    [self.appRemote.playerAPI play:uri callback:^(id _Nullable result, NSError * _Nullable error) {
        US_LOG("play %@ %@",uri,error);
        if(error){
            if(callback){
                callback(UnitySpotifyErrorApiCallFailed,nil);
            }
            return;
        }
        if(positionMs>0){
            [self.appRemote.playerAPI seekToPosition:positionMs callback:^(id  _Nullable result, NSError * _Nullable error2) {
                if(callback){
                    callback(error2?UnitySpotifyErrorSeekFailed:UnitySpotifyErrorNone,nil);
                }
            }];
        }else{
            if(callback){
                callback(UnitySpotifyErrorNone,nil);
            }
        }
    }];
}

- (void)repeat:(UnitySpotifyRepeatMode)mode withCallback:(UnitySpotifyCallback _Nullable )callback
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
    
    [self.appRemote.playerAPI setRepeatMode:sMode callback:^(id  _Nullable result, NSError * _Nullable error) {
        US_LOG("repeat %@",error);
        if(callback){
            callback(error?UnitySpotifyErrorApiCallFailed:UnitySpotifyErrorNone,nil);
        }
    }];
}

- (void)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options
{
    US_LOG("application openURL");
    [self.sessionManager application:app openURL:url options:options];
}

@end


@implementation UnitySpotifyAppDelegate

- (BOOL)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options
{
    if(_defaultInst){
        [_defaultInst application:app openURL:url options:options];
    }
    return [super application:app openURL:url options:options];
}

@end

#define UNSP_INIT()  \
    if(!_defaultInst){\
        US_LOG("Init Required");\
        callback(UnitySpotifyErrorInitRequired,nil);\
        return;\
    }

#define UNSP_VERIFY_SIGNIN() \
    UNSP_INIT();\
    if(![_defaultInst isSignedIn]){\
        US_LOG("SignIn Required");\
        callback(UnitySpotifyErrorNotSignedIn,nil);\
        return;\
    }



void UnitySpotifyInit(UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Init");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        if(_defaultInst){
            if(callback){
                callback(UnitySpotifyErrorNone,nil);
            }
            return;
        }

        _defaultInst = [[UnitySpotify alloc] init];
        if(!_defaultInst){
            if(callback){
                callback(UnitySpotifyErrorInitFailed,nil);
            }
            return;
        }
        
        if(callback){
            callback(UnitySpotifyErrorNone,nil);
        }
        
        US_LOG("Init Success");
    });
}

void UnitySpotifySignIn(UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("SignIn");
    
    dispatch_async(dispatch_get_main_queue(), ^{

        UNSP_INIT();

        [_defaultInst signIn:callback];
    });
}

void UnitySpotifyConnect(UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Connect");
    
    dispatch_async(dispatch_get_main_queue(), ^{

        UNSP_INIT();
        
        [_defaultInst signIn:callback];
    });
}


void UnitySpotifyResume(UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Resume");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        [_defaultInst resume:callback];
    });
}

void UnitySpotifyPause(UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Pause");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        [_defaultInst pause:callback];
    });
}

void UnitySpotifyPlayUri(int positionMs, const unichar * uri, UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Play URI %d %S",positionMs,uri);
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        if(!uri || positionMs<0){
            if(callback){
                callback(UnitySpotifyErrorInvalidParam,nil);
            }
            return;
        }
        
        NSString * str=[NSString stringWithFormat:@"%S",uri];
        if(!str){
            if(callback){
                callback(UnitySpotifyErrorOutOfMemory,nil);
            }
            return;
        }
        
        [_defaultInst play:positionMs uri:str withCallback:callback];
    });
}

void UnitySpotifyRepeat(UnitySpotifyRepeatMode mode, UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Repeat");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        [_defaultInst repeat:mode withCallback:callback];
    });
}

UnitySpotifyBool UnitySpotifyIsConnected()
{
    
    US_LOG("IsConnected");
    
    if(!_defaultInst || !_defaultInst.appRemote){
        return UnitySpotifyBoolFalse;
    }
    
    return _defaultInst.appRemote.connected?UnitySpotifyBoolTrue:UnitySpotifyBoolFalse;
}

UnitySpotifyBool UnitySpotifyIsInited()
{
    
    US_LOG("IsInited");
    
    return _defaultInst?UnitySpotifyBoolTrue:UnitySpotifyBoolFalse;
}
