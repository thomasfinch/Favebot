//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1ComposeUnderTableViewController.h"

#import "T1POISearchResultsViewControllerDelegate.h"
#import "TFNTwitterAuthenticated.h"
#import "UISearchBarDelegate.h"

@class NSArray, NSMutableArray, T1ComposePOIActionTableRowAdapter, TFNTwitterAccount, TFNTwitterPOIStream, TFNTwitterPlace, UISearchBar, UIView;

__attribute__((visibility("hidden")))
@interface T1ComposeUnderGeoTableViewController : T1ComposeUnderTableViewController <UISearchBarDelegate, TFNTwitterAuthenticated, T1POISearchResultsViewControllerDelegate>
{
    NSArray *_filteredPOIs;
    UISearchBar *_searchBar;
    T1ComposePOIActionTableRowAdapter *_searchActionAdapter;
    NSArray *_taggablePlaceList;
    NSMutableArray *_injectedPlaces;
    UIView *_aboveTableView;
    BOOL _isFirstLoad;
    BOOL _isSearching;
    BOOL _hasSeenSearchBar;
    BOOL _isShowingViewController;
    TFNTwitterAccount *_account;
    TFNTwitterPOIStream *_stream;
    id <T1ComposeUnderGeoTableViewControllerDelegate> _delegate;
    TFNTwitterPlace *_selectedPlace;
}

@property(nonatomic) BOOL isShowingViewController; // @synthesize isShowingViewController=_isShowingViewController;
@property(nonatomic) BOOL hasSeenSearchBar; // @synthesize hasSeenSearchBar=_hasSeenSearchBar;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) BOOL isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) TFNTwitterPlace *selectedPlace; // @synthesize selectedPlace=_selectedPlace;
@property(nonatomic) __weak id <T1ComposeUnderGeoTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterPOIStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)saveScrollPosition;
- (void)_removePlace:(id)arg1;
- (void)_markPlaceAsBlockedForIndexPath:(id)arg1;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)commitEditingStyle:(int)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)titleForDeleteConfirmationButtonForItem:(id)arg1 atIndexPath:(id)arg2;
- (int)editingStyleForItem:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)canEditItem:(id)arg1 atIndexPath:(id)arg2;
- (void)parentViewDidCollapse;
- (void)controller:(id)arg1 didSelectPOITwitterPlace:(id)arg2;
- (void)setUnderChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)_pushPlace:(id)arg1 toTopOfList:(id)arg2;
- (void)_resetSearchBarPosition;
- (void)_reorderSelectedPlace:(id)arg1;
- (void)_didTapAddPlace;
- (void)searchTapped;
- (id)_addPlaceItem;
- (void)_addActionItems:(id)arg1 query:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)_scribeParametersForPlace:(id)arg1 atIndex:(unsigned int)arg2 selectionSource:(int)arg3;
- (void)_selectPlace:(id)arg1 atIndex:(unsigned int)arg2 selectionSource:(int)arg3 isAutotag:(BOOL)arg4;
- (void)_autotag;
- (void)streamDidUpdate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_updateSections;
- (void)update;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

