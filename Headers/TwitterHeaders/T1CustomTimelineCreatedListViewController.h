//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "T1CustomTimelineHeaderDelegate.h"
#import "TFNTwitterAuthenticated.h"

@class T1CustomTimelineTableRowAdapter, TFNTwitterAccount, TFNTwitterCustomTimelineList, TFNTwitterUser;

__attribute__((visibility("hidden")))
@interface T1CustomTimelineCreatedListViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1CustomTimelineHeaderDelegate>
{
    T1CustomTimelineTableRowAdapter *_tableRowAdapter;
    TFNTwitterAccount *_account;
    TFNTwitterUser *_user;
    TFNTwitterCustomTimelineList *_timelineList;
}

@property(retain, nonatomic) TFNTwitterCustomTimelineList *timelineList; // @synthesize timelineList=_timelineList;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)customTimelineEditViewControllerDidDeleteTimeline:(id)arg1;
- (void)customTimelineHeaderCell:(id)arg1 didTapFollow:(id)arg2;
- (void)_globalTimelineDidDelete:(id)arg1;
- (void)_globalTimelineDidUpdate:(id)arg1;
- (void)_globalTimelineDidCreate:(id)arg1;
- (void)_customTimelineListDidUpdate:(id)arg1;
- (void)_addTimeline:(id)arg1;
- (void)createTimeline;
- (BOOL)shouldShowCreateButton;
- (BOOL)_isDummyGapObject:(id)arg1;
- (BOOL)_needsCallToAction:(id)arg1;
- (void)_updateSections:(BOOL)arg1;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

