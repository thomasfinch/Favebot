//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTwitterUIThreadHangDetector, TFNTwitterWatchdogDetector;

@interface TFNTwitterUIThreadWatchdogManager : NSObject
{
    TFNTwitterUIThreadHangDetector *_hangDetector;
    TFNTwitterWatchdogDetector *_watchdogDetector;
}

+ (id)sharedUIThreadWatchdogManager;
- (void).cxx_destruct;
- (CDStruct_b2fbf00d)_thresholds:(int)arg1;
- (void)_stopHangDetection;
- (void)_startHangDetection;
- (void)setDefaultWatchdogCrashMessageFormat:(id)arg1;
- (void)setDefaultWatchdogCrashMessage:(id)arg1;
- (void)stopWatchdog:(BOOL)arg1;
- (void)startWatchdog:(int)arg1 startTime:(double)arg2;
- (void)dealloc;
- (id)init;

@end

