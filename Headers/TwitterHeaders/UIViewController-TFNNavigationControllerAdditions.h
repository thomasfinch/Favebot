//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIScrollView;

@interface UIViewController (TFNNavigationControllerAdditions)
@property(nonatomic) int tfn_navigationBarVisibilityOnPush;
- (id)_tfn_parentViewControllerForNavigationContentScroll;
- (id)_tfn_navigationControllerIfTop;
@property(nonatomic) BOOL tfn_sendNavigationContentScrollEventsToParentViewController;
- (void)tfn_navigationContentScrollViewDidScrollToTop:(id)arg1;
- (BOOL)tfn_navigationContentScrollViewShouldScrollToTop:(id)arg1;
- (void)tfn_navigationContentScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)tfn_navigationContentScrollViewDidEndDecelerating:(id)arg1;
- (void)tfn_navigationContentScrollViewWillBeginDecelerating:(id)arg1;
- (void)tfn_navigationContentScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)tfn_navigationContentScrollViewWillBeginDragging:(id)arg1;
- (void)tfn_navigationContentScrollViewDidScroll:(id)arg1 animate:(BOOL)arg2;
@property(readonly, nonatomic) UIScrollView *tfn_navigationContentScrollView;
@end

