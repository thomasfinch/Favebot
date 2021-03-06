//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1PhoneStorkViewController.h"

#import "TFNSwipeViewControllerDataSource.h"
#import "TFNSwipeViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, TFNSwipeViewController;

__attribute__((visibility("hidden")))
@interface T1PhoneStorkPanelsViewController : T1PhoneStorkViewController <TFNSwipeViewControllerDataSource, TFNSwipeViewControllerDelegate, UIGestureRecognizerDelegate>
{
    TFNSwipeViewController *_swipeController;
    NSArray *_panelControllers;
}

- (void).cxx_destruct;
- (void)swipeViewController:(id)arg1 didUpdateSwipePosition:(float)arg2;
- (void)swipeViewController:(id)arg1 didUpdateCurrentIndex:(int)arg2;
- (id)swipeViewController:(id)arg1 viewControllerAtIndex:(int)arg2;
- (int)numberOfViewControllersInSwipeViewController:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (Class)_viewControllerClassForPanelState:(unsigned int)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)init;

@end

