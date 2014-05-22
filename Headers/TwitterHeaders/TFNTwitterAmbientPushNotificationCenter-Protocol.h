//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNTwitterAmbientPushNotification, UIImage;

@protocol TFNTwitterAmbientPushNotificationCenter <NSObject>
- (void)cancelAmbientNotifications;
- (void)enqueueImmediateNotificationMessage:(NSString *)arg1;
- (void)enqueueNotification:(TFNTwitterAmbientPushNotification *)arg1 tapHandler:(void (^)(void))arg2;
- (void)enqueueNotificationWithIcon:(UIImage *)arg1 message:(NSString *)arg2 tapHandler:(void (^)(void))arg3;
- (void)enqueueNotificationMessage:(NSString *)arg1 tapHandler:(void (^)(void))arg2;
@end
