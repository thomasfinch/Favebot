//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTimer, TFNTwitterStream;

__attribute__((visibility("hidden")))
@interface T1StreamPoller : NSObject
{
    TFNTwitterStream *_stream;
    TFNTimer *_pollingTimer;
    double _previousPollingInterval;
    double _pollingIntervalBeforeBackoff;
}

@property(nonatomic) double pollingIntervalBeforeBackoff; // @synthesize pollingIntervalBeforeBackoff=_pollingIntervalBeforeBackoff;
@property(nonatomic) double previousPollingInterval; // @synthesize previousPollingInterval=_previousPollingInterval;
@property(retain, nonatomic) TFNTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) TFNTwitterStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)_resetPollingTimer;
- (void)_pollingTimerDidFire:(id)arg1;
- (void)_backOffPollingInterval;
- (void)_restartPolling;
- (void)stopPolling;
- (void)startPolling;
@property(nonatomic) double pollingInterval;
- (void)_setPollingInterval:(double)arg1;
- (void)resetBackoff;
- (void)dealloc;

@end

