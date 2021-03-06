//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLSEventLogEvent.h"

@class NSString;

@interface CLSAnalyticsEvent : CLSEventLogEvent
{
    NSString *_eventIdentifier;
}

@property(readonly, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (id)initWithApplicationNotificationName:(id)arg1 timestamp:(unsigned long long)arg2 eventIdentifier:(id)arg3;
- (id)initApplicationCrashedEventWithTimestamp:(unsigned long long)arg1 eventIdentifier:(id)arg2;
- (id)initApplicationLaunchedEventWithTimestamp:(unsigned long long)arg1 eventIdentifier:(id)arg2;
- (id)initApplicationInstalledEventWithTimestamp:(unsigned long long)arg1 eventIdentifier:(id)arg2;
- (id)initWithPriority:(unsigned int)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 eventIdentifier:(id)arg4;
- (id)initWithPriority:(unsigned int)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 payload:(id)arg4;
- (void)dealloc;

@end

