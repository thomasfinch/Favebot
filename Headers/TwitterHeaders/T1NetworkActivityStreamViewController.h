//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1ActivityViewController.h"

#import "T1PanelRootViewController.h"

@class NSDate, NSString, T1StatusTableRowAdapter, TFNTwitterAccount, TFNTwitterActivityTimeline, TFNTwitterNetworkActivityStream;

__attribute__((visibility("hidden")))
@interface T1NetworkActivityStreamViewController : T1ActivityViewController <T1PanelRootViewController>
{
    BOOL _seenGuideText;
    NSDate *_lastViewed;
    TFNTwitterActivityTimeline *_timeline;
    TFNTwitterNetworkActivityStream *_networkActivityStream;
    T1StatusTableRowAdapter *_statusAdapter;
}

@property(retain, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(retain, nonatomic) TFNTwitterNetworkActivityStream *networkActivityStream; // @synthesize networkActivityStream=_networkActivityStream;
@property(retain, nonatomic) TFNTwitterActivityTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) NSDate *lastViewed; // @synthesize lastViewed=_lastViewed;
- (void).cxx_destruct;
- (BOOL)useBlindView;
@property(readonly, nonatomic) NSString *panelID;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
@property(readonly, nonatomic) NSString *scribePage;
- (void)_timelineDidFinishDeserialization:(id)arg1;
- (void)_setupStreamFromTimeline;
- (id)_viewAllItemForActivityItem:(id)arg1;
- (void)_didSelectViewMoreTweetsForActivityItem:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldPersistScrollPosition;
- (id)autosaveName;
- (void)loadTop;
- (BOOL)isLoadingTop;
- (id)_emptySegments;
- (id)_guideTextItem;
- (void)update;
- (void)networkActivityStreamDidUpdate:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) TFNTwitterAccount *account;

@end

