//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterConcreteStatusesStream.h"

@class NSDate, NSString, TFNTwitterConversationsTimelineStreamDebugger;

@interface TFNTwitterConversationsTimelineStream : TFNTwitterConcreteStatusesStream
{
    NSString *_PTRCursor;
    NSDate *_latestFakeDate;
    TFNTwitterConversationsTimelineStreamDebugger *_debugger;
    NSString *_upCursor;
    NSString *_downCursor;
}

@property(copy, nonatomic) NSString *downCursor; // @synthesize downCursor=_downCursor;
@property(copy, nonatomic) NSString *upCursor; // @synthesize upCursor=_upCursor;
@property(retain, nonatomic) TFNTwitterConversationsTimelineStreamDebugger *debugger; // @synthesize debugger=_debugger;
@property(retain, nonatomic) NSDate *latestFakeDate; // @synthesize latestFakeDate=_latestFakeDate;
@property(copy, nonatomic) NSString *PTRCursor; // @synthesize PTRCursor=_PTRCursor;
- (void).cxx_destruct;
- (void)_loadSuggestsTimelineOlder;
- (void)_loadSuggestsTimelineNewer;
- (id)_addGapIfNeeded:(id)arg1 response:(id)arg2;
- (BOOL)_useTwitterSuggestsOrderingLogic;
- (id)_addGapIfNeeded:(id)arg1 response:(id)arg2 couldBeGap:(BOOL)arg3 isFromFillingInGap:(BOOL)arg4;
- (void)_updateFakeDateWithItem:(id)arg1;
- (id)_fakeDateAndIncrement;
- (void)_updateCursors:(id)arg1;
- (id)_streamControlObjectAfter:(id)arg1;
- (void)_updateLatestFakeDate:(id)arg1;
- (void)_parseObservabilityMessageDictFromResponse:(id)arg1 streamObjectsDict:(id)arg2 timelineEntry:(id)arg3 newStreamObjects:(id)arg4;
- (void)_parseEventGalleryDictFromResponse:(id)arg1 streamObjectsDict:(id)arg2 timelineEntry:(id)arg3 newStreamObjects:(id)arg4;
- (void)_parseUserGalleryDictFromResponse:(id)arg1 streamObjectsDict:(id)arg2 timelineEntry:(id)arg3 newStreamObjects:(id)arg4;
- (void)_parseCuratedStatusDictFromResponse:(id)arg1 streamObjectsDict:(id)arg2 timelineEntry:(id)arg3 newStreamObjects:(id)arg4;
- (id)_parseCurationContextFromResponse:(id)arg1 timelineID:(id)arg2;
- (void)_parseDiscoverStatusDictFromResponse:(id)arg1 streamObjectsDict:(id)arg2 timelineEntry:(id)arg3 newStreamObjects:(id)arg4;
- (id)_parseRecapFromResponse:(id)arg1 streamObjectsDict:(id)arg2;
- (id)_parseBannerFromResponse:(id)arg1 streamObjectsDict:(id)arg2;
- (id)_gapItem;
- (id)_findOldestStatus:(id)arg1;
- (BOOL)_refreshAtBottomOfNewContent;
- (void)_fillGap:(id)arg1;
- (id)_gapBeforeStatus:(id)arg1;
- (void)_streamResponse:(id)arg1 couldBeGap:(BOOL)arg2 isFromFillingInGap:(BOOL)arg3 polling:(BOOL)arg4;
- (int)minStatusesToConsiderBeingGap;
- (id)oldestStatus;
- (void)_unretweetStatusNotification:(id)arg1;
- (id)emptyStreamSubtext;
- (id)emptyStreamMessage;
- (BOOL)shouldPersistScrollPosition;
- (id)autosaveName;
- (id)itemsToBeSerialized;
- (void)_loadOlder;
- (void)_loadBeforeGap:(id)arg1;
- (void)loadBeforeGap:(id)arg1;
- (void)loadNewerStatusFromPolling:(BOOL)arg1 includeInjections:(BOOL)arg2;
- (BOOL)loadNewerFromPolling:(BOOL)arg1 includeInjections:(BOOL)arg2;
- (void)_loadNewerFromPolling:(BOOL)arg1;
- (BOOL)loadNewerFromStatusPosting:(id)arg1;
- (void)addStreamObjects:(id)arg1 needsSortAndDedupe:(BOOL)arg2 notify:(BOOL)arg3;
- (BOOL)shouldIndexUsersInAutocomplete;
- (BOOL)canFillInGap;
- (void)dealloc;
- (id)serializationDictionaryValue;
- (CDUnknownBlockType)loadNewerResponseBlockPolling:(BOOL)arg1;
- (id)initWithAccount:(id)arg1 serializationDictionary:(id)arg2;

@end

