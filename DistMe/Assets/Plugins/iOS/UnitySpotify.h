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
        UnitySpotifyErrorSeekFailed = 9
        
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

    typedef void (^UnitySpotifyCallback)(UnitySpotifyError error, const char * _Nullable msg);

    void UnitySpotifyInit(UnitySpotifyCallback _Nullable callback);

    void UnitySpotifySignIn(UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyConnect(UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyResume(UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyPause(UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyPlayUri(int positionMs, const char * _Nonnull uri, UnitySpotifyCallback _Nullable callback);

    void UnitySpotifyRepeat(UnitySpotifyRepeatMode mode, UnitySpotifyCallback _Nullable callback);

    UnitySpotifyBool UnitySpotifyIsConnected();

    UnitySpotifyBool UnitySpotifyIsInited();


}



@interface UnitySpotify : NSObject<SPTSessionManagerDelegate,SPTAppRemoteDelegate, SPTAppRemotePlayerStateDelegate>


@property (nonatomic, strong) SPTSessionManager * _Nullable sessionManager;
@property (nonatomic, strong) SPTConfiguration * _Nullable configuration;
@property (nonatomic, strong) SPTAppRemote * _Nullable appRemote;

- (void)signIn:(UnitySpotifyCallback _Nullable )callback;

- (void)application:(UIApplication*_Nullable)app openURL:(NSURL*_Nullable)url options:(NSDictionary<NSString*, id>*_Nullable)options;

- (BOOL)isSignedIn;

- (void)resume:(UnitySpotifyCallback _Nullable )callback;

- (void)pause:(UnitySpotifyCallback _Nullable )callback;

- (void)play:(NSInteger)positionMs
         uri:(NSString*_Nonnull)uri
withCallback:(UnitySpotifyCallback _Nullable )callback;

- (void)repeat:(UnitySpotifyRepeatMode)mode withCallback:(UnitySpotifyCallback _Nullable )callback;

@end

@interface UnitySpotifyAppDelegate : UnityAppController
@end

IMPL_APP_CONTROLLER_SUBCLASS(UnitySpotifyAppDelegate)


#endif /* UnitySpotify_h */
