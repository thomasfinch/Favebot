//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterStatusStream.h"

@class NSDate, NSString, TFNTwitterDummyStatus, TFNTwitterStatus;

@interface TFNTwitterConcreteStatusesStream : TFNTwitterStatusStream
{
    NSString *_guid;
    NSDate *_lastUpdated;
    TFNTwitterDummyStatus *_dummyEndOfStream;
    TFNTwitterDummyStatus *_dummyLoading;
    TFNTwitterStatus *_newestStatus;
    struct {
        unsigned int isLoadingNewer:1;
        unsigned int isLoadingOlder:1;
        unsigned int isAtEnd:1;
        unsigned int loadingOlderLessThan20Count:5;
        unsigned int needsToLoadFromDisk:1;
        unsigned int loadConservatively:1;
    } _flags;
    BOOL _shouldObserveDeleteStatusNotifications;
}

@property(nonatomic) BOOL shouldObserveDeleteStatusNotifications; // @synthesize shouldObserveDeleteStatusNotifications=_shouldObserveDeleteStatusNotifications;
- (void).cxx_destruct;
- (BOOL)_newStreamObjectsContainsUnearnedPromotedContent:(id)arg1;
- (void)_removeEligiblePromotedTweets;
- (id)_replaceGap:(id)arg1;
- (int)_removeGap:(id)arg1;
- (void)_retryLoadOlder;
- (void)_loadOlder;
- (void)_loadNewerFromPolling:(BOOL)arg1;
- (void)_streamResponse:(id)arg1 couldBeGap:(BOOL)arg2 isFromFillingInGap:(BOOL)arg3 polling:(BOOL)arg4;
- (BOOL)_status:(id)arg1 isNewerThanStatus:(id)arg2;
- (void)_deleteStatusNotification:(id)arg1;
- (void)postStatusesChangedNotificationWithName:(id)arg1 type:(int)arg2 resultCount:(unsigned int)arg3 polling:(BOOL)arg4 error:(id)arg5;
- (void)postStatusesChangedNotificationWithName:(id)arg1 type:(int)arg2 resultCount:(unsigned int)arg3 error:(id)arg4;
- (id)_errorStatusForError:(id)arg1;
- (id)_convertStatusesToDictionary:(id)arg1;
- (id)_populateStatusesFromDictionary:(id)arg1;
- (id)_storedStreamPath;
- (id)_sortStreamObjects:(id)arg1;
- (id)_guid;
- (id)newestStatusThatIsNotMine;
- (BOOL)fillInGap:(id)arg1;
- (BOOL)loadOlder;
- (BOOL)loadNewerFromPolling:(BOOL)arg1;
- (BOOL)hasRealData;
- (BOOL)hasData;
- (id)lastUpdated;
- (id)autosaveName;
- (void)_loadBeforeGap:(id)arg1;
- (int)minStatusesToConsiderBeingGap;
- (int)maxObjectsCount;
- (id)definitiveStatuses:(id)arg1;
- (CDUnknownBlockType)fillInGapResponseBlock:(id)arg1;
- (CDUnknownBlockType)loadOlderResponseBlock;
- (CDUnknownBlockType)loadNewerResponseBlockPolling:(BOOL)arg1;
- (id)oldestStatusID;
- (id)newestStatusID;
- (id)oldestStatus;
- (id)newestStatus;
- (void)markAtEnd;
- (void)addStatus:(id)arg1;
- (id)removeStatusesFromUser:(id)arg1;
- (void)removeStreamObject:(id)arg1;
- (void)addStreamObjects:(id)arg1 updateType:(int)arg2 notify:(BOOL)arg3;
- (void)addStreamObjects:(id)arg1 needsSortAndDedupe:(BOOL)arg2 notify:(BOOL)arg3;
- (void)addFooterObjectsToStatuses:(id)arg1;
- (id)statuses;
- (void)setStatuses:(id)arg1;
- (BOOL)shouldIndexUsersInAutocomplete;
- (id)itemsToBeSerialized;
@property(nonatomic) BOOL loadConservatively;
- (BOOL)isAtEnd;
- (void)setIsLoadingOlder:(BOOL)arg1;
- (BOOL)isLoadingOlder;
- (void)setIsLoadingNewer:(BOOL)arg1;
- (BOOL)isLoadingNewer;
- (void)dealloc;
- (id)init;

@end

