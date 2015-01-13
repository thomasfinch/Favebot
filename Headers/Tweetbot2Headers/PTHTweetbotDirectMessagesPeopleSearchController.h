//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, PTHTextField, PTHTweetbotAccount, PTHTweetbotUser, UIBarButtonItem, UITableView;

@interface PTHTweetbotDirectMessagesPeopleSearchController : PTHViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
{
    PTHTweetbotAccount *_account;
    PTHTextField *_searchField;
    UITableView *_tableView;
    UIBarButtonItem *_useButton;
    NSArray *_users;
    NSString *_searchString;
    PTHTweetbotUser *_selectedItem;
}

@property(retain, nonatomic) PTHTweetbotUser *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void)dealloc;
- (void)viewDidUnload;
- (void)unload;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)keyboardDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateUI:(id)arg1;
- (void)use:(id)arg1;
- (void)_hideKeyboard;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)loadView;
- (id)initWithAccount:(id)arg1 searchString:(id)arg2;

@end
