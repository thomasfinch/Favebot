//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1DirectMessageCurrentConversation.h"

@class TFNTwitterDirectMessageConversation, UIViewController;

@protocol T1DirectMessageActions <T1DirectMessageCurrentConversation>
- (void)directMessagesPresentNextViewController:(UIViewController *)arg1;
- (void)directMessagesDidFinish:(UIViewController *)arg1;
- (void)unloadConversation:(TFNTwitterDirectMessageConversation *)arg1 completion:(void (^)(void))arg2;
- (void)loadConversation:(TFNTwitterDirectMessageConversation *)arg1 completion:(void (^)(void))arg2;
- (void)composeNewMessage;
@end
