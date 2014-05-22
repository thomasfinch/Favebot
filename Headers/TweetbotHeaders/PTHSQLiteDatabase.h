/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Tweetbot-Structs.h"

@class NSObject, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PTHSQLiteDatabase : XXUnknownSuperclass {
	sqlite3* _database;
	NSObject<OS_dispatch_queue>* _queue;
	NSString* _queueLabel;
	NSString* _path;
	NSMutableDictionary* _preparedStatements;
	BOOL _open;
	BOOL _deleted;
	BOOL _verified;
	BOOL _skipBackup;
}
@property(readonly, assign, nonatomic) BOOL isConnectionOpen;
@property(assign) int userVersion;
@property(assign, nonatomic) BOOL skipBackup;
@property(readonly, assign, nonatomic) NSString* path;
+(BOOL)asynchronous;
-(void).cxx_destruct;
-(void)dealloc;
-(id)verifyDatabase:(sqlite3*)database;
-(id)databaseWasCreated:(sqlite3*)created;
-(void)connectionDidClose;
-(void)connectionDidOpen:(sqlite3*)connection;
-(void)dispatchFetchSingleColumn:(id)column result:(id)result;
-(void)executeFetchSingleColumn:(id)column result:(id)result;
-(void)performFetchSingleColumn:(id)column result:(id)result;
-(void)dispatchFetch:(id)fetch result:(id)result;
-(void)executeFetch:(id)fetch result:(id)result;
-(void)performFetch:(id)fetch result:(id)result;
-(void)dispatchPreparedStatement:(id)statement result:(id)result;
-(void)executePreparedStatement:(id)statement result:(id)result;
-(void)performPreparedStatement:(id)statement result:(id)result;
-(void)dispatchStatement:(id)statement result:(id)result;
-(void)executeStatement:(id)statement result:(id)result;
-(int)performStatement:(id)statement error:(id*)error;
-(void)dispatch:(id)dispatch;
-(void)dispatchTransaction:(id)transaction;
-(void)executeTransaction:(id)transaction;
-(void)performTransaction:(id)transaction;
-(void)_closeConnectionForBackground;
-(void)closeConnectionSync;
-(void)closeConnection;
-(void)_closeConnection;
-(BOOL)open:(id*)open;
-(void)delete;
-(void)_delete;
-(void)dispatchSync:(id)sync;
-(void)dispatchAsync:(id)async;
-(BOOL)_isCurrentQueue;
-(id)initWithPath:(id)path;
-(id)newValueFromStatement:(sqlite3_stmt*)statement atColumn:(unsigned)column;
@end

