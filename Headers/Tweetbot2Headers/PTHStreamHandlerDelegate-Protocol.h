//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PTHStreamHandler;

@protocol PTHStreamHandlerDelegate <NSObject>

@optional
- (void)streamHandler:(PTHStreamHandler *)arg1 didOutputObject:(id)arg2;
- (void)streamHandler:(PTHStreamHandler *)arg1 didReceiveObject:(id)arg2;
- (void)streamHandlerDidClose:(PTHStreamHandler *)arg1;
@end
