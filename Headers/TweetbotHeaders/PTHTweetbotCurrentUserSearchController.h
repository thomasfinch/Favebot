/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "PTHViewController.h"
#import "UISearchBarDelegate.h"

@class PTHTweetbotAccount, NSMutableArray, NSArray, PTHSearchBar, PTHColorGroupTableViewCell, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface PTHTweetbotCurrentUserSearchController : PTHViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UIGestureRecognizerDelegate> {
	PTHTweetbotAccount* _account;
	UITableView* _tableView;
	NSMutableArray* _savedSearches;
	PTHSearchBar* _searchBar;
	UIView* _searchBarSeparator;
	NSMutableArray* _searchCells;
	PTHColorGroupTableViewCell* _searchTweetsCell;
	PTHColorGroupTableViewCell* _searchUsersCell;
	PTHColorGroupTableViewCell* _searchNearbyCell;
	PTHColorGroupTableViewCell* _userCell;
	UIView* _savedSearchesHeader;
	UIView* _browseHeader;
	NSArray* _browseArray;
}
@property(readonly, assign, nonatomic) NSArray* currentSavedSearches;
-(void).cxx_destruct;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(unsigned)supportedInterfaceOrientations;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)_hideKeyboard;
-(void)_showKeyboard;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)toggleMode;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)reloadData;
-(id)initWithAccount:(id)account;
@end

