//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterPageableUserList.h"

@class NSArray, NSString, TFNTwitterAccount, TFNTwitterUser;

@interface TFNTwitterUserList : NSObject <TFNTwitterPageableUserList>
{
    struct {
        unsigned int isLoading:1;
        unsigned int isAtEnd:1;
        unsigned int loadMoreLessThanMinCount:5;
    } _flags;
    BOOL _shouldSortUsersByFullName;
    NSArray *_users;
    TFNTwitterAccount *_account;
    TFNTwitterUser *_user;
    NSString *_cursor;
}

@property(nonatomic) BOOL shouldSortUsersByFullName; // @synthesize shouldSortUsersByFullName=_shouldSortUsersByFullName;
@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)_dummyUserOfType:(int)arg1;
@property(readonly, nonatomic) NSString *emptyStreamSubtext;
@property(readonly, nonatomic) NSString *emptyStreamMessage;
@property(readonly, nonatomic) BOOL hasInFlightRequests; // @dynamic hasInFlightRequests;
- (void)_loadMore;
- (void)loadMore;
- (BOOL)isAtEnd;
- (void)markAtEnd;
- (void)_markAtEnd;
- (void)didAddUsers:(id)arg1;
- (void)resetListStateForLoadMore;
- (void)markAsEmpty;
- (void)receiveFriends:(BOOL)arg1 obj:(id)arg2 error:(id)arg3;
- (void)receiveUserRecommendations:(BOOL)arg1 obj:(id)arg2 error:(id)arg3;
- (void)receiveUsers:(BOOL)arg1 obj:(id)arg2 error:(id)arg3;
- (id)_userForUserOrRecommendation:(id)arg1;
- (void)_receiveUsersArray:(BOOL)arg1 usersOrRecommendations:(id)arg2 error:(id)arg3;
- (void)willReceiveUsers:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)insertUser:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addUsersOrRecommendations:(id)arg1;
- (unsigned int)countPerPageRequest;
- (void)seedUsers:(id)arg1;

@end

