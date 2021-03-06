//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface TFNTwitterAmplifyWatchedDurationTimer : NSObject
{
    NSTimer *_timer;
    BOOL _paused;
    unsigned int _videoType;
    double _adDuration;
    double _contentDuration;
}

@property(readonly, nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property(readonly, nonatomic) double adDuration; // @synthesize adDuration=_adDuration;
@property(nonatomic) unsigned int videoType; // @synthesize videoType=_videoType;
- (void).cxx_destruct;
- (void)dispose;
- (void)resume;
- (void)pause;
- (void)_timerTick;
- (id)init;

@end

