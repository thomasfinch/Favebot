//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PTHCAAnimationDelegate : NSObject
{
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _stopBlock;
}

+ (id)delegateWithStartBlock:(CDUnknownBlockType)arg1 stopBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;

@end

