//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "T1AmbientNotificationViewControllerDelegate.h"
#import "TFNTwitterAmbientPushNotificationCenter.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, T1AmbientNotificationContainer, T1AmbientNotificationTitleView, UIView;

__attribute__((visibility("hidden")))
@interface T1AmbientNotificationCenter : NSObject <UIGestureRecognizerDelegate, TFNTwitterAmbientPushNotificationCenter, T1AmbientNotificationViewControllerDelegate>
{
    UIView *_notificationContainerView;
    T1AmbientNotificationTitleView *_notificationTitleView;
    NSMutableArray *_notifications;
    T1AmbientNotificationContainer *_currentContainer;
    BOOL _messageBeingDisplayed;
    id <T1AmbientNotificationCenterDelegate> _delegate;
}

+ (BOOL)isNotifying;
+ (float)notificationHeight;
+ (void)dismissCurrentNotificationAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)dismissCurrentNotification;
+ (id)getContainerViewForFrame:(struct CGRect)arg1;
+ (void)cancelAmbientNotifications;
+ (void)enqueueImmediateNotificationMessage:(id)arg1;
+ (void)enqueueNotificationMessage:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;
+ (void)enqueueNotificationWithIcon:(id)arg1 message:(id)arg2 tapHandler:(CDUnknownBlockType)arg3;
+ (id)defaultCenter;
@property(nonatomic) __weak id <T1AmbientNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cancelAmbientNotifications;
- (void)_showNextMessage;
- (void)_titleAction;
- (void)_handleSwipeUp:(id)arg1;
- (void)_handleSwipeDown:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_removeCurrentNotificationContainerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_replaceCurrentNotificationContainerWithContainer:(id)arg1;
- (void)_showNotificationContainer:(id)arg1;
- (void)_enqueueNotificationContainer:(id)arg1;
- (void)_displayContainer:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_currentViewController;
- (void)dismissAmbientNotificationFromHostedViewController:(id)arg1;
- (void)ambientHostedViewDidResize:(id)arg1;
- (void)showAmbientHostedViewController:(id)arg1;
- (void)dismissAmbientHostedViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isNotifying;
- (void)dismissCurrentNotificationAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentNotification;
- (id)getContainerViewForFrame:(struct CGRect)arg1;
- (void)cancelAmbientNotifications;
- (void)enqueueImmediateNotificationMessage:(id)arg1;
- (void)enqueueNotificationMessage:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;
- (void)enqueueNotificationWithIcon:(id)arg1 message:(id)arg2 tapHandler:(CDUnknownBlockType)arg3;
- (void)enqueueNotification:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

