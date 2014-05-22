//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "T1PanelRootViewController.h"

@class NSDate, NSString, T1StatusTableRowAdapter, TFNTwitterAccount, TFNTwitterSearchStream, TFNTwitterSearchTimeline;

__attribute__((visibility("hidden")))
@interface T1RelevantMediaTimelineViewController : TFNItemsDataViewController <T1PanelRootViewController>
{
    T1StatusTableRowAdapter *_statusAdapter;
    TFNTwitterAccount *_account;
    NSDate *_lastViewed;
    TFNTwitterSearchTimeline *_timeline;
    TFNTwitterSearchStream *_stream;
}

@property(retain, nonatomic) TFNTwitterSearchStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) TFNTwitterSearchTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, nonatomic) NSDate *lastViewed; // @synthesize lastViewed=_lastViewed;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (void)_performSocialContextHack;
- (void)_updateSections;
- (void)_streamDidUpdate:(id)arg1;
- (void)_setupStreamFromTimeline;
@property(readonly, nonatomic) NSString *panelID;
- (id)scribeComponent;
- (id)scribeSection;
@property(readonly, nonatomic) NSString *scribePage;
- (id)scribe;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadTop;
- (BOOL)isLoadingTop;
- (void)update;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

@end

