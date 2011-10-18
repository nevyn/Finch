#import "FIVector.h"

@implementation FIVector
@synthesize x, y, z;
+(id)vectorWithX:(CGFloat)x Y:(CGFloat)y Z:(CGFloat)z;
{
    FIVector *v = [[FIVector new] autorelease];
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}
-(BOOL)isEqual:(id)object;
{
    return [object isKindOfClass:[self class]] && [object x] == self.x && [object y] == self.y && [object z] == self.z;
}
-(NSString*)description;
{
    return [NSString stringWithFormat:@"(%.2f, %.2f, %.2f)", x, y, z];
}
@end
