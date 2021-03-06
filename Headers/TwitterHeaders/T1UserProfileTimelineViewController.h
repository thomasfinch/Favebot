//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "T1UsersViewControllerDelegate.h"
#import "TFNTwitterAuthenticated.h"

@class T1StatusTableRowAdapter, T1StreamPoller, T1UserOrRecommendationTableRowAdapter, T1UserRecommendationsScrollBumpTableRowAdapter, TFNTwitterAccount, TFNTwitterScribeContext, TFNTwitterUserGallery, TFNTwitterUserTimelineStream;

__attribute__((visibility("hidden")))
@interface T1UserProfileTimelineViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1UsersViewControllerDelegate>
{
    BOOL _firstLoad;
    BOOL _shouldLogPullToRefresh;
    TFNTwitterAccount *_account;
    TFNTwitterUserGallery *_whoToFollowUserGallery;
    id <T1ProfileDataSource> _profileDataSource;
    TFNTwitterScribeContext *_scribeContext;
    T1StatusTableRowAdapter *_statusTableRowAdapter;
    T1UserRecommendationsScrollBumpTableRowAdapter *_whoToFollowScrollBumpTableRowAdapter;
    T1UserOrRecommendationTableRowAdapter *_whoToFollowTableRowAdapter;
    TFNTwitterUserTimelineStream *_userTimelineStream;
    id _objectBeforeWTFGallery;
    T1StreamPoller *_poller;
}

+ (int)_sectionTypeForStreamObject:(id)arg1;
@property(retain, nonatomic) T1StreamPoller *poller; // @synthesize poller=_poller;
@property(retain, nonatomic) id objectBeforeWTFGallery; // @synthesize objectBeforeWTFGallery=_objectBeforeWTFGallery;
@property(nonatomic) BOOL shouldLogPullToRefresh; // @synthesize shouldLogPullToRefresh=_shouldLogPullToRefresh;
@property(nonatomic) BOOL firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) TFNTwitterUserTimelineStream *userTimelineStream; // @synthesize userTimelineStream=_userTimelineStream;
@property(retain, nonatomic) T1UserOrRecommendationTableRowAdapter *whoToFollowTableRowAdapter; // @synthesize whoToFollowTableRowAdapter=_whoToFollowTableRowAdapter;
@property(retain, nonatomic) T1UserRecommendationsScrollBumpTableRowAdapter *whoToFollowScrollBumpTableRowAdapter; // @synthesize whoToFollowScrollBumpTableRowAdapter=_whoToFollowScrollBumpTableRowAdapter;
@property(retain, nonatomic) T1StatusTableRowAdapter *statusTableRowAdapter; // @synthesize statusTableRowAdapter=_statusTableRowAdapter;
@property(retain, nonatomic) TFNTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak id <T1ProfileDataSource> profileDataSource; // @synthesize profileDataSource=_profileDataSource;
@property(retain, nonatomic) TFNTwitterUserGallery *whoToFollowUserGallery; // @synthesize whoToFollowUserGallery=_whoToFollowUserGallery;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_didRetweet:(id)arg1;
- (void)_didTweet:(id)arg1;
- (void)_stopObservingTweetNotifications;
- (void)_startObservingTweetNotifications;
- (id)scribeImpressionParameters;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateInitialPollingInterval;
- (void)_userTimelineStreamDidUpdateFromAPI:(id)arg1;
- (void)_userTimelineStreamDidUpdate:(id)arg1;
- (BOOL)_sectionType:(int)arg1 needsSectionBreakWithSectionType:(int)arg2;
- (void)_handleSeeMoreWTFRowSelection;
- (id)_itemsForUserGallery:(id)arg1 atIndexPath:(id)arg2;
- (id)_itemsForStreamObject:(id)arg1 atIndexPath:(id)arg2;
- (void)_buildSections;
- (int)sectionBreaksForIndexPath:(id)arg1;
- (BOOL)isLoadingTop;
- (void)_profileDataSourceDidInvalidate:(id)arg1;
- (void)update;
- (void)loadTop;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

