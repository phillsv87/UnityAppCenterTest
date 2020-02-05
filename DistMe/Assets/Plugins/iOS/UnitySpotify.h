//
//  UnitySpotify.h
//  Unity-iPhone
//
//  Created by Phillip Vance on 1/31/20.
//

#ifndef UnitySpotify_h
#define UnitySpotify_h


#include <SpotifyiOS/SpotifyiOS.h>
#import "UnityAppController.h"

extern "C" {

    typedef enum
    {
        UnitySpotifyErrorNone = 0,
        UnitySpotifyErrorInitFailed = 1,
        UnitySpotifyErrorNotSignedIn = 2,
        UnitySpotifyErrorInvalidParam = 3,
        UnitySpotifyErrorOutOfMemory = 4,
        UnitySpotifyErrorSignInCanceled = 5,
        UnitySpotifyErrorSignInFailed = 6,
        UnitySpotifyErrorInitRequired = 7,
        UnitySpotifyErrorApiCallFailed = 8,
        UnitySpotifyErrorSeekFailed = 9,
        UnitySpotifyErrorTimeout = 10,
        UnitySpotifyErrorWorkFailed = 11,
        UnitySpotifyErrorInvalidConfig = 12,
        
    } UnitySpotifyError;

    typedef enum
    {
        UnitySpotifyRepeatModeOff = 0,
        UnitySpotifyRepeatModeTrack = 1,
        UnitySpotifyRepeatModeContext = 2,
    } UnitySpotifyRepeatMode;

    typedef enum
    {
        UnitySpotifyBoolFalse = 0,
        UnitySpotifyBoolTrue = 1
    } UnitySpotifyBool;

    typedef void (*UnitySpotifyCallback)(int cid, UnitySpotifyError error, const unichar * _Nullable msg);

    void UnitySpotifyInit(const unichar * _Nonnull config, int cid, UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyConnect(int cid, UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyResume(int cid, UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyPause(int cid, UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyPlayUri(int positionMs, const unichar * _Nonnull uri, int cid, UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyRepeat(UnitySpotifyRepeatMode mode, int cid, UnitySpotifyCallback _Nullable callback);

    UnitySpotifyBool UnitySpotifyIsConnected();

    UnitySpotifyBool UnitySpotifyIsInited();


}



@interface UnitySpotify : NSObject<SPTSessionManagerDelegate,SPTAppRemoteDelegate, SPTAppRemotePlayerStateDelegate>


@property (nonatomic, strong) SPTSessionManager * _Nullable sessionManager;
@property (nonatomic, strong) SPTConfiguration * _Nullable configuration;
@property (nonatomic, strong) SPTAppRemote * _Nullable appRemote;

-       (id _Nonnull )init:(NSString*_Nonnull)clientId
               redirectUrl:(NSString*_Nonnull)redirectUrl
                apiBaseUrl:(NSString*_Nonnull)apiBaseUrl;

- (void)application:(UIApplication*_Nullable)app
            openURL:(NSURL*_Nullable)url
            options:(NSDictionary<NSString*, id>*_Nullable)options;

- (void)signIn:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback;

- (void)resume:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback;

- (void)pause:(int)cid withCallback:(UnitySpotifyCallback _Nullable )callback;

- (void)play:(NSInteger)positionMs
         uri:(NSString*_Nonnull)uri
         cid:(int)cid
withCallback:(UnitySpotifyCallback _Nullable )callback;

- (void)repeat:(UnitySpotifyRepeatMode)mode
           cid:(int)cid
  withCallback:(UnitySpotifyCallback _Nullable )callback;

@end

@interface UnitySpotifyAppDelegate : UnityAppController
@end

IMPL_APP_CONTROLLER_SUBCLASS(UnitySpotifyAppDelegate)


#endif /* UnitySpotify_h */
