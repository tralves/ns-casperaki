//
//  JuceTestStaticLib.h
//  JuceTestStaticLib - Static Library
//
//  Created by Tiago Alves on 08/04/2022.
//

#ifndef JuceTestStaticLib_h
#define JuceTestStaticLib_h

#import <Foundation/Foundation.h>

@interface JuceTestStaticLib : NSObject

- (NSNumber*)doubleNumber:(NSNumber*) number;

- (void)initPlayer;
- (void)play;

@end

#endif /* JuceTestStaticLib_h */
