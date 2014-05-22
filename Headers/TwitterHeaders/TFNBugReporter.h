//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"

@class NSMutableArray, TFNBugReport, TFNBugReportButton, TFNViewControllerInfoAttachmentProvider;

@interface TFNBugReporter : NSObject <MFMailComposeViewControllerDelegate>
{
    TFNBugReportButton *_bugReportButton;
    TFNViewControllerInfoAttachmentProvider *_viewControllerInfoAttachmentProvider;
    NSMutableArray *_providers;
    NSMutableArray *_providerIDs;
    TFNBugReport *_bugReportTemplate;
    id <TFNBugReporterDelegate> _delegate;
}

+ (BOOL)canSendBugReport;
+ (id)sharedReporter;
@property(nonatomic) __weak id <TFNBugReporterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNBugReport *bugReportTemplate; // @synthesize bugReportTemplate=_bugReportTemplate;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_animateBugReportButtonFromNotification:(id)arg1 keyboardShowing:(BOOL)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_removeProviderAtIndex:(unsigned int)arg1;
- (void)removeAttachmentProviderWithID:(id)arg1;
- (void)removeAttachmentProvider:(id)arg1;
- (id)addAttachmentProvider:(id)arg1;
- (id)_generateBugReport:(id)arg1;
- (void)sendBugReport:(id)arg1 withPresentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)triggerBugReportFromViewController:(id)arg1;
- (BOOL)_checkCanSendBugReport;
- (void)_triggerBugReport:(int)arg1 fromViewController:(id)arg2;
- (void)_sendBugReport;
- (void)_sendBugReportDelayed;
- (void)_showBugButtonScaled:(BOOL)arg1;
- (void)hideBugReportButton;
- (void)showBugReportButton;
- (struct CGRect)_bugReportButtonFrameForKeyboardFrameValue:(id)arg1;
- (void)_attachDefaultProviders;
- (void)attachBugReportButtonToWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

