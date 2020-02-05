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
    int _signInCid;
}



-(void)setCallSignInCallback:(UnitySpotifyCallback _Nullable)callback
                         cid:(int)cid
                   withError:(UnitySpotifyError) error
                  andMessage:(const unichar * _Nullable) msg
{
    UnitySpotifyCallback cb=self->_signInCallback;
    int _cid=self->_signInCid;
    self->_signInCallback=callback;
    self->_signInCid=cid;
    if(cb){
        dispatch_async(dispatch_get_main_queue(), ^{
            cb(_cid,error,msg);
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
      [self setCallSignInCallback:nil cid:-1 withError:UnitySpotifyErrorNone andMessage:nil];
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
        [self setCallSignInCallback:nil cid:-1 withError:UnitySpotifyErrorSignInFailed andMessage:nil];
    });
}

- (void)playerStateDidChange:(id<SPTAppRemotePlayerState>)playerState
{
  US_LOG("player state changed");
}



-       (id _Nonnull)init:(NSString*_Nonnull)clientId
              redirectUrl:(NSString*_Nonnull)redirectUrl
               apiBaseUrl:(NSString*_Nonnull)apiBaseUrl;
{
    self = [super init];
    
    if(!self){
        return self;
    }
    
    NSURL *spotifyRedirectURL = [NSURL URLWithString:redirectUrl];

    self.configuration  = [[SPTConfiguration alloc] initWithClientID:clientId redirectURL:spotifyRedirectURL];
    
    NSURL *tokenSwapURL = [NSURL URLWithString:[NSString stringWithFormat:@"%@/token",apiBaseUrl]];
    NSURL *tokenRefreshURL = [NSURL URLWithString:[NSString stringWithFormat:@"%@/refresh_token",apiBaseUrl]];

    self.configuration.tokenSwapURL = tokenSwapURL;
    // tmp disable
    //self.configuration.tokenRefreshURL = tokenRefreshURL;
    self.configuration.playURI = nil;

    self.sessionManager = [[SPTSessionManager alloc] initWithConfiguration:self.configuration delegate:self];
    
    self.appRemote = [[SPTAppRemote alloc] initWithConfiguration:self.configuration logLevel:SPTAppRemoteLogLevelDebug];
    self.appRemote.delegate = self;
    
    return self;
    
}

- (void)signIn:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback
{
    
    [self setCallSignInCallback:callback cid:cid withError:UnitySpotifyErrorSignInCanceled andMessage:nil];
    
    SPTScope requestedScope = SPTAppRemoteControlScope|SPTUserModifyPlaybackStateScope|SPTStreamingScope;
    if (@available(iOS 11.0, *)) {
        [self.sessionManager initiateSessionWithScope:requestedScope options:SPTDefaultAuthorizationOption];
    } else {
        // Fallback on earlier versions
    }
}

- (void)resume:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback
{
    [self.appRemote.playerAPI resume:^(id _Nullable result, NSError * _Nullable error) {
        US_LOG("resume %@ %@",result,error);
        if(callback){
            callback(cid,error?UnitySpotifyErrorApiCallFailed:UnitySpotifyErrorNone,nil);
        }
    }];
}

- (void)pause:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback
{
    [self.appRemote.playerAPI pause:^(id _Nullable result, NSError * _Nullable error) {
        US_LOG("pause %@ %@",result,error);
        if(callback){
            callback(cid,error?UnitySpotifyErrorApiCallFailed:UnitySpotifyErrorNone,nil);
        }
    }];
}
- (void)play:(NSInteger)positionMs uri:(NSString*)uri cid:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback
{
    [self.appRemote.playerAPI play:uri callback:^(id _Nullable result, NSError * _Nullable error) {
        US_LOG("play %@ %@",uri,error);
        if(error){
            if(callback){
                callback(cid,UnitySpotifyErrorApiCallFailed,nil);
            }
            return;
        }
        if(positionMs>0){
            [self.appRemote.playerAPI seekToPosition:positionMs callback:^(id  _Nullable result, NSError * _Nullable error2) {
                if(callback){
                    callback(cid,error2?UnitySpotifyErrorSeekFailed:UnitySpotifyErrorNone,nil);
                }
            }];
        }else{
            if(callback){
                callback(cid,UnitySpotifyErrorNone,nil);
            }
        }
    }];
}

- (void)repeat:(UnitySpotifyRepeatMode)mode cid:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback
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
            callback(cid,error?UnitySpotifyErrorApiCallFailed:UnitySpotifyErrorNone,nil);
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
        if(callback){callback(cid,UnitySpotifyErrorInitRequired,nil);}\
        return;\
    }

