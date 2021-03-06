/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UISearchBarDelegate.h"

@class UIControl, UIView, PTHSearchBar, UITableView, UIViewController;
@protocol PTHTweetbotSearchTableViewDelegate, UITableViewDelegate, UITableViewDataSource;

__attribute__((visibility("hidden")))
@interface PTHTweetbotSearchTableViewController : XXUnknownSuperclass <UISearchBarDelegate> {
	UITableView* _tableView;
	UIViewController* _contentsController;
	CGRect _originalSearchContainerFrame;
	UIView* _originalSearchContainerParentView;
	BOOL _hidNavBar;
	UIView* _statusFrameBackgroundView;
	UIControl* _overlayView;
	UITableView* _searchResultsTableView;
	UIView* _searchContainerSeparator;
	BOOL _active;
	id<PTHTweetbotSearchTableViewDelegate> _delegate;
	id<UITableViewDataSource> _searchResultsDataSource;
	id<UITableViewDelegate> _searchResultsDelegate;
	PTHSearchBar* _searchBar;
	UIView* _searchContainer;
}
@property(retain, nonatomic) UIView* searchContainer;
@property(readonly, assign, nonatomic) PTHSearchBar* searchBar;
@property(assign, nonatomic, getter=isActive) BOOL active;
@property(assign, nonatomic) __weak id<UITableViewDelegate> searchResultsDelegate;
@property(assign, nonatomic) __weak id<UITableViewDataSource> searchResultsDataSource;
@property(readonly, assign, nonatomic) UITableView* searchResultsTableView;
@property(assign, nonatomic) __weak id<PTHTweetbotSearchTableViewDelegate> delegate;
-(void).cxx_destruct;
-(void)dealloc;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)reloadSearch;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)_didEndEditing:(id)editing;
-(void)setActive:(BOOL)active animated:(BOOL)animated;
-(id)initWithSearchBar:(id)searchBar tableView:(id)view contentsController:(id)controller;
@end

