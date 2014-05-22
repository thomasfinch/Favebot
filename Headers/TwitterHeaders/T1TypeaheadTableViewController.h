//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "T1SearchQueryTableRowHost.h"
#import "T1TypeaheadTopicTableRowHost.h"
#import "T1TypeaheadUserTableRowHost.h"
#import "TFNTwitterAuthenticated.h"

@class NSString, T1SearchQueryTableRowAdapter, T1TypeaheadTopicTableRowAdapter, T1TypeaheadUserTableRowAdapter, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1TypeaheadTableViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1TypeaheadUserTableRowHost, T1SearchQueryTableRowHost, T1TypeaheadTopicTableRowHost>
{
    id <T1TypeaheadTableViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    NSString *_typeaheadString;
    T1SearchQueryTableRowAdapter *_queryAdapter;
    T1TypeaheadUserTableRowAdapter *_userAdapter;
    T1TypeaheadTopicTableRowAdapter *_topicAdapter;
}

@property(readonly, nonatomic) T1TypeaheadTopicTableRowAdapter *topicAdapter; // @synthesize topicAdapter=_topicAdapter;
@property(readonly, nonatomic) T1TypeaheadUserTableRowAdapter *userAdapter; // @synthesize userAdapter=_userAdapter;
@property(readonly, nonatomic) T1SearchQueryTableRowAdapter *queryAdapter; // @synthesize queryAdapter=_queryAdapter;
@property(copy, nonatomic) NSString *typeaheadString; // @synthesize typeaheadString=_typeaheadString;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1TypeaheadTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataViewDidUpdate:(BOOL)arg1;
- (void)searchQueryAdapter:(id)arg1 didSelectSearchQuery:(id)arg2 atIndexPath:(id)arg3;
- (void)typeaheadTopicAdapter:(id)arg1 didSelectTopic:(id)arg2 atIndexPath:(id)arg3;
- (void)typeaheadUserAdapter:(id)arg1 didSelectUser:(id)arg2 atIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)loadView;
- (BOOL)showsSearchButton;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

