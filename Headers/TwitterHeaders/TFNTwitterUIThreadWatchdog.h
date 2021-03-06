//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface TFNTwitterUIThreadWatchdog : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_queue> *_queue;
    int _type;
    int _mode;
    unsigned int _stopTaskIdentifier;
    double _hangTimeout;
    double _watchdogTimeout;
    double _endTime;
    NSString *_scribeSection;
    BOOL _hangSentinelExists;
    NSString *_watchdogCrashMessage;
    BOOL _ignoreHeartBeatResult;
    BOOL _stopped;
    BOOL _hangDetected;
    double _startTime;
    double _currentTimeout;
}

@property(nonatomic) BOOL hangDetected; // @synthesize hangDetected=_hangDetected;
@property(nonatomic) double currentTimeout; // @synthesize currentTimeout=_currentTimeout;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) BOOL stopped; // @synthesize stopped=_stopped;
@property BOOL ignoreHeartBeatResult; // @synthesize ignoreHeartBeatResult=_ignoreHeartBeatResult;
- (void).cxx_destruct;
- (void)_crashForAppLaunchWatchdog;
- (void)_crashForEnterForegroundWatchdog;
- (void)_crashForEnterBackgroundWatchdog;
- (void)_crashForDefaultWatchdog;
- (void)_crashForWatchdog;
- (id)_scribeSection;
- (void)_removeAndScribeHangSentinel;
- (void)setWatchdogCrashMessage:(id)arg1;
- (void)removeHangSentinel;
- (void)scheduleNextHeartBeat:(double)arg1;
- (void)checkHeartBeatResponse:(BOOL)arg1;
- (void)heartBeatResponse;
- (void)heartBeat;
- (void)_endBackgroundTask;
- (void)_stop;
- (void)_start:(int)arg1 startTime:(double)arg2 thresholds:(CDStruct_b2fbf00d)arg3;
- (void)stop;
- (void)start:(int)arg1 startTime:(double)arg2 thresholds:(CDStruct_b2fbf00d)arg3;
- (id)initWithType:(int)arg1;

@end

