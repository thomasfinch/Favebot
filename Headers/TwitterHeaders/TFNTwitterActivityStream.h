//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterGenericTimelineStream.h"

@class NSArray, TFNTwitterAccount, TFNTwitterDummyEndOfStreamActivityItem, TFNTwitterDummyErrorActivityItem, TFNTwitterDummyLoadOlderActivityItem;

@interface TFNTwitterActivityStream : NSObject <TFNTwitterGenericTimelineStream>
{
    TFNTwitterDummyEndOfStreamActivityItem *_endOfStreamItem;
    TFNTwitterDummyLoadOlderActivityItem *_loadOlderItem;
    TFNTwitterDummyErrorActivityItem *_errorItem;
    BOOL _needsSerialization;
    BOOL _isPendingRefresh;
    BOOL _loadConservatively;
    BOOL _isLoadingNewer;
    BOOL _isLoadingOlder;
    BOOL _isAtEnd;
    TFNTwitterAccount *_account;
    NSArray *_activities;
    int _filterType;
}

@property(nonatomic) BOOL isAtEnd; // @synthesize isAtEnd=_isAtEnd;
@property(nonatomic) BOOL isLoadingOlder; // @synthesize isLoadingOlder=_isLoadingOlder;
@property(nonatomic) BOOL isLoadingNewer; // @synthesize isLoadingNewer=_isLoadingNewer;
@property(nonatomic) int filterType; // @synthesize filterType=_filterType;
@property(nonatomic) BOOL loadConservatively; // @synthesize loadConservatively=_loadConservatively;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) BOOL isPendingRefresh; // @synthesize isPendingRefresh=_isPendingRefresh;
@property(nonatomic) BOOL needsSerialization; // @synthesize needsSerialization=_needsSerialization;
- (void).cxx_destruct;
- (void)_addErrorItemWithMessage:(id)arg1 andSubMessage:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)_errorItem;
- (void)_setMessageTextAndActionBlockToGap:(id)arg1;
- (BOOL)_fillInGap:(id)arg1;
- (BOOL)_couldBeGapWithReceivedItemsCount:(int)arg1 countParameter:(int)arg2;
- (void)_removeUnnecessaryDummyItemsFromArray:(id)arg1;
- (id)_userIDsForMostRecentActiviesWithMaxTweetingUsers:(unsigned int)arg1 maxNonTweetingUsers:(unsigned int)arg2;
- (void)_removeActivitiesInStreamFromUser:(id)arg1 containingStatus:(id)arg2 notifyCompletion:(BOOL)arg3;
- (void)_didDeleteStatus:(id)arg1;
- (id)_loadOlderItem;
- (id)_endOfStreamItem;
- (id)_oldestItem;
- (id)itemsToBeSerialized;
- (unsigned int)numberOfActivitiesNewerThan:(id)arg1;
- (void)filterSpamFromStreamWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeActivitiesInStreamFromUser:(id)arg1 notifyCompletion:(BOOL)arg2;
- (int)countParameter;
- (BOOL)isAggregatable;
- (void)postUpdateNotification;
- (id)statusesWithUpdatedTextHeight;
- (BOOL)shouldPersistScrollPosition;
- (id)autosaveName;
- (void)_discardMagicRecsActivityItems:(id)arg1;
- (void)_addActivities:(id)arg1 older:(BOOL)arg2 source:(int)arg3 countParameter:(int)arg4 gap:(id)arg5;
- (void)loadOlder;
- (id)refreshSinceID;
- (void)loadNewerFromPolling:(BOOL)arg1;
- (void)loadOlder:(id)arg1 sinceID:(id)arg2 maxID:(id)arg3 count:(id)arg4 polling:(BOOL)arg5;
- (void)loadNewer:(id)arg1 sinceID:(id)arg2 count:(id)arg3 polling:(BOOL)arg4;
- (void)dealloc;
- (id)serializationDictionaryValue;
- (id)initWithAccount:(id)arg1 serializationDictionary:(id)arg2;

@end

