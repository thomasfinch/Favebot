//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "T1ComposeCustomAction.h"
#import "T1ExpandingViewControllerDelegate.h"
#import "T1ImagePreviewCellDelegate.h"
#import "T1PersistentComposeBarViewControllerDelegate.h"
#import "T1RichPOIViewDelegate.h"
#import "T1SlideshowViewControllerDelegate.h"
#import "T1TypeaheadAutocompleteDelegate.h"
#import "T1TypeaheadTableViewControllerDelegate.h"
#import "T1WebViewControllerDelegate.h"
#import "TCCardInstanceDelegate.h"
#import "TFNChromeLayout.h"
#import "TFNImageTransitionDelegate.h"
#import "TFNTwitterAddressBookDelegate.h"
#import "TFNTwitterAuthenticated.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class CTCallCenter, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, T1AppNavigationContext, T1PhonePersistentComposeBarViewController, T1PlusCardSlideshowDataSource, T1TweetDetailsErrorItem, T1TweetDetailsNavigationContextItem, T1TweetDetailsSocialProofItem, T1TypeaheadAutocompleteTableViewController, TCCardInstance, TFNAttributedStringItem, TFNDownload, TFNGenericItem, TFNHTTPRequest, TFNTwitterAccount, TFNTwitterPlace, TFNTwitterRelatedResults, TFNTwitterScribeContext, TFNTwitterStatus, TFNTwitterStatusActivitySummary, TFNTwitterTopicStory, UIImage, UIPopoverController, UIView;

__attribute__((visibility("hidden")))
@interface T1TweetDetailsViewController : TFNItemsDataViewController <T1ExpandingViewControllerDelegate, T1SlideshowViewControllerDelegate, TCCardInstanceDelegate, T1TypeaheadTableViewControllerDelegate, T1WebViewControllerDelegate, UIGestureRecognizerDelegate, TFNTwitterAuthenticated, T1ComposeCustomAction, TFNImageTransitionDelegate, T1ImagePreviewCellDelegate, UIPopoverControllerDelegate, T1PersistentComposeBarViewControllerDelegate, T1TypeaheadAutocompleteDelegate, TFNChromeLayout, TFNTwitterAddressBookDelegate, T1RichPOIViewDelegate>
{
    double _viewWillAppearTime;
    double _allRequiredPartsCompleteTime;
    double _relatedResultsCompleteTime;
    double _activitySummaryCompleteTime;
    TFNTwitterRelatedResults *_relatedResults;
    NSMutableArray *_combinedAncestors;
    NSMutableArray *_combinedDescendants;
    TFNGenericItem *_activitySummaryItem;
    TFNGenericItem *_actionsItem;
    TFNGenericItem *_feedbackTextsItem;
    TFNGenericItem *_userItem;
    NSArray *_mediaItems;
    NSArray *_cardItems;
    TFNAttributedStringItem *_tweetTextItem;
    T1TweetDetailsErrorItem *_errorItem;
    NSArray *_sensitiveInterstitialItems;
    TFNDownload *_sourceTopicImageDownload;
    UIImage *_sourceTopicImage;
    NSMutableArray *_observers;
    UIPopoverController *_popoverController;
    NSMutableArray *_doubleTapGestureRecognizers;
    UIView *_currentSenderHostView;
    struct CGRect _currentSenderFrame;
    TFNGenericItem *_inReplyToLabelItem;
    TCCardInstance *_plusCardInstance;
    TFNDownload *_plusCardDownload;
    T1PlusCardSlideshowDataSource *_plusCardSlideshowDataSource;
    CTCallCenter *_callCenter;
    CDUnknownBlockType _callCenterCompletion;
    BOOL _callCenterDidCall;
    T1PhonePersistentComposeBarViewController *_replyController;
    NSMutableSet *_deletedAncestorsAndDescendants;
    struct {
        unsigned int loadingActivitySummary:1;
        unsigned int hasRequestedActivitySummary:1;
        unsigned int loadingFullPlace:1;
        unsigned int fullPlaceLoaded:1;
        unsigned int loadingRelationship:1;
        unsigned int failedToUpdateRelationship:1;
        unsigned int loadingRelatedResults:1;
        unsigned int loadingMedia:1;
        unsigned int hasScribedTweetCompleteTime:1;
        unsigned int showingAncestorLoader:1;
        unsigned int hasPlayedVideo:1;
        unsigned int currentlyExhaustedDescendants:1;
        unsigned int mayHaveDeletedAncestors:1;
        unsigned int moviePlayerChangingFullScreen:1;
        unsigned int inUpdate:1;
        unsigned int plusCardDownloaded:1;
        unsigned int sendingReply:1;
        unsigned int shouldScrollDownWhenFinishedUpdating:1;
        unsigned int showedSensitiveMedia:1;
        unsigned int hasDragged:1;
        unsigned int didScribeReply:1;
        unsigned int loadNewerConversationTimerTriggered:1;
        unsigned int shouldForceScrollToBottomWhenFinishedUpdating:1;
    } _tweetDetailsFlags;
    NSString *_scribeSection;
    NSString *_scribeComponent;
    BOOL _statusRecommendedByMagicRecs;
    BOOL _showTrendLabel;
    BOOL _isUserViewingTheirOwnProfile;
    BOOL _holdUpdatesUntilScrollComplete;
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_status;
    TFNTwitterRelatedResults *_preloadedRelatedResults;
    TFNTwitterStatusActivitySummary *_preloadedActivitySummary;
    TFNTwitterStatusActivitySummary *_activitySummary;
    TFNTwitterPlace *_fullPlace;
    T1AppNavigationContext *_navigationContext;
    TFNTwitterTopicStory *_sourceTopic;
    TFNTwitterScribeContext *_sourceScribeContext;
    T1TweetDetailsSocialProofItem *_socialProofItem;
    T1TweetDetailsNavigationContextItem *_navigationContextItem;
    TFNHTTPRequest *_plusCardTalonRequest;
    T1TypeaheadAutocompleteTableViewController *_autocompleteTableViewController;
    NSTimer *_conversationTimer;
    long long _loadStatusID;
}

