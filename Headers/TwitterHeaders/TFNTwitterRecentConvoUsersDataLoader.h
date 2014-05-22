//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TFNTwitterAccount;

@interface TFNTwitterRecentConvoUsersDataLoader : NSObject
{
    TFNTwitterAccount *_account;
    BOOL _waitingForUserTimelineResponse;
    NSMutableArray *_collatedObjects;
}

- (void).cxx_destruct;
- (void)directMessagesUpdated:(id)arg1;
- (void)_processCollatedObjects;
- (void)_processDirectMessages:(id)arg1;
- (void)_processTimelineStatuses:(id)arg1;
- (void)_seedDataIfNecessary;
- (void)_startLoadingUserTimeline;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end
