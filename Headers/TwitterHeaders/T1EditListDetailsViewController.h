//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "TFNTwitterAuthenticated.h"
#import "UITextFieldDelegate.h"

@class TFNBooleanItem, TFNPlaceholderTextView, TFNTwitterAccount, TFNTwitterList, UIBarButtonItem, UITextField;

__attribute__((visibility("hidden")))
@interface T1EditListDetailsViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, UITextFieldDelegate>
{
    TFNTwitterAccount *_account;
    TFNTwitterList *_list;
    id <T1EditListDetailsViewControllerDelegate> _delegate;
    UITextField *_nameField;
    TFNPlaceholderTextView *_descriptionTextView;
    TFNBooleanItem *_isPrivateListItem;
    UIBarButtonItem *_saveButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *saveButtonItem; // @synthesize saveButtonItem=_saveButtonItem;
@property(retain, nonatomic) TFNBooleanItem *isPrivateListItem; // @synthesize isPrivateListItem=_isPrivateListItem;
@property(retain, nonatomic) TFNPlaceholderTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
@property(nonatomic) __weak id <T1EditListDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterList *list; // @synthesize list=_list;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)_privacyMode;
- (BOOL)_isInEditMode;
- (BOOL)_needsToSaveList;
- (BOOL)_canSaveList;
- (void)_finishWithList:(id)arg1;
- (void)_cancel;
- (void)_deleteList;
- (void)_promptToDeleteList;
- (void)_save;
- (BOOL)_validateFields;
- (void)_updateModelFromView;
- (void)_updateViewFromModel;
- (void)_updateSaveButton;
- (void)_navigateToUserManagement:(id)arg1 isNewList:(BOOL)arg2;
- (void)_updateSections;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

