//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface TFNTimer : NSObject
{
    NSTimer *_timer;
    id _target;
    SEL _selector;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
- (void).cxx_destruct;
- (void)_timerDidFire:(id)arg1;
- (id)userInfo;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (double)timeInterval;
- (void)setFireDate:(id)arg1;
- (id)fireDate;
- (BOOL)isValid;
- (void)invalidate;
- (void)fire;
- (id)initScheduledTimerWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;

@end

