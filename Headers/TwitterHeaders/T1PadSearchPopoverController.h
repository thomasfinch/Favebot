//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverController.h"

#import "T1TypeaheadTableViewControllerDelegate.h"
#import "TFNTwitterAuthenticated.h"
#import "UITextFieldDelegate.h"

@class NSString, T1SearchBar, T1SearchTypeaheadViewController, TFNNavigationStackController, TFNTwitterAccount, UINavigationController;

__attribute__((visibility("hidden")))
@interface T1PadSearchPopoverController : UIPopoverController <UITextFieldDelegate, T1TypeaheadTableViewControllerDelegate, TFNTwitterAuthenticated>
{
    BOOL _replaceSearch;
    TFNTwitterAccount *_account;
    NSString *_query;
    UINavigationController *_resultsNavigationController;
    NSString *_scribePage;
    NSString *_scribeSection;
    TFNNavigationStackController *_navigationController;
    T1SearchTypeaheadViewController *_typeaheadViewController;
    T1SearchBar *_searchBar;
}

+ (id)controllerWithQuery:(id)arg1;
@property(retain, nonatomic) T1SearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) T1SearchTypeaheadViewController *typeaheadViewController; // @synthesize typeaheadViewController=_typeaheadViewController;
@property(retain, nonatomic) TFNNavigationStackController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(nonatomic) BOOL replaceSearch; // @synthesize replaceSearch=_replaceSearch;
@property(nonatomic) __weak UINavigationController *resultsNavigationController; // @synthesize resultsNavigationController=_resultsNavigationController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_showResults:(id)arg1;
- (void)typeaheadTableViewController:(id)arg1 didTapAheadSearchQuery:(id)arg2 index:(int)arg3;
- (void)typeaheadTableViewController:(id)arg1 didSelectSearchQuery:(id)arg2 index:(int)arg3;
- (void)typeaheadTableViewController:(id)arg1 didSelectUsername:(id)arg2 index:(int)arg3;
- (void)typeaheadTableViewController:(id)arg1 didSelectUser:(id)arg2 index:(int)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)_hideClearButtonIfNoText;
- (void)dismissKeyboard;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
- (void)_setQuery:(id)arg1;
- (void)dealloc;

@end

