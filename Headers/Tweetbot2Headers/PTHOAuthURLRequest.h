//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHURLRequest.h"

@class NSString;

@interface PTHOAuthURLRequest : PTHURLRequest
{
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_token;
    NSString *_tokenSecret;
    NSString *_verifier;
    NSString *_realm;
    double _serverTimeOffset;
}

@property(nonatomic) double serverTimeOffset; // @synthesize serverTimeOffset=_serverTimeOffset;
@property(copy, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(copy, nonatomic) NSString *verifier; // @synthesize verifier=_verifier;
@property(copy, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (void)dealloc;
- (id)headerDictionary;

@end
