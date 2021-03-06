//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterStream.h"

@class NSArray, NSMutableSet, NSString;

@interface TFNTwitterUsersStream : TFNTwitterStream
{
    BOOL _isLoadingTop;
    BOOL _isLoadingBottom;
    BOOL _isAtEnd;
    id <TFNTwitterUsersStreamFollowBehaviorDelegate> _followBehaviorDelegate;
    NSString *_clusterFollowDisplayLocation;
    NSString *_replenishDisplayLocation;
    NSArray *_streamObjects;
    NSMutableSet *_clusterFollowedUserIDs;
    NSMutableSet *_excludedIDs;
    NSString *_prevCursor;
    NSString *_nextCursor;
}

@property(copy, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(copy, nonatomic) NSString *prevCursor; // @synthesize prevCursor=_prevCursor;
@property(retain, nonatomic) NSMutableSet *excludedIDs; // @synthesize excludedIDs=_excludedIDs;
@property(retain, nonatomic) NSMutableSet *clusterFollowedUserIDs; // @synthesize clusterFollowedUserIDs=_clusterFollowedUserIDs;
@property(nonatomic) BOOL isAtEnd; // @synthesize isAtEnd=_isAtEnd;
@property(nonatomic) BOOL isLoadingBottom; // @synthesize isLoadingBottom=_isLoadingBottom;
@property(nonatomic) BOOL isLoadingTop; // @synthesize isLoadingTop=_isLoadingTop;
@property(copy, nonatomic) NSArray *streamObjects; // @synthesize streamObjects=_streamObjects;
@property(copy, nonatomic) NSString *replenishDisplayLocation; // @synthesize replenishDisplayLocation=_replenishDisplayLocation;
@property(copy, nonatomic) NSString *clusterFollowDisplayLocation; // @synthesize clusterFollowDisplayLocation=_clusterFollowDisplayLocation;
@property(nonatomic) __weak id <TFNTwitterUsersStreamFollowBehaviorDelegate> followBehaviorDelegate; // @synthesize followBehaviorDelegate=_followBehaviorDelegate;
- (void).cxx_destruct;
- (id)mainTextForError:(id)arg1;
- (id)emptyStreamMessage;
- (BOOL)canRetryForError:(id)arg1;
- (BOOL)loadBottom;
- (BOOL)loadTopFromPolling:(BOOL)arg1;
- (void)_didReceiveUniversalSearchDictionary:(id)arg1 top:(BOOL)arg2;
- (void)_didReceivePaginatedResults:(id)arg1 top:(BOOL)arg2;
- (void)_didReceiveReplacementUser:(id)arg1 forUser:(id)arg2 inUserCluster:(id)arg3 atIndex:(unsigned int)arg4;
- (BOOL)_replenishUser:(id)arg1 inCluster:(id)arg2 index:(unsigned int)arg3;
- (void)_didReceiveUserCluster:(id)arg1 forUser:(id)arg2 atIndex:(unsigned int)arg3;
- (BOOL)_loadClusterForUser:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_didReceiveResponseObject:(id)arg1 top:(BOOL)arg2;
- (void)_loadBottomWithRequest:(id)arg1;
- (void)_loadTopWithRequest:(id)arg1;
- (void)_didReceiveError:(id)arg1 top:(BOOL)arg2;
- (void)_didReceiveUsers:(id)arg1 receiveType:(int)arg2;
- (id)_dummyLoadingUser;
- (void)_userDidFollow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