+ (struct CGSize)_targetPreviewImageSizeForTableView:(id)arg1;
+ (id)_previewImageURLForEntity:(id)arg1 inTableView:(id)arg2 returningSize:(struct CGSize *)arg3;
+ (id)tweetDetailsViewControllerForStatus:(id)arg1 account:(id)arg2;
@property(retain, nonatomic) NSTimer *conversationTimer; // @synthesize conversationTimer=_conversationTimer;
@property(retain, nonatomic) T1TypeaheadAutocompleteTableViewController *autocompleteTableViewController; // @synthesize autocompleteTableViewController=_autocompleteTableViewController;
@property(retain, nonatomic) TFNHTTPRequest *plusCardTalonRequest; // @synthesize plusCardTalonRequest=_plusCardTalonRequest;
@property(nonatomic) BOOL holdUpdatesUntilScrollComplete; // @synthesize holdUpdatesUntilScrollComplete=_holdUpdatesUntilScrollComplete;
@property(retain, nonatomic) T1TweetDetailsNavigationContextItem *navigationContextItem; // @synthesize navigationContextItem=_navigationContextItem;
@property(retain, nonatomic) T1TweetDetailsSocialProofItem *socialProofItem; // @synthesize socialProofItem=_socialProofItem;
@property(readonly, nonatomic) TFNTwitterRelatedResults *relatedResults; // @synthesize relatedResults=_relatedResults;
@property(nonatomic) BOOL isUserViewingTheirOwnProfile; // @synthesize isUserViewingTheirOwnProfile=_isUserViewingTheirOwnProfile;
@property(nonatomic) BOOL showTrendLabel; // @synthesize showTrendLabel=_showTrendLabel;
@property(retain, nonatomic) TFNTwitterScribeContext *sourceScribeContext; // @synthesize sourceScribeContext=_sourceScribeContext;
@property(retain, nonatomic) TFNTwitterTopicStory *sourceTopic; // @synthesize sourceTopic=_sourceTopic;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext; // @synthesize navigationContext=_navigationContext;
@property(retain, nonatomic) TFNTwitterPlace *fullPlace; // @synthesize fullPlace=_fullPlace;
@property(nonatomic, getter=isStatusRecommendedByMagicRecs) BOOL statusRecommendedByMagicRecs; // @synthesize statusRecommendedByMagicRecs=_statusRecommendedByMagicRecs;
@property(retain, nonatomic) TFNTwitterStatusActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
@property(nonatomic) long long loadStatusID; // @synthesize loadStatusID=_loadStatusID;
@property(retain, nonatomic) TFNTwitterStatusActivitySummary *preloadedActivitySummary; // @synthesize preloadedActivitySummary=_preloadedActivitySummary;
@property(retain, nonatomic) TFNTwitterRelatedResults *preloadedRelatedResults; // @synthesize preloadedRelatedResults=_preloadedRelatedResults;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)richPOIViewTapped:(id)arg1;
- (BOOL)_shouldShowRevenueProfileCard;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updateGestureRecognizersForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_doubleTapCaptureSpontaneousTaps;
- (void)_doubleTapFavorite:(id)arg1;
- (void)_doubleTapStateValidation:(id)arg1;
- (void)_setupWebViewController:(id)arg1;
- (void)slideshow:(id)arg1 didSelectUser:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatus:(id)arg2;
- (void)slideshow:(id)arg1 didDeleteStatus:(id)arg2;
- (void)_presentSlideshowWithDataSource:(id)arg1 retain:(BOOL)arg2 index:(int)arg3 transitionDelegate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_slideshowDataSourceForMultiPhotoView:(id)arg1 item:(id)arg2;
- (id)_slideshowDataSourceForImagePreviewCell:(id)arg1 item:(id)arg2;
- (id)_imageItemWithURLForEntity:(id)arg1 getIndex:(int *)arg2;
- (void)_setupSlideshowViewController:(id)arg1;
- (struct CGRect)rectOfTweetBody;
- (id)_openUrl:(id)arg1 fromSourceStatus:(id)arg2 sourceUser:(id)arg3;
- (id)t1_openURL:(id)arg1 fromSourceUser:(id)arg2;
- (id)t1_openURL:(id)arg1 fromSourceStatus:(id)arg2;
- (id)t1_didSelectActiveRange:(id)arg1 inStatus:(id)arg2;
- (struct CGRect)rectOfCardExpandingToViewController:(id)arg1 inWindow:(id)arg2;
- (id)viewControllerToExpandToViewController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)imageTransitionViewController:(id)arg1 willTransition:(BOOL)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageContentsRectForObject:(id)arg2;
- (BOOL)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2;
- (void)setPreviewImageHidden:(BOOL)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (id)tweetForAmplifyPlayer:(id)arg1;
- (id)scribeBaseParametersForAmplifyPlayer:(id)arg1;
- (id)presentingViewControllerForAmplifyPlayer:(id)arg1;
- (id)_previousVideoTimelineViewController;
- (id)amplifyPlayer:(id)arg1 retweetActionSheetForStatus:(id)arg2 withDoneBlock:(CDUnknownBlockType)arg3 willQuoteRetweetBlock:(CDUnknownBlockType)arg4;
- (id)amplifyPlayer:(id)arg1 moreActionSheetForStatus:(id)arg2 willPresentControllerBlock:(CDUnknownBlockType)arg3;
- (void)_displayRelatedVideoTimelineWithFilterUser:(id)arg1;
- (void)amplifyPlayer:(id)arg1 displayRelatedVideoTimelineWithStatus:(id)arg2;
- (void)amplifyPlayer:(id)arg1 displayComposerWithComposition:(id)arg2;
- (void)_cardLogEventIfPromoted:(int)arg1;
- (id)plusCardSlideshowDataSource;
- (id)_plusCardScribePage;
- (BOOL)_isValidTalonURL:(id)arg1;
- (BOOL)webViewController:(id)arg1 shouldOpenExternalURL:(id)arg2;
- (BOOL)_plusCardOpenURLString:(id)arg1;
- (void)_appDidActivateAfterCallNotification:(id)arg1;
- (void)_plusCardOpenDialPhoneURL:(id)arg1 withTalonURL:(id)arg2 verified:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_plusCardOpenDialPhoneURL:(id)arg1 withTalonURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_plusCardOpenAppLink:(id)arg1 withTalonURL:(id)arg2 verified:(BOOL)arg3;
- (void)_plusCardOpenAppLink:(id)arg1 withTalonURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_verifyTalonURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePlusCardAction:(id)arg1 onElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cardLogAppDownloadIfAppropriate:(id)arg1;
- (void)_cardLogAppDownload:(id)arg1;
- (void)_cardLogClientEvent:(id)arg1;
- (id)cardInstanceScribeContext:(id)arg1;
- (void)cardInstance:(id)arg1 scribeWithElement:(id)arg2 action:(id)arg3;
- (id)cardInstanceAdditionalParametersForAPIRequest:(id)arg1;
- (id)cardInstanceTwitterAccount:(id)arg1;
- (void)cardInstance:(id)arg1 openPlayerURL:(id)arg2;
- (void)cardInstanceDidPlayInlineMovie:(id)arg1;
- (float)cardInstance:(id)arg1 adjustedFontSizeForSize:(float)arg2;
- (void)cardInstance:(id)arg1 performAction:(id)arg2 onElement:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)cardInstance:(id)arg1 userWithID:(long long)arg2;
- (void)cardInstanceNeedsLayout:(id)arg1;
- (void)_disposePlusCardInstance;
- (void)_createPlusCardInstanceFromJSON:(id)arg1 error:(id)arg2;
- (void)_createPlusCardInstanceFromData:(id)arg1;
- (void)_updatePlusCard;
- (void)_plusCardDownloadAndCreationDidFinish;
- (void)_plusCardDownloadDidChange;
- (void)_loadPlusCardInstanceForCard:(id)arg1;
- (id)_itemForPlusCard:(id)arg1;
- (id)_itemsForPlusCard:(id)arg1;
- (void)_retweetFailed;
- (void)presentAddressBookActionSheetForUsername:(id)arg1 withAvatar:(id)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (void)imagePreviewCellImageLongPressed:(id)arg1;
- (void)imagePreviewCellImageTapped:(id)arg1;
- (void)imagePreviewCellDidFinishLoadingImage:(id)arg1 error:(id)arg2;
- (void)imagePreviewCellDidStartLoadingImage:(id)arg1;
- (id)_mediaItemForMediaInfo:(id)arg1;
- (id)_multiPhotoItemForStatus:(id)arg1;
- (BOOL)_hasImageEntity;
- (void)_attachSourceTopicImageToAttachments:(id)arg1;
- (void)_presentSlideshowFromSourceTopicItem:(id)arg1 withImageSize:(struct CGSize)arg2;
- (id)_sourceTopicImageItem;
- (void)_sourceTopicImageDownloadDidChange;
- (void)_loadSourceTopicImage;
- (void)_showSensitiveMediaAlways:(BOOL)arg1;
- (id)_itemsForSensitiveInterstitial;
- (id)_attachmentItems;
- (void)_loadLocation;
- (id)_feedbackTextsItem;
- (id)_activitySummaryItem;
- (id)_activitySummaryAndActionsItem;
- (void)_configureActivitySummaryView:(id)arg1;
- (void)_loadActivitySummaryIfNecessary;
- (void)_animateOutItem:(id)arg1;
- (void)_animateOutActivitySummary;
- (void)_animateInFeedbackText;
- (void)_animateInActivitySummary;
- (void)_animateInActivity;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_compositionDidSend:(id)arg1;
- (id)_tweetCompositionFromCurrentContext;
- (id)tweetCompositionFromCurrentContext;
- (int)sectionBreaksForRowAtIndexPath:(id)arg1;
- (void)dataViewDidUpdate:(BOOL)arg1;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_moviePlayerFullScreenDidChange:(id)arg1;
- (void)_moviePlayerFullScreenWillChange:(id)arg1;
- (BOOL)isScrolling;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)showsComposeButton;
- (BOOL)showsSearchButton;
- (void)_logPromotedEvent:(int)arg1 forStatus:(id)arg2;
- (void)_scribeSendReply;
- (void)_scribeReply;
- (id)scribeContext;
- (void)scribeImpressionWithParameters:(id)arg1;
- (id)scribeImpressionParameters;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)amplifyScribePage;
- (void)_removeCompositionObservers;
- (void)_didFailSendReply;
- (void)_didSendReply;
- (void)_sendInLineReply:(id)arg1;
- (struct CGRect)_viewFrameAboveKeyboard;
- (struct CGRect)_visibleTableViewFrame;
- (void)_removeAutocompleteView;
- (void)_addAutocompleteView;
- (void)updateAutocompleteTableViewContentInsets;
- (void)typeaheadAutocompleteControllerDidUpdate:(id)arg1;
- (void)typeaheadAutocompleteControllerDidEnd:(id)arg1;
- (void)typeaheadAutocompleteControllerDidBegin:(id)arg1;
- (void)setUnderChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)composeBarViewControllerDidBeginEditing:(id)arg1;
- (BOOL)composeBarViewControllerShouldBeginEditing:(id)arg1;
- (void)composeBarViewController:(id)arg1 didUpdateComposeBarFrame:(struct CGRect)arg2;
- (void)composeBarViewController:(id)arg1 didCompose:(id)arg2;
- (void)composeBarViewControllerWillUpdateComposeBarFrame:(id)arg1;
- (struct CGRect)composeBarViewController:(id)arg1 containingViewFrameAboveKeyboardFrame:(struct CGRect)arg2;
- (void)_setupReplyController;
- (void)_showShareActionSheetForEntityURL:(id)arg1 onView:(id)arg2 doneBlock:(CDUnknownBlockType)arg3;
- (void)_didSelectPopoverUser:(id)arg1 selectionContext:(id)arg2 referringContext:(id)arg3;
- (id)scribeSectionForIndexPath:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_showRetweetsAction:(id)arg1;
- (void)_showFavoritesAction:(id)arg1;
- (void)_tweetDeleted:(id)arg1;
- (void)_excludeDeletedStatus:(id)arg1;
- (void)_handleTweetDeleted:(id)arg1;
- (id)_actionSheet;
- (id)_undoRetweetSheet;
- (id)_retweetSheet;
- (void)_configureActivityCellPadding:(id)arg1;
- (id)_actionsItem;
- (void)_showActionSheetOnCurrentStatusFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_toggleRetweetOnCurrentStatusFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_toggleFavoriteOnCurrentStatus;
- (void)_configureActionView:(id)arg1;
- (BOOL)favoriteDisabled;
- (BOOL)retweetDisabled;
@property(readonly, nonatomic) BOOL replyDisabled;
- (id)_activityIndicatorCellSending;
- (id)_activityIndicatorCell;
- (void)_combineDescendants;
- (void)_combineAncestors;
- (void)_handlePrefetchPaging;
- (void)_handleDisappearingReplyLabelForScrollView:(id)arg1;
- (id)newReplyToLabel;
- (id)indexPathsForAncestors;
- (id)indexPathsForDescendants;
- (id)indexPathsForTweetBody;
- (id)_indexPathOfTweetBodyBottom;
- (id)_indexPathOfTweetBodyTop;
- (void)_animateInDescendants;
- (void)_updateRelatedResults;
- (void)_checkIfRelatedResultsAreReadyNeedsUpdate:(BOOL)arg1;
- (void)_relatedResults:(id)arg1 didLoad:(BOOL)arg2;
- (void)_loadConversationSinceID:(id)arg1 maxID:(id)arg2 count:(int)arg3;
- (BOOL)probablyHasAnAncestor;
- (void)_updateTableFooter;
- (BOOL)_constructErrorSections:(id)arg1;
- (BOOL)_cellIsCompletelyVisibleAtIndexPath:(id)arg1;
- (void)_scrollToBottom;
- (void)update;
- (void)_loadFollowingRelationship;
- (BOOL)_shouldRequestRelationship;
- (void)_didTapTag:(id)arg1 withItemForImage:(id)arg2;
- (id)_itemForTagSet:(id)arg1 withItemForImage:(id)arg2;
- (void)_loadMagicRecInfo;
- (BOOL)_hasStatusContextReason;
- (id)_errorStatusForError:(id)arg1;
- (void)_loadStatusID;
- (BOOL)_shouldShowViewsCountForActivitySummary:(id)arg1;
- (void)_checkIfTweetComplete;
- (BOOL)_areAllFetchesComplete;
- (BOOL)_areAllRequiredPartsReady;
- (void)_updateActionViewForActivityCellAtIndexPath:(id)arg1;
- (void)_tweetUpdated;
- (id)_tweetBodyItems;
- (id)_tweetTextFooter;
- (void)fontSizeChanged;
- (id)_tweetTextItem;
- (id)_revenueProfileCard;
- (int)_userFollowControlStyle;
- (id)_userItem;
- (id)tfn_debugStrings;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_loadNewerConversation:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;

@end
