//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface T1AddressBookManager : NSObject
{
    NSMutableArray *_inviteList;
}

+ (void)invite:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_invite:(id)arg1;
- (void)_sendInviteBatch;
- (id)init;

@end

