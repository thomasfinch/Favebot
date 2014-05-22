//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewAccessibilityDelegate.h"
#import "UIScrollViewDelegate.h"

@class FilterLibrary, FilterPreview, FilterPreviewView, NSMutableSet, T1FiltersNameView, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface T1FiltersSwipeViewController : UIViewController <UIScrollViewDelegate, UIScrollViewAccessibilityDelegate>
{
    FilterLibrary *_filterLibrary;
    FilterPreview *_filterPreview;
    T1FiltersNameView *_nameView;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    FilterPreviewView *_filterViews[3];
    NSMutableSet *_uniqueFiltersSeen;
    BOOL _disablePageUpdate;
    int _prevPage;
    id <T1FiltersSwipeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <T1FiltersSwipeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applyFiltersForPage:(int)arg1;
- (struct CGRect)_contentFrameForPage:(unsigned int)arg1;
- (struct CGRect)_frameForPage:(unsigned int)arg1;
- (id)accessibilityScrollStatusForScrollView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_currentPageChanged:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (unsigned int)uniqueFiltersSeenCount;
- (void)showChrome:(BOOL)arg1;
- (void)selectIndex:(unsigned int)arg1;
- (float)vignetteIntensity;
- (float)filterIntensity;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFilterLibrary:(id)arg1 filterPreview:(id)arg2;

@end
