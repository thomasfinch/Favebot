//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFNSound : NSObject
{
    unsigned long soundID;
}

+ (void)vibrate;
+ (void)playSoundNamed:(id)arg1;
+ (id)soundNamed:(id)arg1;
- (void)play;
- (void)dealloc;
- (id)initWithSoundID:(unsigned long)arg1;

@end
