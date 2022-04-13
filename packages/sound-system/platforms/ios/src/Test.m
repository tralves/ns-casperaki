#import <Foundation/Foundation.h>

#import "Test.h"

@implementation Test

- (NSNumber*)doubleNumber:(NSNumber*)number {
    return [NSNumber numberWithFloat: ([number floatValue] * 2) ] ;
}

@end
