#import <Foundation/Foundation.h>

@interface FIVector : NSObject
@property(nonatomic) CGFloat x, y, z;
+(id)vectorWithX:(CGFloat)x Y:(CGFloat)y Z:(CGFloat)z;
@end
