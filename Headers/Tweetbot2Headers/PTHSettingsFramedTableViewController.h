//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView;

@interface PTHSettingsFramedTableViewController : PTHViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
}

- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)showShadows;
- (void)hideShadows;
- (void)viewDidUnload;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)frameTopCap;
- (struct UIEdgeInsets)tableViewInsets;
- (id)frameImageName;
- (void)loadView;

@end

