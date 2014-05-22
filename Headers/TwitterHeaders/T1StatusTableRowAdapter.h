//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsTableRowAdapter.h"

#import "TFNTwitterAmplifyPlayerDelegate.h"

@class T1InlineActionPromptProvider, T1StatusCellCardEventHandler, T1StatusTableSlideshowManager, T1StatusTableVideoManager, T1StatusTableWebManager, TFNDataViewController, TFNTwitterAmplifyPlayer, TFNTwitterStatus, UIView;

__attribute__((visibility("hidden")))
@interface T1StatusTableRowAdapter : TFNItemsTableRowAdapter <TFNTwitterAmplifyPlayerDelegate>
{
    T1StatusTableSlideshowManager *_slideshowManager;
    T1StatusTableVideoManager *_videoManager;
    T1StatusTableWebManager *_webManager;
    T1StatusCellCardEventHandler *_cardEventHandler;
    BOOL _mediaForwardEnabled;
    TFNTwitterAmplifyPlayer *_player;
    TFNTwitterStatus *_playerStatus;
    UIView *_playerPreviewView;
    struct CGRect _playerPreviewBoundsInWindowFrame;
    BOOL _supportsDismissingPromotedStatuses;
    BOOL _supportsConversationModules;
    BOOL _forceMediaForward;
    TFNDataViewController *_tableViewController;
    T1InlineActionPromptProvider *_promptProvider;
    CDUnknownBlockType _statusCellOptionsBlock;
    CDUnknownBlockType _statusCellSeparatorTypeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType statusCellSeparatorTypeBlock; // @synthesize statusCellSeparatorTypeBlock=_statusCellSeparatorTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType statusCellOptionsBlock; // @synthesize statusCellOptionsBlock=_statusCellOptionsBlock;
@property(retain, nonatomic) T1InlineActionPromptProvider *promptProvider; // @synthesize promptProvider=_promptProvider;
@property(nonatomic) BOOL forceMediaForward; // @synthesize forceMediaForward=_forceMediaForward;
@property(nonatomic) BOOL supportsConversationModules; // @synthesize supportsConversationModules=_supportsConversationModules;
@property(nonatomic) BOOL supportsDismissingPromotedStatuses; // @synthesize supportsDismissingPromotedStatuses=_supportsDismissingPromotedStatuses;
@property(readonly, nonatomic) TFNDataViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (id)scribeBaseParametersForAmplifyPlayer:(id)arg1;
- (id)amplifyPlayer:(id)arg1 retweetActionSheetForStatus:(id)arg2 withDoneBlock:(CDUnknownBlockType)arg3 willQuoteRetweetBlock:(CDUnknownBlockType)arg4;
- (id)amplifyPlayer:(id)arg1 moreActionSheetForStatus:(id)arg2 willPresentControllerBlock:(CDUnknownBlockType)arg3;
- (void)_displayRelatedVideoTimelineWithFilterUser:(id)arg1;
- (void)amplifyPlayer:(id)arg1 displayRelatedVideoTimelineWithStatus:(id)arg2;
- (void)amplifyPlayer:(id)arg1 displayComposerWithComposition:(id)arg2;
- (void)amplifyPlayerWillClose:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGRect)amplifyPlayerPreviewBoundsInFullscreenFrame:(id)arg1;
- (struct CGRect)_previewBoundsInWindowFrame;
- (id)tweetForAmplifyPlayer:(id)arg1;
- (id)inlineParentViewForAmplifyPlayer:(id)arg1;
- (struct CGRect)inlineFrameForAmplifyPlayer:(id)arg1;
- (void)amplifyPlayer:(id)arg1 attachPlayerView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)amplifyPlayerShouldSkipAds:(id)arg1;
- (BOOL)amplifyPlayerShouldPlayInlineOnly:(id)arg1;
- (id)accountForAmplifyPlayer:(id)arg1;
- (void)_addCardForwardActionHandlersForTableViewController:(id)arg1 toCell:(id)arg2 withScribeSection:(id)arg3;
- (id)_cardEventHandlerForTableViewController:(id)arg1;
- (id)_createLingerScriberForTableViewController:(id)arg1 cell:(id)arg2 scribeSection:(id)arg3 parameters:(id)arg4;
- (BOOL)_cellIsAtLeastHalfVisible:(id)arg1 inTableView:(id)arg2;
- (id)_contextActionBarForTableViewController:(id)arg1 status:(id)arg2 supportsDismiss:(BOOL)arg3;
- (void)_addInlineActionHandlerForTableViewController:(id)arg1 toCell:(id)arg2 withScribeSection:(id)arg3 impressionParameters:(id)arg4;
- (void)_invalidateLayoutOfStatusCell:(id)arg1 atIndexPath:(id)arg2 inController:(id)arg3;
- (void)_handleInlinePromptsChangedNotification:(id)arg1;
@property(readonly, nonatomic) int preferredStatusBarUpdateAnimation;
@property(readonly, nonatomic) BOOL prefersStatusBarHidden;
- (id)_accountForTableViewController:(id)arg1;
- (id)_videoManagerForTableViewController:(id)arg1;
- (void)_scribeMediaForwardTapForStatusCell:(id)arg1 inTableViewController:(id)arg2 defaultAction:(id)arg3 section:(id)arg4 defaultElement:(id)arg5;
- (void)_scribeRevenueForwardTapForStatusCell:(id)arg1 inTableViewController:(id)arg2 action:(id)arg3 section:(id)arg4 element:(id)arg5;
- (void)_logPromotedEvent:(int)arg1 forStatusCell:(id)arg2 inTableViewController:(id)arg3;
- (id)_webManagerForTableViewController:(id)arg1;
- (void)_amplifyPresentVideoFromStatusCell:(id)arg1 inTableViewController:(id)arg2 scribeSection:(id)arg3;
- (void)_presentForwardVideoFromStatusCell:(id)arg1 inTableViewController:(id)arg2;
- (void)_presentVideoFromStatusCell:(id)arg1 inTableViewController:(id)arg2;
- (id)_slideshowManagerForTableViewController:(id)arg1;
- (id)_tableViewController:(id)arg1 didSelectStatus:(id)arg2 scribeSection:(id)arg3 impressionParameters:(id)arg4;
- (void)_presentDetailFromStatusCell:(id)arg1 inTableViewController:(id)arg2 scribeSection:(id)arg3 impressionParameters:(id)arg4;
- (void)_setNeedsReloadIfLayoutRequiresReloadForStatus:(id)arg1;
- (void)_statusDidUpdate:(id)arg1;
- (void)_mediaForwardSettingsDidChange;
- (void)_featureSwitchesDidUpdate:(id)arg1;
- (int)defaultSeparatorTypeForStatus:(id)arg1;
- (unsigned int)_tableViewController:(id)arg1 statusCellOptionsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (unsigned int)tableViewController:(id)arg1 statusCellOptionsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)viewControllerViewWillAppear;
- (void)dataViewController:(id)arg1 showContextModeActionSheetForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellForContextModeReplacement:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 contextModeReplacementForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 direction:(unsigned int)arg5;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct UIEdgeInsets)_defaultContentPaddingForTableViewController:(id)arg1 cellOptions:(unsigned int)arg2;
- (float)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (void)dealloc;
- (id)initForAllInstancesInTableViewController:(id)arg1;
- (id)init;

@end

