//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TFNSubTabBarDelegate.h"

@class TFNSubTabBar, UIView;

@interface TFNSubTabBarController : UIViewController <TFNSubTabBarDelegate>
{
    id <TFNSubTabBarControllerDelegate> subTabBarControllerDelegate;
    TFNSubTabBar *_tabBar;
    UIViewController *_selectedViewController;
    UIView *_visibleView;
    int _direction;
    UIView *_backgroundView;
    BOOL _loadingNewController;
}

@property(nonatomic) __weak id <TFNSubTabBarControllerDelegate> subTabBarControllerDelegate; // @synthesize subTabBarControllerDelegate;
@property(readonly, nonatomic) TFNSubTabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void).cxx_destruct;
- (BOOL)shouldShiftGlowForIPad;
- (void)subTabBarDidTapBar:(id)arg1;
- (id)footerBarItemForSubTabBar:(id)arg1;
- (id)headerBarItemForSubTabBar:(id)arg1;
- (id)subTabBar:(id)arg1 accessibilityLabelForTabAtIndex:(int)arg2;
- (id)subTabBar:(id)arg1 badgeForTabAtIndex:(int)arg2;
- (BOOL)subTabBar:(id)arg1 drawGlowForTabAtIndex:(int)arg2;
- (void)subTabBar:(id)arg1 didSelectTabAtIndex:(int)arg2;
- (id)subTabBar:(id)arg1 barItemForIndex:(int)arg2;
- (int)numberOfVisibleTabsInSubTabBar:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) int selectedIndex;
- (void)updateBadges;
- (void)reloadTabs;
- (void)_updateSelectedWithCurrentSelection;
- (void)updateSelectedViewControllerFrame;
- (void)setSelectedViewController:(id)arg1;
- (struct CGRect)boundsForIndex:(int)arg1;
- (id)selectedViewController;
- (struct CGRect)tabBarFrame;
- (void)dealloc;
- (id)initWithDirection:(int)arg1;

@end

