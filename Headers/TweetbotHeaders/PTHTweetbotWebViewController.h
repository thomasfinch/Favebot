/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "UIScrollViewDelegate.h"
#import "PTHViewController.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class UISwipeGestureRecognizer, UILongPressGestureRecognizer, NSString, UIGestureRecognizer, NSURL, PTHTweetbotStatus, PTHTweetbotAccount, UIWebView;

__attribute__((visibility("hidden")))
@interface PTHTweetbotWebViewController : PTHViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, UIWebViewDelegate> {
	PTHTweetbotAccount* _account;
	PTHTweetbotStatus* _status;
	UIWebView* _webView;
	UISwipeGestureRecognizer* _leftSwipeRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	NSString* _oldAudioSessionCategory;
	UIGestureRecognizer* _oldInteractivePopGestureRecognizer;
	BOOL _hasControls;
	BOOL _disableMobilizer;
	BOOL _loading;
	NSURL* _url;
}
@property(assign, nonatomic, getter=isLoading) BOOL loading;
@property(assign, nonatomic) BOOL disableMobilizer;
@property(assign, nonatomic) BOOL hasControls;
@property(readonly, assign, nonatomic) UIWebView* webView;
@property(retain, nonatomic) NSURL* url;
@property(retain, nonatomic) PTHTweetbotStatus* status;
@property(retain, nonatomic) PTHTweetbotAccount* account;
-(void).cxx_destruct;
-(void)dealloc;
-(void)willMoveToParentViewController:(id)parentViewController;
-(BOOL)doubleSwipeDisabled;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)shouldHideBackBarButtonTitle;
-(BOOL)shouldPop;
-(unsigned)supportedInterfaceOrientations;
-(id)modalCancelButtonTitle;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)_updateLoading;
-(void)_update;
-(void)_share:(id)share;
-(void)_stopOrRefresh:(id)refresh;
-(void)_longPress:(id)press;
-(void)_leftSwipe:(id)swipe;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)loadView;
-(id)initWithStatus:(id)status;
-(id)initWithAccount:(id)account;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

