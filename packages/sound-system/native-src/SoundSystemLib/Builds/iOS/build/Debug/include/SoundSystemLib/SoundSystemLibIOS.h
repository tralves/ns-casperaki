//
//  JuceTestStaticLib.h
//  JuceTestStaticLib - Static Library
//
//  Created by Tiago Alves on 08/04/2022.
//

#ifndef SoundSystemLibIOS_h
#define SoundSystemLibIOS_h

#import <Foundation/Foundation.h>

@interface SoundSystemLibIOS : NSObject

- (NSNumber*)doubleNumber:(NSNumber*) number;

- (void)initPlayer;
- (void)play;

@end

#endif /* SoundSystemLibIOS_h */
