//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCursorController.h"

@class PTHTweetbotList, UIBarButtonItem;

@interface PTHTweetbotUserListController : PTHTweetbotCursorController
{
    PTHTweetbotList *_list;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
}

- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)modalCancelButtonTitle;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_showOptions:(id)arg1;
- (void)viewMode;
- (void)addMember:(id)arg1;
- (void)editMode;
- (void)didUpdate;
- (BOOL)needsToolbar;
- (unsigned int)itemDisplayCount;
- (id)nothingFoundTitle;
- (id)itemsTitle;
- (id)itemTitle;
- (id)searchTitle;
- (Class)cellClass;
- (void)viewDidLoad;
- (id)initWithList:(id)arg1;

@end
