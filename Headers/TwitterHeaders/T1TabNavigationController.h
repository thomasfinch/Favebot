//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNNavigationController.h"

#import "T1PanelRootViewController.h"

@class NSDate, NSString, TFNBarButtonItem, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1TabNavigationController : TFNNavigationController <T1PanelRootViewController>
{
    BOOL _selectionBeganWithPushedViewController;
    TFNTwitterAccount *_account;
    NSDate *_lastViewed;
    TFNBarButtonItem *_composeItem;
    TFNBarButtonItem *_searchItem;
}

+ (id)panelID;
@property(retain, nonatomic) TFNBarButtonItem *searchItem; // @synthesize searchItem=_searchItem;
@property(retain, nonatomic) TFNBarButtonItem *composeItem; // @synthesize composeItem=_composeItem;
@property(nonatomic) BOOL selectionBeganWithPushedViewController; // @synthesize selectionBeganWithPushedViewController=_selectionBeganWithPushedViewController;
@property(readonly, nonatomic) NSDate *lastViewed; // @synthesize lastViewed=_lastViewed;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setViewControllers:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_listsButtonTapped;
- (void)_peopleButtonTapped;
- (void)_searchButtonTapped:(id)arg1;
- (void)_composeButtonLongPressed:(id)arg1;
- (void)_composeButtonTapped:(id)arg1;
- (id)listsBarButtomItem;
- (id)peopleBarButtonItem;
- (void)showDraftsFromBarButtonItem:(id)arg1;
- (void)showComposeFromBarButtonItem:(id)arg1;
- (void)showSearchFromBarButtonItem:(id)arg1;
- (void)addStandardBarButtonItems:(id)arg1;
- (void)tabWasLongPressed;
- (void)tabWasSelected:(BOOL)arg1;
- (id)rootTabViewControllerForAccount:(id)arg1;
@property(readonly, nonatomic) NSString *scribePage;
@property(readonly, nonatomic) NSString *panelID;

@end

