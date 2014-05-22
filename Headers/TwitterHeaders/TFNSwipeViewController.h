//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, UIScrollView;

@interface TFNSwipeViewController : UIViewController <UIScrollViewDelegate>
{
    NSMutableArray *_entries;
    BOOL _visible;
    BOOL _viewHasAppeared;
    int _targetIndex;
    BOOL _establishingTargetIndex;
    float _endDragContentOffsetX;
    BOOL _forceNotification;
    CDUnknownBlockType _scrollAnimationCompletion;
    BOOL _swiping;
    id <TFNSwipeViewControllerDataSource> _dataSource;
    id <TFNSwipeViewControllerDelegate> _delegate;
    float _viewSpacing;
    UIScrollView *_scrollView;
    int _currentIndex;
    int _viewControllerPreloadDistance;
}

@property(nonatomic) int viewControllerPreloadDistance; // @synthesize viewControllerPreloadDistance=_viewControllerPreloadDistance;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) BOOL swiping; // @synthesize swiping=_swiping;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) float viewSpacing; // @synthesize viewSpacing=_viewSpacing;
@property(nonatomic) __weak id <TFNSwipeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TFNSwipeViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_accessibilityStringForTimelineAtIndex:(int)arg1;
- (BOOL)accessibilityScroll:(int)arg1;
- (void)_setScrollsToTop:(BOOL)arg1 onView:(id)arg2 ofEntry:(id)arg3;
- (void)_updateScrollsToTop;
- (void)_performDelayedLoadOfCurrentViewController;
- (void)_cancelDelayedLoadOfCurrentViewController;
- (void)_scheduleDelayedLoadOfCurrentViewController;
- (void)_detachEntry:(id)arg1;
- (BOOL)_attachViewControllerAtIndex:(int)arg1 visible:(BOOL)arg2 load:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_updateAttachedViewControllers;
- (void)_updateCurrentIndex;
- (void)_scrollToIndex:(int)arg1 animated:(BOOL)arg2 forceNotification:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_layoutViewControllers;
- (void)_recalculateContentSize;
- (void)_didEndScrolling;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_notifyWillUpdateCurrentIndex;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_endAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)enumerateViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)unloadViewControllerAtIndex:(int)arg1;
- (BOOL)isViewControllerLoadedAtIndex:(int)arg1;
- (void)_viewControllersDidChange:(BOOL)arg1;
- (void)moveViewControllerAtIndex:(int)arg1 toIndex:(int)arg2;
- (void)removeViewControllerAtIndex:(int)arg1;
- (void)insertViewControllerAtIndex:(int)arg1;
- (void)reloadViewControllerData;
- (id)viewControllerAtIndex:(int)arg1;
- (int)numberOfViewControllers;
@property(readonly, nonatomic) UIViewController *currentViewController;
- (void)setCurrentIndex:(int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
