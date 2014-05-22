//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1WebViewController.h"

#import "TFNChromeLayout.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface T1PhoneWebViewController : T1WebViewController <TFNChromeLayout>
{
    NSArray *_loadingItemsSet;
    NSArray *_loadedItemsSet;
    BOOL _userDidNavigate;
    BOOL _viewDidInitiallyAppear;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tfn_navigationContentScrollView;
- (void)setVisibleChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)setUnderChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)compose:(id)arg1;
- (void)close:(id)arg1;
- (void)action:(id)arg1;
- (id)displaySubtitle;
- (void)didFinishLoadingWithError:(id)arg1;
- (void)willStartLoadingNavigationRequestOfType:(int)arg1;
- (void)_updateToolbarItem:(id)arg1 width:(float)arg2 leftContentInset:(float)arg3;
- (void)_updateToolbarItems:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

@end
