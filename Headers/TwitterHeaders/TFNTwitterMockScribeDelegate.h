//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterAuthenticatedScribeDelegate.h"

@class NSMutableArray;

@interface TFNTwitterMockScribeDelegate : NSObject <TFNTwitterAuthenticatedScribeDelegate>
{
    NSMutableArray *_events;
}

@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (id)latestEvent;
- (void)logEvent:(id)arg1 parameters:(id)arg2;
- (id)init;

@end

