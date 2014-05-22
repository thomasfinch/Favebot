//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNViewController.h"

#import "T1SlideshowUserListViewControllerDelegate.h"
#import "TFNPresented.h"
#import "TFNTwitterAuthenticated.h"
#import "TFNZoomableImageViewZoomDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CAGradientLayer, T1BlurrableImageView, T1SlideshowScrollView, T1SlideshowSlide, T1SlideshowStatusView, TFNFullscreenImageTransition, TFNTwitterAccount, TFNTwitterScribeContext, TFNTwitterStatus, UIButton, UIImageView, UILabel, UIPopoverController, UISwipeGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface T1SlideshowViewController : TFNViewController <TFNZoomableImageViewZoomDelegate, T1SlideshowUserListViewControllerDelegate, UIScrollViewDelegate, UIPopoverControllerDelegate, TFNPresented, TFNTwitterAuthenticated>
{
    id <T1SlideshowViewControllerDataSource> _retainedDataSource;
    int _slideCount;
    TFNFullscreenImageTransition *_transition;
    T1SlideshowScrollView *_scrollView;
    UIButton *_closeButton;
    UIView *_topChromeView;
    UIView *_fullScreenRasterizationOverlay;
    int _fullScreenRasterizationOrientation;
    T1SlideshowSlide *_prevSlide;
    T1SlideshowSlide *_currentSlide;
    T1SlideshowSlide *_nextSlide;
    T1SlideshowStatusView *_statusView;
    UIView *_tutorialView;
    UIImageView *_chevronImageView;
    UILabel *_swipeToDismissLabel;
    CAGradientLayer *_tutorialViewGradientLayer;
    UIPopoverController *_popoverController;
    struct {
        unsigned int areMediaViewerDismissGesturesEnabled:1;
        unsigned int withTopChromeBackgroundShown:1;
        unsigned int hideStatusBar:1;
        unsigned int statusViewNeedsUpdate:1;
        unsigned int topChromeNeedsUpdate:1;
        unsigned int dismissing:1;
        unsigned int statusViewShownBeforeRotation:1;
        unsigned int topChromeHiddenBeforeRotation:1;
        unsigned int statusViewShownBeforeVerticalScroll:1;
        unsigned int willFirstVerticalScroll:1;
    } _flags;
    BOOL _displaySlideStatus;
    TFNTwitterAccount *_account;
    id <T1SlideshowViewControllerDelegate> _delegate;
    id <T1SlideshowViewControllerDataSource> _dataSource;
    int _slideIndex;
    TFNTwitterScribeContext *_scribeContext;
    T1BlurrableImageView *_fullScreenRasterization;
    UISwipeGestureRecognizer *_swipeUpGestureRecognizer;
    UISwipeGestureRecognizer *_swipeDownGestureRecognizer;
}

@property(readonly, nonatomic) UISwipeGestureRecognizer *swipeDownGestureRecognizer; // @synthesize swipeDownGestureRecognizer=_swipeDownGestureRecognizer;
@property(readonly, nonatomic) UISwipeGestureRecognizer *swipeUpGestureRecognizer; // @synthesize swipeUpGestureRecognizer=_swipeUpGestureRecognizer;
@property(readonly, nonatomic) T1BlurrableImageView *fullScreenRasterization; // @synthesize fullScreenRasterization=_fullScreenRasterization;
@property(retain, nonatomic) TFNTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) BOOL displaySlideStatus; // @synthesize displaySlideStatus=_displaySlideStatus;
@property(nonatomic) int slideIndex; // @synthesize slideIndex=_slideIndex;
@property(nonatomic) __weak id <T1SlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <T1SlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_setBlurFullScreenRasterization:(id)arg1;
- (void)slideshowUserListViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)zoomScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)zoomScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)zoomableImageViewDidPinchToClose:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (BOOL)zoomableImageViewShouldSupportPinchToClose;
- (void)_favoritesActivityAction:(id)arg1;
- (void)_retweetsActivityAction:(id)arg1;
- (void)_dismissAnimated:(BOOL)arg1;
- (void)_closeAction:(id)arg1;
- (void)_tapAction:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)_handleSwipeDown:(id)arg1;
- (void)_handleSwipeUp:(id)arg1;
- (void)_setStatusViewContentVisible:(BOOL)arg1;
- (void)_setBottomChromeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_isTopChromeViewVisible;
- (void)_setTopChromeViewVisible:(BOOL)arg1 move:(BOOL)arg2;
- (void)_setTopChromeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setChromesVisible:(BOOL)arg1 topAnimated:(BOOL)arg2 bottomAnimated:(BOOL)arg3;
- (void)_setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGAffineTransform)_transformForFullscreenRasterizationWithInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)presentTaggedUserListView;
- (void)_didTapTag:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredStatusBarStyle;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (id)_transitionObject;
- (void)dismissAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <TFNImageTransitionDelegate> transitionDelegate;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_logPromotedEvent:(int)arg1 forStatus:(id)arg2;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeImpressionParameters;
- (id)scribe;
- (void)_updateSlideDisplayResettingOffset:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setStatusViewNeedsUpdateForDisplayedStatus:(id)arg1 displayedTagSet:(id)arg2;
- (void)_updateSlideIndex:(int)arg1 animated:(BOOL)arg2;
- (void)_configureSlide:(id)arg1 atIndex:(int)arg2;
- (void)_configureSlides;
- (id)_previewImageForSlideAtIndex:(int)arg1;
- (id)_imageForSlideAtIndex:(int)arg1;
- (void)reloadSlideshowData;
@property(readonly, nonatomic) TFNTwitterStatus *slideStatus;
- (void)setDataSource:(id)arg1 retain:(BOOL)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end
