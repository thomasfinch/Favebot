//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDataViewController.h"

@class NSMutableArray, TFNBarButtonItem, TFNToolbar, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1DraftsViewController : TFNDataViewController
{
    NSMutableArray *_drafts;
    TFNTwitterAccount *_account;
    TFNBarButtonItem *_editControl;
    TFNBarButtonItem *_sendAllControl;
    TFNBarButtonItem *_doneButtonItem;
    TFNToolbar *_toolbar;
    BOOL presentedInPopover;
    id <T1DraftsViewControllerDelegate> delegate;
}

@property(nonatomic) BOOL presentedInPopover; // @synthesize presentedInPopover;
@property(nonatomic) __weak id <T1DraftsViewControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateToolbarEditButtonItemEnabled:(BOOL)arg1;
- (id)init;
- (id)scribePage;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)_accountDidRemoveDrafts:(id)arg1;
- (void)_accountDidAddDrafts;
- (void)_dismiss;
- (void)_sendAll:(id)arg1;
- (void)_toggleEditMode;
- (void)_deleteDraftAtIndexPath:(id)arg1 discard:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_updateDrafts;
- (void)_updateDoneButton;
- (void)_updateControls;

@end

