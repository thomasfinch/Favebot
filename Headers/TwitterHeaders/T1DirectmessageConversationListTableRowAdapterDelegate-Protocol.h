//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSIndexPath, T1DirectMessageConversationListCell, T1DirectMessageConversationListTableRowAdapter, TFNTwitterDirectMessageConversation;

@protocol T1DirectmessageConversationListTableRowAdapterDelegate
- (void)directMessageConversationListRowAdapter:(T1DirectMessageConversationListTableRowAdapter *)arg1 didSelectConversation:(TFNTwitterDirectMessageConversation *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)directMessageConversationListRowAdapter:(T1DirectMessageConversationListTableRowAdapter *)arg1 didCreateCell:(T1DirectMessageConversationListCell *)arg2;
@end
