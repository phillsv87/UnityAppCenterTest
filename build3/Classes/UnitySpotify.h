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
        
    } UnitySpotifyError;

    typedef enum
    {
        UnitySpotifyRepeatModeOff = 0,
        UnitySpotifyRepeatModeTrack = 1,
        UnitySpotifyRepeatModeContext = 2,
    } UnitySpotifyRepeatMode;

    UnitySpotifyError UnitySpotifyInit();

    UnitySpotifyError UnitySpotifySignIn();

    UnitySpotifyError UnitySpotifyPlay();

    UnitySpotifyError UnitySpotifyPause();

    UnitySpotifyError UnitySpotifyPlayUri(int positionMs, const char * uri);

    UnitySpotifyError UnitySpotifyRepeat(UnitySpotifyRepeatMode mode);


}

@interface UnitySpotify : NSObject<SPTSessionManagerDelegate,SPTAppRemoteDelegate, SPTAppRemotePlayerStateDelegate>


@property (nonatomic, strong) SPTSessionManager *sessionManager;
@property (nonatomic, strong) SPTConfiguration *configuration;
@property (nonatomic, strong) SPTAppRemote *appRemote;

- (void)signIn;

- (void)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options;

- (BOOL)isSignedIn;

- (void)play;

- (void)pause;

- (void)play:(NSInteger)positionMs uri:(NSString*)uri;

- (void)repeat:(UnitySpotifyRepeatMode)mode;

@end

@interface UnitySpotifyAppDelegate : UnityAppController
@end


#endif /* UnitySpotify_h */
