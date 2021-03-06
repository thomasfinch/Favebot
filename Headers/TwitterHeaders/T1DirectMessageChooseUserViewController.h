//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNViewController.h"

#import "T1DirectMessageTopUsersViewControllerDelegate.h"
#import "T1TypeaheadTableViewControllerDelegate.h"
#import "TFNChromeLayout.h"
#import "TFNTwitterAuthenticated.h"
#import "UITextFieldDelegate.h"

@class T1DirectMessagePeopleTypeaheadViewController, T1DirectMessageTopUsersViewController, T1FindUsersViewController, T1SearchBar, TFNTwitterAccount, TFNTwitterDirectMessageExperiments, UITextField;

__attribute__((visibility("hidden")))
@interface T1DirectMessageChooseUserViewController : TFNViewController <UITextFieldDelegate, T1TypeaheadTableViewControllerDelegate, T1DirectMessageTopUsersViewControllerDelegate, TFNTwitterAuthenticated, TFNChromeLayout>
{
    id <T1DirectMessageChooseUserViewControllerDelegate> delegate;
    UITextField *_textField;
    T1SearchBar *_searchBarView;
    TFNTwitterAccount *_account;
    T1FindUsersViewController *_findUsersViewController;
    T1DirectMessagePeopleTypeaheadViewController *_typeaheadViewController;
    T1DirectMessageTopUsersViewController *_directMessageTopUsersViewController;
    TFNTwitterDirectMessageExperiments *_experiments;
}

@property(retain, nonatomic) TFNTwitterDirectMessageExperiments *experiments; // @synthesize experiments=_experiments;
@property(retain, nonatomic) T1DirectMessageTopUsersViewController *directMessageTopUsersViewController; // @synthesize directMessageTopUsersViewController=_directMessageTopUsersViewController;
@property(retain, nonatomic) T1DirectMessagePeopleTypeaheadViewController *typeaheadViewController; // @synthesize typeaheadViewController=_typeaheadViewController;
@property(retain, nonatomic) T1FindUsersViewController *findUsersViewController; // @synthesize findUsersViewController=_findUsersViewController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1SearchBar *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <T1DirectMessageChooseUserViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)setVisibleChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)setUnderChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)textFieldEditingChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)typeaheadScrollViewWillBeginDragging:(id)arg1;
- (void)typeaheadTableViewController:(id)arg1 didSelectUsername:(id)arg2 index:(int)arg3;
- (void)typeaheadTableViewController:(id)arg1 didSelectUser:(id)arg2 index:(int)arg3;
- (void)_scrollViewWillBeginDragging;
- (void)directMessageTopUsersViewControllerScrollViewWillBeginDragging:(id)arg1;
- (void)directMessageTopUsersViewController:(id)arg1 didSelectUser:(id)arg2 atIndexPath:(id)arg3;
- (void)setVisibleViewController:(id)arg1;
- (void)cancel:(id)arg1;
- (void)resetTypeaheadFrame;
- (void)overlayTapped;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

