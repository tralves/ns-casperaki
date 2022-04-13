//
//  JuceTestStaticLib.m
//  JuceTestStaticLib - Static Library
//
//  Created by Tiago Alves on 08/04/2022.
//

#import <Foundation/Foundation.h>

#import "SoundSystemLibIOS.h"
#import "../../Source/main.h"
#include "../../Source/CasPlayer.h"

CasPlayer casPlayer;

@implementation SoundSystemLibIOS

- (NSNumber*)doubleNumber:(NSNumber*)number {
    int d = getDoubleInt(number.intValue);
    return [NSNumber numberWithInt:d ] ;
}

- (void)initPlayer {
    casPlayer.initSample();
}

- (void)play {
    casPlayer.play();
}

@end
