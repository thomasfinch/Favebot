//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, PTHTweetbotAccount, PTHTweetbotRateLimit;

@interface PTHTweetbotCursor : NSObject <NSCoding>
{
    NSMutableArray *_items;
    PTHTweetbotAccount *_account;
    NSMutableArray *_loadNewerBlocks;
    NSMutableArray *_loadGapBlocks;
    NSMutableArray *_loadOlderBlocks;
    BOOL _hasOlder;
    BOOL _refreshed;
    BOOL _firstTime;
    BOOL _streaming;
    BOOL _loadingNewer;
    BOOL _loadingGap;
    BOOL _loadingOlder;
    NSString *_nextCursor;
    unsigned int _syncVersion;
    float _syncOffsetPercentage;
    float _displayOffset;
    unsigned int _unreadItemCount;
    NSDate *_lastLoadNewerDate;
    NSDate *_updateDate;
    float _displayOffsetPercentage;
    long long _gapTID;
    long long _sinceTID;
    long long _displayTopTID;
    long long _markedTID;
    long long _syncTID;
    long long _lastReadTID;
}

+ (unsigned int)itemSaveCount;
+ (Class)itemClass;
@property(readonly, nonatomic, getter=isLoadingOlder) BOOL loadingOlder; // @synthesize loadingOlder=_loadingOlder;
@property(readonly, nonatomic, getter=isLoadingGap) BOOL loadingGap; // @synthesize loadingGap=_loadingGap;
@property(nonatomic) float displayOffsetPercentage; // @synthesize displayOffsetPercentage=_displayOffsetPercentage;
@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(retain, nonatomic) NSDate *lastLoadNewerDate; // @synthesize lastLoadNewerDate=_lastLoadNewerDate;
@property(readonly, nonatomic, getter=isLoadingNewer) BOOL loadingNewer; // @synthesize loadingNewer=_loadingNewer;
@property(nonatomic, getter=isStreaming) BOOL streaming; // @synthesize streaming=_streaming;
@property(readonly, nonatomic) unsigned int unreadItemCount; // @synthesize unreadItemCount=_unreadItemCount;
@property(nonatomic) long long lastReadTID; // @synthesize lastReadTID=_lastReadTID;
@property(nonatomic) float displayOffset; // @synthesize displayOffset=_displayOffset;
@property(nonatomic) float syncOffsetPercentage; // @synthesize syncOffsetPercentage=_syncOffsetPercentage;
@property(nonatomic) unsigned int syncVersion; // @synthesize syncVersion=_syncVersion;
@property(nonatomic) long long syncTID; // @synthesize syncTID=_syncTID;
@property(nonatomic) long long markedTID; // @synthesize markedTID=_markedTID;
@property(nonatomic) long long displayTopTID; // @synthesize displayTopTID=_displayTopTID;
@property(nonatomic, getter=isFirstTime) BOOL firstTime; // @synthesize firstTime=_firstTime;
@property(nonatomic, getter=hasRefreshed) BOOL refreshed; // @synthesize refreshed=_refreshed;
@property(nonatomic) long long sinceTID; // @synthesize sinceTID=_sinceTID;
@property(copy, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(readonly, nonatomic) long long gapTID; // @synthesize gapTID=_gapTID;
@property(nonatomic) PTHTweetbotAccount *account; // @synthesize account=_account;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)reset;
- (void)updateLastReadTIDIfNeeded:(long long)arg1;
- (void)resetUnreadItemCount;
- (unsigned int)_unreadItemCount;
@property(readonly, nonatomic, getter=isRead) BOOL read;
@property(readonly, nonatomic) BOOL canSync;
@property(readonly, nonatomic) PTHTweetbotRateLimit *rateLimit;
- (void)loadGap:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSMutableDictionary *gapQueryDictionary;
@property(readonly, nonatomic) BOOL hasGap;
- (void)loadAll:(CDUnknownBlockType)arg1;
- (void)_loadAllOlder:(CDUnknownBlockType)arg1;
- (void)loadOlder:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSMutableDictionary *olderQueryDictionary;
@property(readonly, nonatomic) BOOL hasOlder; // @synthesize hasOlder=_hasOlder;
- (void)loadNewerIfNeeded:(CDUnknownBlockType)arg1;
- (void)loadNewer:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSMutableDictionary *refreshQueryDictionary;
@property(readonly, nonatomic) double loadNewerInterval;
@property(readonly, nonatomic) BOOL canLoadNewer;
@property(readonly, nonatomic) BOOL shouldLoadNewer;
@property(readonly, nonatomic) double lastLoadNewerInterval;
@property(readonly, nonatomic) BOOL isLoaded;
@property(readonly, nonatomic) BOOL shouldReload;
- (void)sendRequest:(id)arg1 type:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)handleResponse:(id)arg1 type:(int)arg2 block:(CDUnknownBlockType)arg3;
- (id)newItemWithDictionary:(id)arg1;
@property(readonly, nonatomic) BOOL hasReadStatus;
@property(readonly, nonatomic) BOOL usesTIDPagination;
@property(readonly, nonatomic) BOOL usesCursorPagination;
@property(readonly, nonatomic) BOOL needsSort;
@property(readonly, retain, nonatomic) NSMutableDictionary *queryDictionary;
@property(readonly, retain, nonatomic) NSString *requestURLString;
- (id)itemsArrayFromResponse:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (long long)nextTID:(long long)arg1;
- (BOOL)containsTID:(long long)arg1;
- (int)indexOfTID:(long long)arg1;
- (id)itemWithTID:(long long)arg1;
@property(readonly, nonatomic) unsigned int itemCount;
@property(readonly, retain, nonatomic) NSArray *items;
@property(readonly, copy, nonatomic) NSString *uniqueID;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

