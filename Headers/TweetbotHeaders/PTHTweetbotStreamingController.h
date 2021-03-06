/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PTHTweetbotAccount, NSMutableData, NSTimer, PTHTweetbotCurrentUser, NSMutableArray, PTHOAuthURLRequest, NSMutableSet;

@interface PTHTweetbotStreamingController : XXUnknownSuperclass {
	PTHTweetbotAccount* _account;
	PTHTweetbotCurrentUser* _currentUser;
	BOOL _shutdown;
	PTHOAuthURLRequest* _request;
	NSMutableSet* _friendTIDs;
	double _reconnectTime;
	NSMutableArray* _streamQueue;
	NSTimer* _backgroundStopTimer;
	NSMutableData* _streamingBuffer;
	unsigned _backgroundTaskIdentifier;
	BOOL _isStreaming;
}
@property(readonly, assign, nonatomic) BOOL isStreaming;
+(void)didStartStreamingAccount:(id)account;
+(BOOL)canStartStreamForAccount:(id)account;
+(id)timestampsForAccount:(id)account;
+(void)initialize;
-(void).cxx_destruct;
-(void)dealloc;
-(void)_restart;
-(void)stop;
-(BOOL)start;
-(void)_handleUnfavorited:(id)unfavorited userDictionary:(id)dictionary;
-(void)_handleFavorited:(id)favorited userDictionary:(id)dictionary;
-(void)_handleUnblock:(id)unblock;
-(void)_handleBlock:(id)block;
-(void)_handleUnfollow:(id)unfollow;
-(void)_handleFollow:(id)follow;
-(void)_handleUnfavorite:(id)unfavorite;
-(void)_handleFavorite:(id)favorite;
-(void)_handleDelete:(id)aDelete;
-(void)_handleStatus:(id)status;
-(void)_handleDirectMessage:(id)message;
-(void)runOrQueue:(id)queue;
-(void)_handleFriends:(id)friends;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(void)_cancelForBackground;
-(void)_shutdownBackgroundTask;
-(id)initWithAccount:(id)account;
@end

