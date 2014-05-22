//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNViewController.h"

#import "T1DirectMessagesImportContactsDelegate.h"
#import "TFNChromeLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, TFNCollectionView, TFNTableView, TFNTimer, UICollectionViewLayout, UIControl<TFNPullToLoadTopControl>, UIScrollView<TFNDataView>;

@interface TFNDataViewController : TFNViewController <T1DirectMessagesImportContactsDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, TFNChromeLayout>
{
    BOOL _needsUpdate;
    BOOL _needsReload;
    TFNTimer *_asyncUpdateTimer;
    BOOL _hasLoadedInitialData;
    BOOL _viewHasAppeared;
    BOOL _viewHasLaidOut;
    NSMutableArray *_contextModeGestureRecognizers;
    NSMutableArray *_scrollPositionObjects;
    NSMutableArray *_scrollPositionOffsets;
    BOOL _keyboardShowing;
    struct CGRect _keyboardRect;
    double _lastScrollTimes[5];
    float _lastScrollOffsets[5];
    int _suspendedDownloadTypes;
    NSArray *_indexPathAndCells;
    Class _collectionViewClass;
    BOOL _clearsSelectionOnViewWillAppear;
    BOOL _underStatusBar;
    BOOL _dataViewUpdatesAreAnimated;
    BOOL _pullToLoadTopEnabled;
    BOOL _contextModeEnabled;
    BOOL _respondsToKeyboardShowing;
    BOOL _shouldScribeLingers;
    UIScrollView<TFNDataView> *_dataView;
    int _dataViewType;
    UICollectionViewLayout *_collectionViewLayout;
    UIControl<TFNPullToLoadTopControl> *_pullToLoadTopControl;
    int _restoreScrollPositionType;
    id _contextObject;
    int _tableSectionBreakPosition;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _underChromeInset;
    struct UIEdgeInsets _visibleChromeInset;
}

+ (BOOL)_shouldSuspendScribeOnScroll;
+ (float)tableSectionBreakHeight;
@property(nonatomic) int tableSectionBreakPosition; // @synthesize tableSectionBreakPosition=_tableSectionBreakPosition;
@property(readonly, nonatomic) BOOL shouldScribeLingers; // @synthesize shouldScribeLingers=_shouldScribeLingers;
@property(nonatomic) BOOL respondsToKeyboardShowing; // @synthesize respondsToKeyboardShowing=_respondsToKeyboardShowing;
@property(readonly, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
@property(nonatomic) BOOL contextModeEnabled; // @synthesize contextModeEnabled=_contextModeEnabled;
@property(nonatomic) int restoreScrollPositionType; // @synthesize restoreScrollPositionType=_restoreScrollPositionType;
@property(nonatomic) BOOL pullToLoadTopEnabled; // @synthesize pullToLoadTopEnabled=_pullToLoadTopEnabled;
@property(retain, nonatomic) UIControl<TFNPullToLoadTopControl> *pullToLoadTopControl; // @synthesize pullToLoadTopControl=_pullToLoadTopControl;
@property(nonatomic) BOOL dataViewUpdatesAreAnimated; // @synthesize dataViewUpdatesAreAnimated=_dataViewUpdatesAreAnimated;
@property(readonly, nonatomic) struct UIEdgeInsets visibleChromeInset; // @synthesize visibleChromeInset=_visibleChromeInset;
@property(readonly, nonatomic) struct UIEdgeInsets underChromeInset; // @synthesize underChromeInset=_underChromeInset;
@property(nonatomic) BOOL underStatusBar; // @synthesize underStatusBar=_underStatusBar;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) BOOL clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) int dataViewType; // @synthesize dataViewType=_dataViewType;
@property(readonly, nonatomic) UIScrollView<TFNDataView> *dataView; // @synthesize dataView=_dataView;
- (void).cxx_destruct;
- (id)tfn_debugStrings;
- (void)_uncacheVisibleCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_cacheVisibleCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_checkShouldScribeLingers;
- (void)_didEndDisplayingInDataView;
- (void)_didDisplayInDataView;
- (void)twitterConfigurationDidUpdate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_statusBarFrameChanged;
- (void)_voiceOverStatusChanged;
- (void)dateFormatChanged;
- (void)fontSizeChanged;
- (void)dataViewDidUpdate:(BOOL)arg1;
- (void)dataViewWillUpdate;
- (void)enumerateBackingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)indexPathForBackingObject:(id)arg1;
- (id)backingObjectAtIndexPath:(id)arg1;
- (void)clearScrollPosition;
- (void)restoreScrollPosition;
- (void)saveScrollPosition;
- (id)indexPathForScrollPositionObject:(id)arg1;
- (id)scrollPositionObjectAtIndexPath:(id)arg1;
- (void)showContextModeActionSheetForIndexPath:(id)arg1;
- (BOOL)_handleContextModeGestureAtIndexPath:(id)arg1 direction:(unsigned int)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_applyContextMode;
- (id)indexPathForContextObject:(id)arg1;
- (id)contextObjectAtIndexPath:(id)arg1 direction:(unsigned int)arg2;
- (void)endContextMode;
- (void)beginContextModeForIndexPath:(id)arg1 direction:(unsigned int)arg2;
- (void)_performAsyncUpdate;
- (void)_cancelAsyncUpdate;
- (void)_scheduleAsyncUpdateIfNeeded;
- (void)reloadDataIfNeeded;
- (void)setNeedsReloadData;
- (void)update;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void)setVisibleChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)setUnderChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)_updateContentInset;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)_didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 constrainedToSize:(struct CGSize)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillFullyDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidFullyAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)loadTopDidEnd;
- (void)loadTopDidBegin;
- (void)updateLoadingTop;
- (BOOL)isLoadingTop;
- (void)loadTop;
- (void)_didPullToLoadTop;
- (id)_pullToLoadTopControlIfEnabled;
- (void)_layoutPullToLoadTopControl;
- (BOOL)_addPullToLoadTopControlToView;
- (id)tfn_navigationContentScrollView;
- (void)_resumeDownloadManager;
- (void)didEndScrolling;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) BOOL isScrolling;
- (BOOL)accessibilityScroll:(int)arg1;
- (int)sectionBreaksForIndexPath:(id)arg1;
@property(readonly, nonatomic) TFNCollectionView *collectionView;
@property(readonly, nonatomic) TFNTableView *tableView;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1 collectionViewClass:(Class)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_abAuthorizationStatusText:(long)arg1;
- (void)importContactsRequestedForAccount:(id)arg1;

@end
