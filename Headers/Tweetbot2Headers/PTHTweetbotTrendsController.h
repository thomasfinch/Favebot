//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, PTHTweetbotAccount, UITableView;

@interface PTHTweetbotTrendsController : PTHViewController <UITableViewDelegate, UITableViewDataSource>
{
    PTHTweetbotAccount *_account;
    UITableView *_tableView;
    NSMutableArray *_trends;
    unsigned int _loadedWOEID;
}

- (void)dealloc;
- (void)viewDidUnload;
- (void)unload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_loadTrendsIfNeeded;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)loadView;
- (void)_setDefaultTrend:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

