//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "T1SignedOutViewControllerDelegate.h"
#import "TFNPresentationDelegate.h"
#import "TFNWizardNavigationControllerDelegate.h"

__attribute__((visibility("hidden")))
@interface T1HostViewController : UIViewController <T1SignedOutViewControllerDelegate, TFNPresentationDelegate, TFNWizardNavigationControllerDelegate>
{
    id <T1AppUIFactory> _appUI;
    BOOL _showedSignedOutScreen;
    UIViewController *_currentViewController;
    int _newAccountFlowType;
}

+ (id)sharedHostViewController;
@property(nonatomic) int newAccountFlowType; // @synthesize newAccountFlowType=_newAccountFlowType;
@property(readonly, nonatomic) BOOL showedSignedOutScreen; // @synthesize showedSignedOutScreen=_showedSignedOutScreen;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (void)didDismissViewController:(id)arg1 pop:(BOOL)arg2 animated:(BOOL)arg3;
- (id)willPresentViewController:(id)arg1 fromViewController:(id)arg2 push:(BOOL)arg3 animated:(BOOL)arg4;
- (id)tfn_debugStrings;
- (void)wizardNavigationController:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)wizardNavigationController:(id)arg1 willFinishWithSuccess:(BOOL)arg2;
- (void)_launchOnboardingWithNewUser:(BOOL)arg1;
- (void)_didTransitionFromSignedOut;
- (CDUnknownBlockType)_accountAdderBlock;
- (void)_signInToAccountWithUsername:(id)arg1 oneFactor:(BOOL)arg2;
- (void)_signUp;
- (void)_performSignUpSignInAction:(CDUnknownBlockType)arg1;
- (void)signedOutViewController:(id)arg1 didTapOneFactorSignIn:(id)arg2;
- (void)signedOutViewController:(id)arg1 didTapSignIn:(id)arg2;
- (void)signedOutViewController:(id)arg1 didTapSignUp:(id)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (int)preferredStatusBarStyle;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)showLoginPrefilledWithUsername:(id)arg1;
- (void)_showLoginPrefilledWithUsername:(id)arg1;
- (void)handleRootViewControllerSetupWithAccount:(id)arg1;
- (void)handleRootViewControllerSetup;
- (void)saveViewControllerState;
- (id)currentPanelID;
- (void)setupWithAccount:(id)arg1;
- (void)viewSignedOut;
- (void)_viewAccount:(id)arg1;
- (void)viewAccount:(id)arg1 relativePosition:(int)arg2 animated:(BOOL)arg3;
- (void)viewAccount:(id)arg1 animated:(BOOL)arg2;
- (id)appNavigation;
- (id)currentAccount;
- (void)_useViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_useViewController:(id)arg1;
- (id)init;

@end

