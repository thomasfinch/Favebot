/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol PTHTweetbotSearchTableViewDelegate <NSObject>
@optional
-(BOOL)searchTableViewControllerShouldHideNavigationBar:(id)searchTableViewController;
-(BOOL)searchTableViewController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchTableViewController:(id)controller didHideSearchResultsTableView:(id)view;
-(void)searchTableViewController:(id)controller willHideSearchResultsTableView:(id)view;
-(void)searchTableViewController:(id)controller didShowSearchResultsTableView:(id)view;
-(void)searchTableViewController:(id)controller willShowSearchResultsTableView:(id)view;
-(void)searchTableViewController:(id)controller didLoadSearchResultsTableView:(id)view;
-(void)searchTableViewController:(id)controller reloadData:(id)data;
-(void)searchTableViewControllerDidEndSearch:(id)searchTableViewController;
-(void)searchTableViewControllerWillEndSearch:(id)searchTableViewController;
-(void)searchTableViewControllerDidBeginSearch:(id)searchTableViewController;
-(void)searchTableViewControllerWillBeginSearch:(id)searchTableViewController;
@end

