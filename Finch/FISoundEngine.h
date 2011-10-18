#import "FILogger.h"
#import "FIVector.h"

@interface FISoundEngine : NSObject

@property(copy) FILogger logger;
@property(readonly) BOOL isRunning;
#if TARGET_OS_IPHONE
@property(retain) AVAudioSession *audioSession;
- (BOOL) activateAudioSessionWithCategory: (NSString*) categoryName;
- (void) deactivateAudioSession;
#endif

- (BOOL) openAudioDevice;
- (void) closeAudioDevice;

@property(nonatomic,copy) FIVector *listenerPosition;

@end