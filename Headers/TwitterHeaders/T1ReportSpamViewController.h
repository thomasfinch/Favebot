//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "T1ReportSpamAsAbuseDelegate.h"
#import "TFNTwitterAuthenticated.h"

@class NSString, TFNTwitterAccount, TFNTwitterStatus, TFNTwitterUser, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface T1ReportSpamViewController : TFNItemsDataViewController <T1ReportSpamAsAbuseDelegate, TFNTwitterAuthenticated>
{
    BOOL _shouldClearAbuseItem;
    BOOL _shouldBlock;
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_status;
    NSString *_scribePage;
    NSString *_scribeSection;
    TFNTwitterStatus *_associatedStatus;
    TFNTwitterUser *_user;
    UIBarButtonItem *_submitButtonItem;
    UIBarButtonItem *_nextButtonItem;
}

+ (void)presentReportSpamFromViewController:(id)arg1 withAccount:(id)arg2 forUser:(id)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 associatedStatus:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)presentReportSpamFromViewController:(id)arg1 withAccount:(id)arg2 forStatus:(id)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 completion:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) UIBarButtonItem *nextButtonItem; // @synthesize nextButtonItem=_nextButtonItem;
@property(retain, nonatomic) UIBarButtonItem *submitButtonItem; // @synthesize submitButtonItem=_submitButtonItem;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterStatus *associatedStatus; // @synthesize associatedStatus=_associatedStatus;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(nonatomic) BOOL shouldBlock; // @synthesize shouldBlock=_shouldBlock;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeImpressionParameters;
- (id)scribeComponent;
- (id)scribe;
@property(readonly, nonatomic) unsigned int spamReportMode;
- (void)_userDidUpdate:(id)arg1;
- (unsigned int)_cellTypeForIndexPath:(id)arg1;
- (void)_updateNavigationControls;
- (void)_deselectAllSelectedReportItems;
- (void)_toggleItemSelection:(id)arg1 atIndexPath:(id)arg2;
- (void)_clearAbuseItem;
- (void)_updateAbuseItemSection;
- (void)_presentWebViewWithURLString:(id)arg1;
- (id)_blockSection;
- (id)_abuseReportSpamItem;
- (id)_reasonsSection;
- (void)_configureReportItem:(id)arg1 text:(id)arg2 highlightText:(id)arg3 subtext:(id)arg4 linkText:(id)arg5;
- (id)_reportAbuseItemWithText:(id)arg1 highlightText:(id)arg2 subtext:(id)arg3 linkText:(id)arg4;
- (id)_reportItemWithText:(id)arg1 highlightText:(id)arg2 subtext:(id)arg3 linkText:(id)arg4;
- (id)_reportItemWithText:(id)arg1 subtext:(id)arg2;
- (void)blockUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_submitOffensiveUserReport;
- (void)_submitStatusSpamType:(unsigned int)arg1;
- (void)_submitUserSpamType:(unsigned int)arg1;
- (void)_submitReport;
- (void)_setupSections;
- (void)_didTapActiveRangeAtIndexPath:(id)arg1;
- (void)_nextAction;
- (void)_presentReportAsAbuseViewController;
- (void)_cancelAction;
- (void)reportSpamAsAbuseViewControllerDidSelectReportAbuseItem:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

