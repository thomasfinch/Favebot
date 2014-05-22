//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNNewDirectMessageManager.h"

@class TFNNewDirectMessageInbox, TFNNewDirectMessageThread;

@interface TFNNewDirectMessageMockManager : TFNNewDirectMessageManager
{
    TFNNewDirectMessageInbox *_inbox;
    TFNNewDirectMessageThread *_thread;
}

@property(retain, nonatomic) TFNNewDirectMessageThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) TFNNewDirectMessageInbox *inbox; // @synthesize inbox=_inbox;
- (void).cxx_destruct;
- (id)_mockEntriesForAccount:(id)arg1 participants:(id)arg2 threadID:(id)arg3;
- (id)_mockParticipantsForAccount:(id)arg1;
- (id)_mockThreadForAccount:(id)arg1;
- (void)sendMessage:(id)arg1 thread:(id)arg2 toUser:(id)arg3;
- (void)sendMessage:(id)arg1 thread:(id)arg2;
- (void)_refresh;
- (void)createGroupConversationForThread:(id)arg1;
- (void)setUserUpdatesEnabled:(BOOL)arg1;
- (void)setRefreshTimer:(id)arg1;
- (void)setMaxId:(long long)arg1;
- (void)setDirectMessageModel:(id)arg1;
- (void)paginateBackwardForThreadFromEventID:(long long)arg1 thread:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paginateBackwardForInboxFromEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)unreadMessagesCount;
- (id)initWithAccount:(id)arg1;

@end
