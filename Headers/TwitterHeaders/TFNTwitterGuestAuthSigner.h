//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNAppAuthSigner.h"

@class NSString;

@interface TFNTwitterGuestAuthSigner : TFNAppAuthSigner
{
    NSString *_guestToken;
}

@property(copy, nonatomic) NSString *guestToken; // @synthesize guestToken=_guestToken;
- (void).cxx_destruct;
- (id)signedMutableURLRequest;

@end

