/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotUser.h"

@class PTHTweetbotRelationship;

@interface PTHTweetbotOtherUser : PTHTweetbotUser {
	PTHTweetbotRelationship* _relationship;
}
@property(readonly, assign, nonatomic) PTHTweetbotRelationship* relationship;
-(void).cxx_destruct;
-(void)setAccount:(id)account;
-(void)updateRelationshipIfNeeded:(id)needed;
-(void)updateRelationship:(id)relationship;
-(void)disableRetweets:(id)retweets;
-(void)enableRetweets:(id)retweets;
-(void)unfollow:(id)unfollow;
-(void)follow:(id)follow;
-(void)unblock:(id)unblock;
-(void)block:(id)block;
-(void)reportSpam:(id)spam;
-(void)_removeFromCursors;
-(id)mentionsCursor;
-(id)initWithAccount:(id)account tid:(long long)tid;
@end
