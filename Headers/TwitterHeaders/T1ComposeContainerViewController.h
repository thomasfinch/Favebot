//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TFNTwitterAuthenticated.h"

@class TFNTwitterAccount, UITextView;

__attribute__((visibility("hidden")))
@interface T1ComposeContainerViewController : UIViewController <TFNTwitterAuthenticated>
{
    UITextView *_textView;
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;

@end

