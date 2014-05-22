//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNNativesqueSingleWebViewController.h"

#import "T1AccountAdder.h"

@class NSString, TFNHUD, TFNTimer, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1LoginChallengeWebViewController : TFNNativesqueSingleWebViewController <T1AccountAdder>
{
    unsigned int _loginType;
    NSString *_requestID;
    long long _userID;
    NSString *_username;
    NSString *_challengeURL;
    double _pollingDelay;
    TFNHUD *_hud;
    CDUnknownBlockType _didAddAccountBlock;
    TFNTwitterAccount *_account;
    TFNTimer *_pollingTimer;
}

@property(retain, nonatomic) TFNTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didAddAccountBlock; // @synthesize didAddAccountBlock=_didAddAccountBlock;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_cancel;
- (void)_showErrorAndDismiss:(id)arg1;
- (void)_startPollingTimer;
- (void)_cancelPollingTimer;
- (void)_continuePolling;
- (void)_dismissWithAccount:(id)arg1;
- (void)_doPolling;
- (id)initWithLoginType:(unsigned int)arg1 requestID:(id)arg2 forUser:(id)arg3 withUserID:(long long)arg4 url:(id)arg5 notificationCenter:(id)arg6;
- (id)initWithLoginType:(unsigned int)arg1 requestID:(id)arg2 forUser:(id)arg3 withUserID:(long long)arg4 url:(id)arg5;

@end
