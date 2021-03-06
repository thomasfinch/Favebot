//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDownloadRequestFactory.h"

@class TFNTwitterAccount;

@interface TFNTwitterDownloadRequestBuilder : TFNDownloadRequestFactory
{
    BOOL _useInRequestOAuth;
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) BOOL useInRequestOAuth; // @synthesize useInRequestOAuth=_useInRequestOAuth;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)finalizeRequestDetails:(id)arg1;
- (id)buildRequest;
- (id)initWithAccount:(id)arg1 useInRequestOAuth:(BOOL)arg2;

@end

