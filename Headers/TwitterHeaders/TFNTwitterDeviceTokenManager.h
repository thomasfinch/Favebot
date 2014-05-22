//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableDictionary;

@interface TFNTwitterDeviceTokenManager : NSObject
{
    NSData *_deviceToken;
    NSMutableDictionary *_pushSettingsUpdateDateMap;
    NSMutableArray *_completionBlocks;
    BOOL _registrationOutstanding;
    unsigned int _deviceTokenHeartbeatGeneration;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (unsigned int)_notificationTypesUsed;
- (void)_updateLastSettingsUpdateForAccount:(id)arg1;
- (BOOL)_accountIsOutsideHeartbeatGracePeriod:(id)arg1;
- (void)_deviceTokenRegistrationNotificationReceived:(id)arg1;
- (void)acquireDeviceToken:(CDUnknownBlockType)arg1;
- (void)_acquireDeviceTokenAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deviceTokenHeartbeatForAccount:(id)arg1 force:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deviceTokenHeartbeatAccountEnumerator:(id)arg1 force:(BOOL)arg2 generation:(unsigned int)arg3;
- (id)_heartbeatAccountsForce:(BOOL)arg1;
- (void)_accountDidBecomeActive:(id)arg1;
- (void)deviceTokenHeartbeat:(BOOL)arg1;
- (BOOL)hasDeviceToken;
- (void)dealloc;
- (id)init;

@end

