/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

@interface PTHTweetbotRelationship : XXUnknownSuperclass {
	BOOL _blocked;
	BOOL _followedByCurrentUser;
	BOOL _followsCurrentUser;
	BOOL _canDirectMessage;
	BOOL _showsRetweets;
	NSDate* _updateDate;
}
@property(retain, nonatomic) NSDate* updateDate;
@property(assign, nonatomic) BOOL showsRetweets;
@property(assign, nonatomic) BOOL canDirectMessage;
@property(assign, nonatomic) BOOL followsCurrentUser;
@property(assign, nonatomic, getter=isFollowedByCurrentUser) BOOL followedByCurrentUser;
@property(assign, nonatomic, getter=isBlocked) BOOL blocked;
@property(readonly, assign, nonatomic) BOOL isCurrent;
-(void).cxx_destruct;
@end

