//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNSubTabBarController, TFNSubTabBarItem, UIView, UIViewController;

@protocol TFNSubTabBarControllerDelegate <NSObject>
- (NSString *)subTabBarController:(TFNSubTabBarController *)arg1 accessibilityLabelForIndex:(int)arg2;
- (void)subTabBarController:(TFNSubTabBarController *)arg1 didSelectViewControllerAtIndex:(int)arg2;
- (void)subTabBarController:(TFNSubTabBarController *)arg1 willSelectViewControllerAtIndex:(int)arg2;
- (NSString *)subTabBarController:(TFNSubTabBarController *)arg1 badgeForIndex:(int)arg2;
- (BOOL)subTabBarController:(TFNSubTabBarController *)arg1 drawGlowForIndex:(int)arg2;
- (struct CGRect)subTabBarController:(TFNSubTabBarController *)arg1 boundsForIndex:(int)arg2;
- (UIViewController *)subTabBarController:(TFNSubTabBarController *)arg1 viewControllerForIndex:(int)arg2;
- (TFNSubTabBarItem *)subTabBarController:(TFNSubTabBarController *)arg1 barItemForIndex:(int)arg2;
- (int)numberOfVisibleTabsInSubTabController:(TFNSubTabBarController *)arg1;

@optional
- (BOOL)shouldShiftGlowForIPad;
- (void)subTabBarControllerDidTapBar:(TFNSubTabBarController *)arg1;
- (TFNSubTabBarItem *)footerBarItemForSubTabBarController:(TFNSubTabBarController *)arg1;
- (TFNSubTabBarItem *)headerBarItemForSubTabBarController:(TFNSubTabBarController *)arg1;
- (void)subTabBarController:(TFNSubTabBarController *)arg1 willSetSelectedIndex:(int)arg2 animated:(BOOL)arg3;
- (UIView *)backgroundViewForSubTabBarController:(TFNSubTabBarController *)arg1;
@end