#define UNSP_VERIFY_SIGNIN() \
    UNSP_INIT();\
    if(!UnitySpotifyIsInited()){\
        US_LOG("SignIn Required");\
        if(callback){callback(cid,UnitySpotifyErrorNotSignedIn,nil);}\
        return;\
    }




void UnitySpotifyInit(const unichar * _Nonnull config, int cid, UnitySpotifyCallback _Nullable callback)
{
    US_LOG("Init");
    
    if(!config){
        if(callback){
            callback(cid,UnitySpotifyErrorInvalidConfig,nil);
        }
        return;
    }
    
    
    NSString * clientId=nil;
    NSString * redirectUrl=nil;
    NSString * apiBaseUrl=nil;
    
    NSString * str=[NSString stringWithFormat:@"%S",config];
    US_LOG(@"Config:\n%@",str);
    if(!str){
        if(callback){
            callback(cid,UnitySpotifyErrorOutOfMemory,nil);
        }
        return;
    }
    
    NSArray * lines=[str componentsSeparatedByString:@"\n"];
    for(NSString * line in lines){
        NSArray * parts=[line componentsSeparatedByCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        NSString * key=parts[0];
        NSString * value=parts[parts.count-1];
        key=[key stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        value=[value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        
        if([key        caseInsensitiveCompare:@"clientId"] == NSOrderedSame){
            clientId=value;
        } else if([key caseInsensitiveCompare:@"redirectUrl"] == NSOrderedSame){
            redirectUrl=value;
        } else if([key caseInsensitiveCompare:@"apiBaseUrl"] == NSOrderedSame){
            apiBaseUrl=value;
        }
        
    }
    
    
    NSString * errorMsg=nil;
    
    if(!clientId){
        errorMsg=@"config.clientId required";
    } else if(!redirectUrl){
        errorMsg=@"config.redirectUrl required";
    } else if(!apiBaseUrl){
        errorMsg=@"config.apiBaseUrl required";
    }
    
    if(errorMsg){
        
        US_LOG("Invalid config: %@",errorMsg);
        
        if(callback){
            NSData * data = [errorMsg dataUsingEncoding:NSUnicodeStringEncoding];
            const unichar* ptr = (const unichar*)data.bytes;
            callback(cid,UnitySpotifyErrorInvalidConfig,ptr);
        }
        
        return;
    }
    
    US_LOG("Config Set");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        if(_defaultInst){
            if(callback){
                callback(cid,UnitySpotifyErrorNone,nil);
            }
            return;
        }

        _defaultInst = [[UnitySpotify alloc] init:clientId
                                      redirectUrl:redirectUrl
                                       apiBaseUrl:apiBaseUrl];
        if(!_defaultInst){
            if(callback){
                callback(cid,UnitySpotifyErrorInitFailed,nil);
            }
            return;
        }
        
        if(callback){
            callback(cid,UnitySpotifyErrorNone,nil);
        }
        
        US_LOG("Init Success");
    });
}

void UnitySpotifyConnect(int cid, UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Connect");
    
    dispatch_async(dispatch_get_main_queue(), ^{

        UNSP_INIT();
        
        [_defaultInst signIn:cid withCallback:callback];
    });
}


void UnitySpotifyResume(int cid, UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Resume");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        [_defaultInst resume:cid withCallback:callback];
    });
}

void UnitySpotifyPause(int cid, UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Pause");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        [_defaultInst pause:cid withCallback:callback];
    });
}

void UnitySpotifyPlayUri(int positionMs, const unichar * uri, int cid, UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Play URI %d %S",positionMs,uri);
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        if(!uri || positionMs<0){
            if(callback){
                callback(cid,UnitySpotifyErrorInvalidParam,nil);
            }
            return;
        }
        
        NSString * str=[NSString stringWithFormat:@"%S",uri];
        if(!str){
            if(callback){
                callback(cid,UnitySpotifyErrorOutOfMemory,nil);
            }
            return;
        }
        
        [_defaultInst play:positionMs uri:str cid:cid withCallback:callback];
    });
}

void UnitySpotifyRepeat(UnitySpotifyRepeatMode mode, int cid, UnitySpotifyCallback _Nullable callback)
{
    
    US_LOG("Repeat");
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        UNSP_VERIFY_SIGNIN();
        
        [_defaultInst repeat:mode cid:cid withCallback:callback];
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
