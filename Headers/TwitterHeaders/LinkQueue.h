//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LinkQueue : NSObject
{
    NSString *_username;
    NSString *_password;
    CDUnknownBlockType _responseBlock;
}

+ (id)defaultLinkQueuePasswordPlaceholder;
+ (id)defaultLinkQueueLoginPlaceholder;
+ (id)defaultLinkQueueLoginTitle;
+ (id)defaultLinkQueueURLString;
+ (id)defaultLinkQueueName;
+ (id)defaultLinkQueue;
+ (Class)preferredLinkQueueClass;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)saveAsDefault;
- (int)defaultsIntegerValue;
- (CDUnknownBlockType)addLinkResponseBlock;
- (void)addURL:(id)arg1 summary:(id)arg2 status:(id)arg3;
- (void)verifyCredentials;
- (BOOL)needsCredentials;
- (id)requestWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (id)actionTitle;

@end
