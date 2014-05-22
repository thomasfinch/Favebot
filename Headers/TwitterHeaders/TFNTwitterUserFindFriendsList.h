//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterUserRelationshipUserList.h"

@class NSArray, NSNumber, NSSet;

@interface TFNTwitterUserFindFriendsList : TFNTwitterUserRelationshipUserList
{
    int _inFlightRequestCount;
    NSNumber *_totalRequestCount;
    NSArray *_addressBookEmailAddresses;
    NSSet *_nonUserObjects;
    NSArray *_unmatchedFriends;
    BOOL _shouldLoadReverseUsers;
    BOOL _continueUpdatingUnmatchedFriends;
    BOOL _hasAttemptedAddressBookAccess;
    BOOL _useWtfDataSourceImmediately;
    BOOL _useWtfDataSourceAfterImport;
    BOOL _useAbDataSource;
    BOOL _isCancelled;
    NSNumber *_completedRequestCount;
    unsigned int _addressBookSize;
    unsigned int _resolvedAddressBookRecordCount;
    id <TFNTwitterUserFindFriendsListDelegate> _delegate;
    unsigned int _reverseFriendsCount;
}

+ (void)initialize;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) unsigned int reverseFriendsCount; // @synthesize reverseFriendsCount=_reverseFriendsCount;
@property(nonatomic) BOOL useAbDataSource; // @synthesize useAbDataSource=_useAbDataSource;
@property(nonatomic) BOOL useWtfDataSourceAfterImport; // @synthesize useWtfDataSourceAfterImport=_useWtfDataSourceAfterImport;
@property(nonatomic) BOOL useWtfDataSourceImmediately; // @synthesize useWtfDataSourceImmediately=_useWtfDataSourceImmediately;
@property(nonatomic) BOOL hasAttemptedAddressBookAccess; // @synthesize hasAttemptedAddressBookAccess=_hasAttemptedAddressBookAccess;
@property(nonatomic) BOOL continueUpdatingUnmatchedFriends; // @synthesize continueUpdatingUnmatchedFriends=_continueUpdatingUnmatchedFriends;
@property(nonatomic) __weak id <TFNTwitterUserFindFriendsListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldLoadReverseUsers; // @synthesize shouldLoadReverseUsers=_shouldLoadReverseUsers;
@property(readonly, nonatomic) unsigned int resolvedAddressBookRecordCount; // @synthesize resolvedAddressBookRecordCount=_resolvedAddressBookRecordCount;
@property(readonly, nonatomic) unsigned int addressBookSize; // @synthesize addressBookSize=_addressBookSize;
@property(retain, nonatomic) NSNumber *completedRequestCount; // @synthesize completedRequestCount=_completedRequestCount;
- (void).cxx_destruct;
- (unsigned int)countPerPageRequest;
- (void)receiveFriends:(BOOL)arg1 obj:(id)arg2 error:(id)arg3;
- (void)_receiveReverseFriends:(BOOL)arg1 obj:(id)arg2 error:(id)arg3;
- (void)_receiveFriendsForRequestSize:(unsigned int)arg1 success:(BOOL)arg2 obj:(id)arg3 error:(id)arg4;
- (void)_incrementResolvedAddressBookRecordCountByRequestSize:(unsigned int)arg1;
- (id)emptyStreamMessage;
- (void)incrementRequestCountbyAmount:(unsigned int)arg1;
- (void)_loadMoreWtfLimit:(unsigned int)arg1 displayLocation:(id)arg2;
- (void)loadMoreReverseUsers;
- (void)_loadMore;
- (void)loadMore;
- (void)_receiveUsersArray:(BOOL)arg1 usersOrRecommendations:(id)arg2 error:(id)arg3;
- (BOOL)_isValidEmailAddress:(id)arg1;
- (void)unmatchedFriendsFiltered:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)unmatchedFriendsFiltered:(BOOL)arg1;
- (id)unmatchedFriends;
- (BOOL)hasInFlightRequests;
- (unsigned int)percentLoaded;
- (void)cancelLoading;
- (BOOL)doneLoading;
- (id)init;

@end

