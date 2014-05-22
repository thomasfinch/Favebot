//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSMutableArray, NSMutableSet, TFNTwitterAccount, TFNTwitterComposition, TFNTwitterDirectMessage, TFNTwitterUser;

@interface TFNTwitterDirectMessageConversation : NSObject <NSCoding>
{
    NSMutableSet *_messageIDs;
    BOOL _didAddMessage;
    NSMutableArray *_messages;
    BOOL _isLoadedFromDatabase;
    BOOL _needsFullCorrespondant;
    TFNTwitterAccount *_account;
    TFNTwitterUser *_correspondent;
    TFNTwitterComposition *_composition;
}

@property(nonatomic) BOOL needsFullCorrespondant; // @synthesize needsFullCorrespondant=_needsFullCorrespondant;
@property(nonatomic) BOOL isLoadedFromDatabase; // @synthesize isLoadedFromDatabase=_isLoadedFromDatabase;
@property(retain, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) TFNTwitterUser *correspondent; // @synthesize correspondent=_correspondent;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (BOOL)isRepliedTo;
@property(readonly, nonatomic) unsigned int unreadCount;
@property(readonly, nonatomic) BOOL isUnread;
- (void)setAsUnread;
- (void)deleteMessage:(id)arg1;
- (void)sendFromAccount:(id)arg1;
- (void)replaceComposition:(id)arg1 withSentMessage:(id)arg2;
- (void)endAddingMessages;
- (void)addMessage:(id)arg1;
- (void)beginAddingMessages;
- (int)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDate *freshDate;
@property(readonly, nonatomic) TFNTwitterDirectMessage *mostRecentMessage;
- (id)mostRecentMessagesWithCount:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *messages;
- (id)init;
- (id)emailHTML;

@end

