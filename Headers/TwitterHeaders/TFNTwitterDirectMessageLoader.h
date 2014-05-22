//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTwitterAccount;

@interface TFNTwitterDirectMessageLoader : NSObject
{
    BOOL _forSentMessages;
    BOOL _isLoadingNewer;
    id <TFNTwitterDirectMessageLoaderDelegate> _delegate;
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) BOOL isLoadingNewer; // @synthesize isLoadingNewer=_isLoadingNewer;
@property(nonatomic) BOOL forSentMessages; // @synthesize forSentMessages=_forSentMessages;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <TFNTwitterDirectMessageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDUnknownBlockType)_loadNewerResponseBlock;
- (void)loadNewer:(long long)arg1 polling:(BOOL)arg2;

@end
