/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotObject.h"

@class PTHTweetbotUser, PTHTweetbotDirectMessage, NSMutableArray, NSArray;

@interface PTHTweetbotDirectMessageThread : PTHTweetbotObject {
	NSMutableArray* _messagesAndDrafts;
	PTHTweetbotUser* _toUser;
	unsigned _unreadItemCount;
	long long _lastReadTID;
}
@property(readonly, assign, nonatomic) unsigned unreadItemCount;
@property(readonly, assign, nonatomic, getter=isRead) BOOL read;
@property(assign, nonatomic) long long lastReadTID;
@property(readonly, assign, nonatomic) long long toUserTID;
@property(retain, nonatomic) PTHTweetbotUser* toUser;
@property(readonly, assign, nonatomic) PTHTweetbotDirectMessage* latestMessage;
@property(readonly, copy, nonatomic) NSArray* messages;
@property(copy, nonatomic) NSArray* messagesAndDrafts;
-(void).cxx_destruct;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)setAccount:(id)account;
-(BOOL)hasString:(id)string;
-(void)markRead;
-(void)removeMessage:(id)message;
-(void)addMessage:(id)message;
-(BOOL)updateMessagesAndDrafts:(id)drafts;
-(void)resetUnreadItemCount;
-(unsigned)_unreadItemCount;
-(void)destroy:(id)destroy;
@end
