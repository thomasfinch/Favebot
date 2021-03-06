//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, PTHTweetbotAccount, UIBarButtonItem, UITableView, UIView;

@interface PTHTweetbotMuteController : PTHViewController <UITableViewDelegate, UITableViewDataSource>
{
    PTHTweetbotAccount *_account;
    UITableView *_tableView;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIView *_userHeader;
    UIView *_keywordHeader;
    UIView *_hashtagHeader;
    UIView *_sourceHeader;
    NSMutableArray *_userFilters;
    NSMutableArray *_keywordFilters;
    NSMutableArray *_hashtagFilters;
    NSMutableArray *_sourceFilters;
}

- (void)dealloc;
- (void)viewDidUnload;
- (void)unload;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateFilters:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showStatusFilterOptionsFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 statusFilter:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)_positionAtIndexPath:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)addFilter:(id)arg1;
- (void)viewMode;
- (void)editMode;
- (void)loadView;
- (id)initWithAccount:(id)arg1;

@end

