//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, TFNLRUDictionary;

__attribute__((visibility("hidden")))
@interface T1CardStateCache : NSObject
{
    TFNLRUDictionary *_cache;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)setCardState:(id)arg1 forKey:(id)arg2;
- (id)cardStateForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

