//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTimer;

@interface TFNRunLoopObserver : NSObject
{
    struct __CFRunLoopObserver *cfObserver;
    CDStruct_b60bbf17 observations;
    unsigned int state;
    TFNTimer *statesResettingTimer;
}

+ (id)sharedRunLoopObserver;
- (void).cxx_destruct;
- (id)_countsStringForActivityCounts:(CDStruct_c0970014 *)arg1 index:(unsigned int)arg2 subsecond:(BOOL)arg3;
- (id)_countsStringForIndex:(unsigned int)arg1 subsecond:(BOOL)arg2;
- (id)description;
- (CDStruct_b60bbf17 *)observations;
- (double)timeIntervalSinceActivityStart;
- (void)dealloc;
- (void)setStateToNormal:(id)arg1;
- (void)setStateToNormalAfterTimeInterval:(double)arg1;
- (void)setStateResettingTimer:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)init;

@end

