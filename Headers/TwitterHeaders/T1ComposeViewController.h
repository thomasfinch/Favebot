//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1ComposeModalViewController.h"

#import "T1ComposeAttachmentPreviewDelegate.h"
#import "T1ComposeRichTextViewDelegate.h"
#import "TFNAutocompleteControllerDelegate.h"
#import "TFNChromeLayout.h"
#import "TFNTwitterAuthenticated.h"
#import "TIComposeAttachmentsViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class CLLocation, NSString, T1ComposeButtonBackgroundView, T1ComposeRTLTextViewDelegate, T1ComposeRichTextView, T1ComposeTitleView, T1ComposeUnderKeyboardView, T1ComposeView, TFNBarButtonItem, TFNHUD, TFNTwitterAccount, TFNTwitterAutocompleteController, TFNTwitterCircledArrowBubblePopup, TFNTwitterComposition, TFNTwitterPlace, TIComposeAttachmentsView, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIImageView, UILabel, UITextView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface T1ComposeViewController : T1ComposeModalViewController <TFNTwitterAuthenticated, UIAlertViewDelegate, T1ComposeRichTextViewDelegate, TIComposeAttachmentsViewDelegate, TFNAutocompleteControllerDelegate, T1ComposeAttachmentPreviewDelegate, TFNChromeLayout>
{
    UIButton *buttonBarGeoButton;
    CLLocation *_lastLocation;
    TFNTwitterPlace *_lastPlace;
    BOOL _convergedOnLocation;
    BOOL _geoActive;
    BOOL _geoCodeActive;
    BOOL _geoPromptHasBeenDissmissed;
    TFNTwitterCircledArrowBubblePopup *_circledPopup;
    UIBarButtonItem *sendButtonItem;
    UIBarButtonItem *remainingCharactersButtonItem;
    TFNBarButtonItem *closeBarButtonItem;
    BOOL _appearWithoutKeyboard;
    BOOL _shouldCountLeadingMentions;
    UILabel *remainingCharactersLabel;
    UIButton *disclosureButton;
    UIActivityIndicatorView *disclosureSpinner;
    UIImageView *disclosurePin;
    UIBarButtonItem *_rightMarginItem;
    UIBarButtonItem *_leftMarginItem;
    UIButton *buttonBarPhotoButton;
    UIView *header;
    UILabel *peekTextLabel;
    T1ComposeTitleView *titleView;
    struct _NSRange preUndoOrRedoSelection;
    int autocompleteStartIndex;
    T1ComposeRTLTextViewDelegate *_textViewDelegate;
    struct UIEdgeInsets _underChromeInset;
    struct {
        unsigned int once:1;
        unsigned int inRTLInputMode:1;
        unsigned int dismissing:1;
        unsigned int sent:1;
    } _flags;
    CDUnknownBlockType _dismissBlock;
    BOOL _isVisible;
    BOOL menuWillAppear;
    BOOL _saveAsDraftEnabled;
    BOOL _showWithGalleryVisible;
    id <T1ComposeViewControllerDelegate> delegate;
    TFNTwitterAccount *account;
    TFNTwitterComposition *composition;
    TFNTwitterAutocompleteController *autocompleteController;
    T1ComposeView *composeView;
    T1ComposeUnderKeyboardView *underKeyboardView;
    UITextView *textView;
    UIView *textViewWrapper;
    T1ComposeButtonBackgroundView *buttonBarContainer;
    UIView *geoButtonWrapper;
    TIComposeAttachmentsView *attachmentsView;
    NSString *_scribePage;
    UIViewController *_containerViewController;
    TFNHUD *_hud;
    T1ComposeRichTextView *_richTextView;
    struct _NSRange lastSelectionRange;
}

