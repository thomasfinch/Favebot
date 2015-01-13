//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class PTHNavigationController, PTHTweetbotMainPhoneController, PTHWindow, UIViewController;

@interface PTHTweetbotAppDelegate : NSObject <UIApplicationDelegate>
{
    BOOL _firstTime;
    PTHTweetbotMainPhoneController *_mainController;
    PTHNavigationController *_navigationController;
    BOOL _wasBackground;
    PTHWindow *_window;
    CDUnknownBlockType _openURLBlock;
}

@property(copy, nonatomic) CDUnknownBlockType openURLBlock; // @synthesize openURLBlock=_openURLBlock;
@property(readonly, retain, nonatomic) PTHTweetbotMainPhoneController *mainController; // @synthesize mainController=_mainController;
@property(retain, nonatomic) PTHWindow *window; // @synthesize window=_window;
- (void)dealloc;
- (void)configureSupportMailController:(id)arg1;
- (void)followOnTwitter:(id)arg1;
- (void)followTapbotsFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, retain, nonatomic) UIViewController *currentViewController;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)_showNotification:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)_sendSecondHeartbeat;
- (void)_sendMinuteHeartbeat;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)_application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;

@end

