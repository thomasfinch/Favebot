/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHSQLiteDatabase.h"
#import "Tweetbot-Structs.h"

@class PTHTweetbotAccount, NSArray;

@interface PTHTweetbotUserCache : PTHSQLiteDatabase {
	PTHTweetbotAccount* _account;
	sqlite3_stmt* _searchStatement;
	unsigned _searchCounter;
	NSArray* _cachedUsers;
}
@property(retain, nonatomic) NSArray* cachedUsers;
-(void).cxx_destruct;
-(void)reset;
-(void)updateLoadedUsers;
-(void)dispatchFind:(id)find limit:(unsigned)limit block:(id)block;
-(void)updateFriends;
-(void)_lookupUsers:(id)users;
-(void)connectionDidOpen:(sqlite3*)connection;
-(id)verifyDatabase:(sqlite3*)database;
-(id)databaseWasCreated:(sqlite3*)created;
-(id)initWithAccount:(id)account;
@end

