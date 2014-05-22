//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "TFNTwitterAuthenticated.h"

@class NSArray, T1OnboardingHeaderView, T1UserOrRecommendationTableRowAdapter, TFNBarButtonItem, TFNTwitterAccount, TFNTwitterUserRecommendationsList;

__attribute__((visibility("hidden")))
@interface T1OnboardingWhoToFollowViewController : TFNItemsDataViewController <TFNTwitterAuthenticated>
{
    BOOL _legacyMode;
    TFNTwitterAccount *_account;
    int _onboardingFlowSource;
    T1UserOrRecommendationTableRowAdapter *_userOrRecommendationTableRowAdapter;
    TFNTwitterUserRecommendationsList *_userRecommendationsList;
    T1OnboardingHeaderView *_headerView;
    TFNBarButtonItem *_nextBarButtonItem;
    NSArray *_usersOrRecommendations;
}

@property(retain, nonatomic) NSArray *usersOrRecommendations; // @synthesize usersOrRecommendations=_usersOrRecommendations;
@property(retain, nonatomic) TFNBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) T1OnboardingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TFNTwitterUserRecommendationsList *userRecommendationsList; // @synthesize userRecommendationsList=_userRecommendationsList;
@property(retain, nonatomic) T1UserOrRecommendationTableRowAdapter *userOrRecommendationTableRowAdapter; // @synthesize userOrRecommendationTableRowAdapter=_userOrRecommendationTableRowAdapter;
@property(readonly, nonatomic) BOOL legacyMode; // @synthesize legacyMode=_legacyMode;
@property(nonatomic) int onboardingFlowSource; // @synthesize onboardingFlowSource=_onboardingFlowSource;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_pushNextView;
- (void)updateSections;
- (void)nextTapped;
- (BOOL)_isFollowingUser:(id)arg1;
- (id)realUsersOrRecommendationsRequireRelationship:(BOOL)arg1 excludeFollowedBy:(BOOL)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (void)viewDidLoad;
- (void)_closeTapped;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 legacyMode:(BOOL)arg2;
- (id)initWithAccount:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
