//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTwitterFollowControl, TFNTwitterUser;

@protocol TFNTwitterFollowControlDelegate <NSObject>

@optional
- (BOOL)followControl:(TFNTwitterFollowControl *)arg1 batchFollowPendingForUser:(TFNTwitterUser *)arg2;
- (void)followControlCheckmarkValueChanged:(TFNTwitterFollowControl *)arg1;
- (void)followControlNeedsLayout:(TFNTwitterFollowControl *)arg1;
@end