+ (BOOL)composeWithGalleryExperimentForAccount:(id)arg1 andComposition:(id)arg2;
+ (id)composeViewControllerForAccount:(id)arg1;
@property(readonly, nonatomic) T1ComposeRichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) TFNHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) BOOL showWithGalleryVisible; // @synthesize showWithGalleryVisible=_showWithGalleryVisible;
@property(nonatomic) BOOL saveAsDraftEnabled; // @synthesize saveAsDraftEnabled=_saveAsDraftEnabled;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(readonly, nonatomic) BOOL menuWillAppear; // @synthesize menuWillAppear;
@property(readonly, nonatomic) TIComposeAttachmentsView *attachmentsView; // @synthesize attachmentsView;
@property(readonly, nonatomic) UIView *geoButtonWrapper; // @synthesize geoButtonWrapper;
@property(readonly, nonatomic) T1ComposeButtonBackgroundView *buttonBarContainer; // @synthesize buttonBarContainer;
@property(readonly, nonatomic) UIView *textViewWrapper; // @synthesize textViewWrapper;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView;
@property(readonly, nonatomic) T1ComposeUnderKeyboardView *underKeyboardView; // @synthesize underKeyboardView;
@property(readonly, nonatomic) T1ComposeView *composeView; // @synthesize composeView;
@property(readonly, nonatomic) struct _NSRange lastSelectionRange; // @synthesize lastSelectionRange;
@property(retain, nonatomic) TFNTwitterAutocompleteController *autocompleteController; // @synthesize autocompleteController;
@property(readonly, nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) TFNTwitterComposition *composition; // @synthesize composition;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account;
@property(nonatomic) __weak id <T1ComposeViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)attachmentPreviewDidTap:(id)arg1;
- (void)attachmentPreviewDidDeleteAttachment:(id)arg1;
- (id)scribeSection;
- (void)_configurationDidUpdate:(id)arg1;
- (void)_accountDidUpdate:(id)arg1;
- (struct CGPoint)underkeyboardPosition;
- (void)attachPhoto:(id)arg1;
- (void)_updateSendButtonItemEnabled:(BOOL)arg1;
- (void)selectComposeDraftsFromView:(id)arg1;
- (void)showDrafts;
- (void)_selectComposeAccountFromView:(id)arg1;
- (void)_handleRichTextViewSelectAccount:(id)arg1;
- (float)_buttonBarSpacing;
- (void)handleMediaFromChooser:(id)arg1 sourceForScribe:(id)arg2;
- (void)handleImageInfoFromPhotoPicker:(id)arg1 sourceForScribe:(id)arg2;
- (void)removeAttachmentWithURL:(id)arg1;
- (void)_presentAttachment:(id)arg1 atIndex:(unsigned int)arg2;
- (void)presentAttachment:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)_removeAllAttachments;
- (BOOL)_areAttachmentsCompatibleWithAttachment:(id)arg1;
- (void)_handleMedia:(id)arg1;
- (BOOL)_shouldPromptPhotoTagging;
- (void)_didAddAttachment:(id)arg1;
- (BOOL)isWorthSending;
- (BOOL)isWorthSaving;
- (void)_setupPadCounter;
- (void)_updateGlowingButtonBarButtons;
- (void)didRemoveAttachment:(id)arg1;
- (int)_remainingCharacterCount;
- (void)_textDidChange;
- (void)_checkCurrentText;
- (void)_toggleKeyboard;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)setupView;
- (void)_applicationDidBecomeActive:(id)arg1;
- (BOOL)_keyboardIsUp;
- (void)switchComposerToAccount:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)send:(id)arg1;
- (void)_checkLengthAndSend;
- (void)_send;
- (BOOL)_isDismissing;
- (void)_dismiss;
- (void)_cleanupDraft;
- (void)attemptToDismiss:(CDUnknownBlockType)arg1;
- (void)forceDismissAndSaveAsDraft;
- (void)_showAccountSelector:(id)arg1 event:(id)arg2;
- (void)cancel:(id)arg1 event:(id)arg2;
- (void)_promptToSave:(id)arg1 withActionSheetButtons:(id)arg2;
- (id)_selectDraftsActionSheetButtons;
- (id)_dismissActionSheetButtons;
- (void)_saveDraft;
- (void)_ensureImageAssetsSavedToCameraRoll;
- (void)_saveDraftAndDismiss;
- (void)didShowMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;
- (void)willUndoOrRedo:(id)arg1;
- (void)didUndoOrRedo:(id)arg1;
- (void)scribeImpressionWithParameters:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_unregisterNotificationHandlers;
- (void)_registerNotificationHandlers;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
@property(readonly, nonatomic) UIBarButtonItem *rightMarginItem;
@property(readonly, nonatomic) UIBarButtonItem *leftMarginItem;
- (void)_updateTitle;
- (void)_setupDefaultNavigationButtons;
- (void)_setupMediaFirstComposeNavigationButtons;
- (void)_setupNavigationButtons;
- (void)_updateHeaderFrame;
- (void)autocompleteController:(id)arg1 didSelectItem:(id)arg2;
- (void)autocompleteControllerDidEnd:(id)arg1;
- (void)autocompleteControllerDidBegin:(id)arg1;
- (void)typeTextIntoComposer:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_refreshKeyboard;
- (void)_checkAndChangeKeyboardTypeForArabic;
- (void)textInputModeDidChange:(id)arg1;
- (void)loadView;
- (void)_applyUnderChromeInset;
- (void)setVisibleChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)setUnderChromeInset:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_didUpdateToPlace:(id)arg1;
- (void)showEnableLocationServicesPrompt;
- (void)_didUpdateToLocation:(id)arg1;
- (void)handleLocationCoordinateUpdate:(id)arg1 error:(BOOL)arg2;
- (void)handleLocationUpdate:(id)arg1 error:(BOOL)arg2;
- (void)_startLocationManager;
- (BOOL)geoEnabled;
- (void)disableGeo;
- (void)enableGeo;
- (void)_disableGeotagging;
- (void)startGeoTag;
- (void)promptToEnableGeo;
- (void)_updateGeoButton;
- (void)stopLocationUpdateUI;
- (void)updateLocationUpdateUI;
- (void)startLocationUpdateUI;
- (void)_showGeoPrompt:(id)arg1;
- (void)toggleGeo:(id)arg1;
- (BOOL)_shouldShowGeoHint;
- (void)_locationHintTapped:(id)arg1;
- (void)_handleHashtagGeoPrompt;
- (void)_handleAttachmentGeoPrompt;
- (void)_handleAutomaticGeoTagging;
- (BOOL)shouldAutoGeoTag;

@end

