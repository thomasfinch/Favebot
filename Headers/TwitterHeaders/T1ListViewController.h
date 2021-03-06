//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNScopedContainerViewController.h"

#import "T1EditListDetailsViewControllerDelegate.h"
#import "TFNScopedContainerViewControllerDelegate.h"
#import "TFNTwitterAuthenticated.h"

@class T1ListMembersViewController, T1ListSubscribersViewController, T1ListTimelineViewController, TFNTwitterAccount, TFNTwitterList;

__attribute__((visibility("hidden")))
@interface T1ListViewController : TFNScopedContainerViewController <TFNTwitterAuthenticated, TFNScopedContainerViewControllerDelegate, T1EditListDetailsViewControllerDelegate>
{
    T1ListTimelineViewController *_listTimelineViewController;
    T1ListMembersViewController *_membersViewController;
    T1ListSubscribersViewController *_subscribersViewController;
    BOOL _isSubscribedToList;
    TFNTwitterAccount *_account;
    TFNTwitterList *_list;
}

@property(nonatomic) BOOL isSubscribedToList; // @synthesize isSubscribedToList=_isSubscribedToList;
@property(retain, nonatomic) TFNTwitterList *list; // @synthesize list=_list;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribePage;
- (id)scribe;
- (void)editListDetailsViewControllerDidDeleteList:(id)arg1;
- (void)editListDetailsViewController:(id)arg1 didFinishWithList:(id)arg2 isNew:(BOOL)arg3;
- (BOOL)showsSearchButton;
- (BOOL)showsComposeButton;
- (id)scopedContainerViewController:(id)arg1 titleForSegmentAtIndex:(int)arg2;
- (void)_updateRightNavButton;
- (void)_toggleSubscription;
- (void)_editList;
- (BOOL)_isOwnList;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)init;

@end

