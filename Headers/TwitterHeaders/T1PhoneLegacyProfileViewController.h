//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1LegacyProfileViewController.h"

#import "T1MagicRecsRecommendationCellDelegate.h"
#import "T1PhoneProfileHeaderCellDelegate.h"
#import "T1PresentedAccountsViewControllerDelegate.h"
#import "T1PresentedAccountsViewControllerHost.h"
#import "TFNTwitterAddressBookDelegate.h"

@class T1BlurrableImageView, T1PhoneProfileHeaderCell, UIImageView;

__attribute__((visibility("hidden")))
@interface T1PhoneLegacyProfileViewController : T1LegacyProfileViewController <T1PresentedAccountsViewControllerDelegate, T1PhoneProfileHeaderCellDelegate, T1MagicRecsRecommendationCellDelegate, T1PresentedAccountsViewControllerHost, TFNTwitterAddressBookDelegate>
{
    T1PhoneProfileHeaderCell *_headerCell;
    CDUnknownBlockType _toggleFavoriteFollowBlock;
    float _expandOffset;
    struct {
        unsigned int willExpand:1;
        unsigned int didDisappear:1;
        unsigned int didSwitchAccounts:1;
        unsigned int didRemoveCurrentAccount:1;
    } _flags;
    UIImageView *_transitionBackgroundView;
}

@property(retain, nonatomic) UIImageView *transitionBackgroundView; // @synthesize transitionBackgroundView=_transitionBackgroundView;
- (void).cxx_destruct;
- (BOOL)accessibilityScroll:(int)arg1;
- (void)editProfileViewControllerWillRemoveHeader:(id)arg1;
- (void)editProfileViewControllerWillChangeHeader:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)accountsController:(id)arg1 didShowGapBelowCellWithOffset:(float)arg2 backgroundImage:(id)arg3;
- (void)accountsController:(id)arg1 willShowGapBelowCellWithOffset:(float)arg2 backgroundImage:(id)arg3;
- (void)accountsController:(id)arg1 didRevealBehind:(float)arg2;
- (void)accountsController:(id)arg1 willDismissFromOffset:(float)arg2 withAccount:(id)arg3 backgroundImages:(id)arg4;
- (void)presentAddressBookActionSheetForUsername:(id)arg1 withAvatar:(id)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (void)headerCellDidResetScrollView:(id)arg1;
- (void)didSelectMagicRecsRecommendationCell:(id)arg1 context:(id)arg2;
- (void)_composeDm:(id)arg1;
- (void)_scribeDeviceFollowButtonClick:(BOOL)arg1;
- (void)_toggleFavoriteFollow;
- (void)_updateHeaderCellForAccount:(id)arg1 backgroundImages:(id)arg2;
- (void)_switchToAccount:(id)arg1;
- (void)_showAccounts;
- (double)_expandDuration:(BOOL)arg1;
- (float)_expandDistance;
- (void)_setTabBarHidden:(BOOL)arg1;
- (void)_transitionTableViewContent;
- (void)_transitionNavigationBar;
- (void)_setNavigationBarHidden:(BOOL)arg1;
- (void)_transitionMetricsCellWithUser:(id)arg1;
- (void)_transitionHeaderCellWithUser:(id)arg1 backgroundImages:(id)arg2;
- (void)_setHeaderViewExpanded:(BOOL)arg1;
- (void)_anchorViewToTopWithRevealOffset:(float)arg1;
- (void)switchAccounts;
- (void)_collapseToHideAccounts;
- (void)_expandToShowAccounts;
- (float)heightForInfoCardSectionCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)infoCardSectionCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfRowsInInfoCardSection;
- (float)_heightForRecommendationCell;
- (float)_heightForProfileInfoButtonCell;
- (float)_heightForNavigationBar;
@property(readonly, nonatomic) T1BlurrableImageView *headerImageView;
- (id)_profileInfoButtonCell:(id)arg1;
- (void)_presentMagicRecsSourcesWithSocialContext:(id)arg1;
- (id)_profileInfoRecommendationCell:(id)arg1;
- (float)heightForMetricsCell;
- (id)metricsCell:(id)arg1 indexPath:(id)arg2;
- (id)headerCell;
- (id)headerCell:(id)arg1;
- (void)updateTableInvalidationsForReason:(int)arg1;
- (void)_updateHeaderBlurredImages:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidFullyDisappear:(BOOL)arg1;
- (void)viewDidFullyAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
