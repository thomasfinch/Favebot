//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1UsersViewController.h"

#import "T1TypeaheadTableViewControllerDelegate.h"
#import "TFNTwitterAuthenticated.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class T1DirectMessagePeopleTypeaheadViewController, T1SearchBarView, TFNTwitterAccount, TFNTwitterList, TFNTwitterUserListMembersList, UIView;

__attribute__((visibility("hidden")))
@interface T1ListMembersViewController : T1UsersViewController <UITextFieldDelegate, T1TypeaheadTableViewControllerDelegate, TFNTwitterAuthenticated, UITextViewDelegate>
{
    BOOL _keyboardIsShowing;
    struct CGRect _keyboardFrame;
    struct UIEdgeInsets _underChromeInset;
    BOOL _isNewList;
    TFNTwitterList *_list;
    int _mode;
    TFNTwitterUserListMembersList *_membersList;
    UIView *_topBackgroundView;
    UIView *_topBorderView;
    T1SearchBarView *_searchBarView;
    T1DirectMessagePeopleTypeaheadViewController *_typeaheadViewController;
}

@property(retain, nonatomic) T1DirectMessagePeopleTypeaheadViewController *typeaheadViewController; // @synthesize typeaheadViewController=_typeaheadViewController;
@property(retain, nonatomic) T1SearchBarView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(retain, nonatomic) TFNTwitterUserListMembersList *membersList; // @synthesize membersList=_membersList;
@property(nonatomic) BOOL isNewList; // @synthesize isNewList=_isNewList;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) TFNTwitterList *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)setUnderChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)typeaheadTableViewController:(id)arg1 didSelectUsername:(id)arg2 index:(int)arg3;
- (void)typeaheadTableViewController:(id)arg1 didSelectUser:(id)arg2 index:(int)arg3;
- (id)_usernameFromSearchText:(id)arg1;
- (void)_clearSearch;
- (void)textFieldEditingChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_removeUserFromList:(id)arg1;
- (void)_addUserWithUsername:(id)arg1;
- (void)_requestRelationships;
- (void)_didLookupRelationships:(id)arg1;
- (void)_membersListDidUpdate:(id)arg1;
- (void)requestUsers;
- (void)_registerNotificationHandlers;
- (void)_unregisterNotificationHandlers;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)dismiss;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TFNTwitterAccount *account;

@end

