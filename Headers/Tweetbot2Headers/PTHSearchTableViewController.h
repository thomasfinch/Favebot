//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PTHSearchBarDelegate.h"

@class PTHSearchBar, UIControl, UITableView, UIViewController;

@interface PTHSearchTableViewController : NSObject <PTHSearchBarDelegate>
{
    UITableView *_tableView;
    UIViewController *_contentsController;
    BOOL _hidNavBar;
    UIControl *_overlayView;
    BOOL _active;
    PTHSearchBar *_searchBar;
    id <PTHSearchTableViewDelegate> _delegate;
    UITableView *_searchResultsTableView;
    id <UITableViewDataSource> _searchResultsDataSource;
    id <UITableViewDelegate> _searchResultsDelegate;
}

@property(nonatomic) id <UITableViewDelegate> searchResultsDelegate; // @synthesize searchResultsDelegate=_searchResultsDelegate;
@property(nonatomic) id <UITableViewDataSource> searchResultsDataSource; // @synthesize searchResultsDataSource=_searchResultsDataSource;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) id <PTHSearchTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PTHSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)dealloc;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)reloadSearch;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_dismiss;
@property(readonly, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_searchResultsTableView;
- (id)initWithSearchBar:(id)arg1 tableView:(id)arg2 contentsController:(id)arg3;

@end

