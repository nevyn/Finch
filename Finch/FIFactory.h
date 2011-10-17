#import "FILogger.h"

@protocol FISoundDecoder;
@class FISoundEngine, FISound, FIRevolverSound;

@interface FIFactory : NSObject

@property(retain) NSSet *soundDecoders;
@property(retain) NSBundle *soundBundle;
@property(copy) FILogger logger;

- (FISoundEngine*) buildSoundEngine;
- (id <FISoundDecoder>) decoderForFileAtPath: (NSString*) path;
- (FISound*) loadSoundNamed: (NSString*) soundName;
- (FISound*) loadSoundNamed: (NSString*) soundName maxPolyphony: (NSUInteger) voices;

@end
