//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotWebViewController.h"

@class NSDictionary, PTHTweetbotAccount;

@interface PTHTweetbotOAuthAuthorizeController : PTHTweetbotWebViewController
{
    NSDictionary *_tokenResponse;
    PTHTweetbotAccount *_authorizedAccount;
}

@property(retain, nonatomic) PTHTweetbotAccount *authorizedAccount; // @synthesize authorizedAccount=_authorizedAccount;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)_accessToken:(id)arg1;
- (id)initWithAccount:(id)arg1 tokenResponse:(id)arg2;

@end

