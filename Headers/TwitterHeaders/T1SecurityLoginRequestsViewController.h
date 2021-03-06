//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDataViewController.h"

#import "T1SecurityLoginRequestCellDelegate.h"
#import "TFNTwitterAuthenticated.h"

@class NSMutableArray, T1AccountTableRowAdapter, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1SecurityLoginRequestsViewController : TFNDataViewController <T1SecurityLoginRequestCellDelegate, TFNTwitterAuthenticated>
{
    T1AccountTableRowAdapter *_accountAdapter;
    BOOL _isRefreshing;
    BOOL _hasLoadedRequests;
    BOOL _reportError;
    TFNTwitterAccount *_account;
    NSMutableArray *_loginRequests;
}

@property(nonatomic) BOOL reportError; // @synthesize reportError=_reportError;
@property(nonatomic) BOOL hasLoadedRequests; // @synthesize hasLoadedRequests=_hasLoadedRequests;
@property(nonatomic) BOOL isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) NSMutableArray *loginRequests; // @synthesize loginRequests=_loginRequests;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (BOOL)isLoadingTop;
- (void)loadTop;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)loginRequestCell:(id)arg1 didMakeSelection:(int)arg2;
- (void)_showAlertForError:(id)arg1;
- (void)_scribeRateLimitForError:(id)arg1 withComponent:(id)arg2;
- (void)_fetchLoginRequests:(CDUnknownBlockType)arg1;
- (void)_denyLoginRequest:(id)arg1;
- (void)_acceptLoginRequest:(id)arg1;
- (void)_refreshLoginRequests:(BOOL)arg1;
- (void)_updateView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;

@end

