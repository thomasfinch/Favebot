//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "T1OnboardingInviteeCellDelegate.h"
#import "T1OnboardingSelectAllViewDelegate.h"
#import "TFNTwitterAuthenticated.h"
#import "TFNTwitterUserFindFriendsListDelegate.h"

@class NSArray, NSMutableDictionary, NSMutableIndexSet, T1OnboardingInviteFriendsHeaderView, T1OnboardingInviteeTableRowAdapter, T1OnboardingSelectAllView, TFNBarButtonItem, TFNTwitterAccount, TFNTwitterUserFindFriendsList, UIButton;

__attribute__((visibility("hidden")))
@interface T1OnboardingInviteFriendsViewController : TFNItemsDataViewController <T1OnboardingInviteeCellDelegate, T1OnboardingSelectAllViewDelegate, TFNTwitterAuthenticated, TFNTwitterUserFindFriendsListDelegate>
{
    BOOL _legacyMode;
    BOOL _continueOnboarding;
    BOOL _selectAllWithoutUserInput;
    BOOL _displayCloseButton;
    BOOL _useHardLimit;
    BOOL _shouldRunGroupInvitesCompleteOnLoad;
    BOOL _standalone;
    TFNTwitterAccount *_account;
    int _onboardingFlowSource;
    NSMutableDictionary *_emailAddressToIdx;
    NSArray *_inviteSections;
    NSMutableIndexSet *_finalInviteIndexSet;
    int _selectType;
    NSArray *_inviteList;
    T1OnboardingInviteFriendsHeaderView *_headerView;
    T1OnboardingSelectAllView *_selectAllRow;
    TFNBarButtonItem *_nextBarButtonItem;
    TFNBarButtonItem *_skipBarButtonItem;
    TFNBarButtonItem *_inviteBarButtonItem;
    T1OnboardingInviteeTableRowAdapter *_inviteeTableRowAdapter;
    int _style;
    TFNTwitterUserFindFriendsList *_findFriendsList;
    UIButton *_selectAllButton;
    unsigned int _updateUnmatchedFriendsCallCount;
    long _updateStandaloneFindFriendsListOnceToken;
}

+ (void)presentInviteFriendsStandaloneFromViewController:(id)arg1 withAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) long updateStandaloneFindFriendsListOnceToken; // @synthesize updateStandaloneFindFriendsListOnceToken=_updateStandaloneFindFriendsListOnceToken;
@property(nonatomic) BOOL standalone; // @synthesize standalone=_standalone;
@property(nonatomic) BOOL shouldRunGroupInvitesCompleteOnLoad; // @synthesize shouldRunGroupInvitesCompleteOnLoad=_shouldRunGroupInvitesCompleteOnLoad;
@property unsigned int updateUnmatchedFriendsCallCount; // @synthesize updateUnmatchedFriendsCallCount=_updateUnmatchedFriendsCallCount;
@property(nonatomic) BOOL useHardLimit; // @synthesize useHardLimit=_useHardLimit;
@property(nonatomic) BOOL displayCloseButton; // @synthesize displayCloseButton=_displayCloseButton;
@property(nonatomic) BOOL selectAllWithoutUserInput; // @synthesize selectAllWithoutUserInput=_selectAllWithoutUserInput;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) TFNTwitterUserFindFriendsList *findFriendsList; // @synthesize findFriendsList=_findFriendsList;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) T1OnboardingInviteeTableRowAdapter *inviteeTableRowAdapter; // @synthesize inviteeTableRowAdapter=_inviteeTableRowAdapter;
@property(retain, nonatomic) TFNBarButtonItem *inviteBarButtonItem; // @synthesize inviteBarButtonItem=_inviteBarButtonItem;
@property(retain, nonatomic) TFNBarButtonItem *skipBarButtonItem; // @synthesize skipBarButtonItem=_skipBarButtonItem;
@property(retain, nonatomic) TFNBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) T1OnboardingSelectAllView *selectAllRow; // @synthesize selectAllRow=_selectAllRow;
@property(retain, nonatomic) T1OnboardingInviteFriendsHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) BOOL continueOnboarding; // @synthesize continueOnboarding=_continueOnboarding;
@property(retain, nonatomic) NSArray *inviteList; // @synthesize inviteList=_inviteList;
@property(nonatomic) int selectType; // @synthesize selectType=_selectType;
@property(retain, nonatomic) NSMutableIndexSet *finalInviteIndexSet; // @synthesize finalInviteIndexSet=_finalInviteIndexSet;
@property(retain, nonatomic) NSArray *inviteSections; // @synthesize inviteSections=_inviteSections;
@property(retain, nonatomic) NSMutableDictionary *emailAddressToIdx; // @synthesize emailAddressToIdx=_emailAddressToIdx;
@property(readonly, nonatomic) BOOL legacyMode; // @synthesize legacyMode=_legacyMode;
@property(nonatomic) int onboardingFlowSource; // @synthesize onboardingFlowSource=_onboardingFlowSource;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)findFriendsListProgressDidUpdate:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (void)pushNextViewControllerSendInvites:(BOOL)arg1 finish:(BOOL)arg2 onboardingFlowSource:(int)arg3;
- (void)pushNextViewControllerSendInvites:(BOOL)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)sectionBreaksForIndexPath:(id)arg1;
- (void)updateSections;
- (void)updateButtons;
- (void)_dismiss;
- (void)onboardingSelectAllView:(id)arg1 checkmarkValueChanged:(BOOL)arg2;
- (void)inviteeCell:(id)arg1 checkedStateChanged:(BOOL)arg2;
- (void)_closeTapped;
- (void)inviteTapped;
- (void)skipTapped;
- (void)nextTapped;
- (void)sendAction;
- (void)_sendInvitesWithControllerBlock:(CDUnknownBlockType)arg1;
- (void)sendInvites;
- (void)_groupInvitesIntoSections:(id)arg1 callCount:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_groupInvitesComplete;
- (void)_unmatchedFriendsFilteredComplete:(id)arg1;
- (void)_updateUnmatchedFriends:(id)arg1;
- (void)attachFriendsList:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_decideSelectType;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithPresentationStyle:(int)arg1 useHardLimit:(BOOL)arg2 legacyMode:(BOOL)arg3;
- (id)initWithPresentationStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
