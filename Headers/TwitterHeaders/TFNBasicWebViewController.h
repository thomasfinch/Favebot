//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNViewController.h"

#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSDate, NSString, NSURL, TFNWebViewPullToRefreshView, UIActivityIndicatorView, UIBarButtonItem, UIImageView, UILabel, UIView, UIWebView, UIWindow;

@interface TFNBasicWebViewController : TFNViewController <UIWebViewDelegate, UIScrollViewDelegate>
{
    UIView *_rootView;
    UIWindow *_originalWindow;
    BOOL _silenceNetworkActivity;
    BOOL _didLoadOnce;
    BOOL _showingAlertView;
    int _activeRequests;
    TFNWebViewPullToRefreshView *_pullToRefreshView;
    UILabel *_pullToRefreshText;
    UIImageView *_loadNewerArrowView;
    NSDate *_timeOfLastItemLoading;
    int _pullToRefreshState;
    UIActivityIndicatorView *_loadNewerSpinner;
    BOOL _hasWebViewStartedLoadingHTMLContent;
    NSURL *_rootURL;
    NSURL *_currentURL;
    UIWebView *_webView;
    NSString *_webViewHTMLTitle;
    unsigned int _loadsMadeForCurrentNavigation;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_actionItem;
}

@property(retain, nonatomic) UIBarButtonItem *actionItem; // @synthesize actionItem=_actionItem;
@property(retain, nonatomic) UIBarButtonItem *forwardItem; // @synthesize forwardItem=_forwardItem;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(readonly, nonatomic) BOOL hasWebViewStartedLoadingHTMLContent; // @synthesize hasWebViewStartedLoadingHTMLContent=_hasWebViewStartedLoadingHTMLContent;
@property(readonly, nonatomic) unsigned int loadsMadeForCurrentNavigation; // @synthesize loadsMadeForCurrentNavigation=_loadsMadeForCurrentNavigation;
@property(copy, nonatomic) NSString *webViewHTMLTitle; // @synthesize webViewHTMLTitle=_webViewHTMLTitle;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(copy, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updatePullState;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)loadInitialURL;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)didFinishLoadingWithError:(id)arg1;
- (void)didStartLoading;
- (BOOL)shouldStartLoadWithRequest:(id)arg1 navigationType:(int)arg2;
- (void)willStartLoadingNavigationRequestOfType:(int)arg1;
- (void)didReceiveNavigationRequestOfType:(int)arg1;
- (void)_resetCurrentNavigationLoadState;
- (void)openExternalURL:(id)arg1;
- (void)action:(id)arg1;
- (void)load:(id)arg1 sender:(id)arg2;
- (void)reload:(id)arg1;
- (void)refresh:(id)arg1;
- (void)forward:(id)arg1;
- (void)back:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)_updateWebNavigation;

@end

