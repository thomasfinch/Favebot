//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TFNTwitterPushNotificationRouter : NSObject
{
    NSMutableDictionary *_routeActionDictionary;
    NSMutableDictionary *_routeCategoryDictionary;
    id <TFNTwitterAmbientPushNotificationCenter> _ambientNotificationCenter;
}

+ (id)defaultRouter;
@property(retain, nonatomic) id <TFNTwitterAmbientPushNotificationCenter> ambientNotificationCenter; // @synthesize ambientNotificationCenter=_ambientNotificationCenter;
- (void).cxx_destruct;
- (void)_scribeAmbientNotificationForAccount:(id)arg1 element:(id)arg2 action:(id)arg3 parameters:(id)arg4;
- (void)_scribePayload:(id)arg1 forRoute:(id)arg2 context:(int)arg3 scribeAction:(id)arg4 account:(id)arg5;
- (void)_routePayloadAmbiently:(id)arg1 toRoute:(id)arg2 context:(int)arg3 account:(id)arg4;
- (void)_routePayload:(id)arg1 toRoute:(id)arg2 context:(int)arg3 account:(id)arg4;
- (void)_routePayload:(id)arg1 context:(int)arg2;
- (void)unregisterPushNotificationRouteForCategory:(id)arg1;
- (BOOL)registerPushNotificationRoute:(id)arg1 forCategory:(id)arg2;
- (id)routeRegisteredForCategory:(id)arg1;
- (void)unregisterPushNotificationRouteForAction:(id)arg1;
- (BOOL)registerPushNotificationRoute:(id)arg1 forAction:(id)arg2;
- (id)routeRegisteredForAction:(id)arg1;
- (void)routePushPayload:(id)arg1 context:(int)arg2;
- (id)init;

@end

