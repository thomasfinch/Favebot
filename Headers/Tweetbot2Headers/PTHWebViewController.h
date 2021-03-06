//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, PTHBarItem, UIBarButtonItem, UIButton, UIImageView, UIWebView;

@interface PTHWebViewController : PTHViewController <UIWebViewDelegate>
{
    PTHBarItem *_backItem;
    PTHBarItem *_forwardItem;
    PTHBarItem *_refreshItem;
    UIBarButtonItem *_spacerBarButtonItem;
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_refreshButton;
    UIButton *_stopButton;
    UIImageView *_spinnerView;
    BOOL _phoneMode;
    NSString *_oldAudioSessionCategory;
    BOOL _loading;
    BOOL _hasControls;
    NSURL *_url;
    UIWebView *_webView;
}

@property(nonatomic) BOOL hasControls; // @synthesize hasControls=_hasControls;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;
- (void)viewDidUnload;
- (void)unload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)modalCancelButtonTitle;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)_updateLoading;
- (void)_update;
- (void)_stopOrRefresh:(id)arg1;
- (void)_forward:(id)arg1;
- (void)_back:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

