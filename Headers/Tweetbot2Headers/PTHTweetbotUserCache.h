//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHSQLiteDatabase.h"

@class NSArray, PTHTweetbotAccount;

@interface PTHTweetbotUserCache : PTHSQLiteDatabase
{
    PTHTweetbotAccount *_account;
    struct sqlite3_stmt *_searchStatement;
    unsigned int _searchCounter;
    NSArray *_cachedUsers;
}

@property(retain, nonatomic) NSArray *cachedUsers; // @synthesize cachedUsers=_cachedUsers;
- (void)dealloc;
- (void)reset;
- (void)updateLoadedUsers;
- (void)dispatchFind:(id)arg1 limit:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)updateFriends;
- (void)_lookupUsers:(id)arg1;
- (void)connectionDidOpen:(struct sqlite3 *)arg1;
- (id)verifyDatabase:(struct sqlite3 *)arg1;
- (id)databaseWasCreated:(struct sqlite3 *)arg1;
- (id)initWithAccount:(id)arg1;

@end

