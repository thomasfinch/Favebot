//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

@interface UIApplication (PTHUIApplicationCategory)
- (void)dispatchUIDelayed:(CDUnknownBlockType)arg1;
- (void)dispatchBackgroundTaskInQueue:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBackgroundTask:(CDUnknownBlockType)arg1;
- (void)executeBackgroundTask:(CDUnknownBlockType)arg1;
- (void)popIdleDisabled;
- (void)pushIdleDisabled;
- (void)popNetworkActivity;
- (void)pushNetworkActivity;
- (void)deactivateNetworkActivity;
@end

