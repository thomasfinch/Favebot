//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotMediaService.h"

@class NSDictionary, NSString, NSURL, PTHURLRequest;

@interface PTHTweetbotOAuthMediaService : PTHTweetbotMediaService
{
    PTHURLRequest *_urlRequest;
    BOOL _cancelled;
}

- (void)dealloc;
- (void)cancel;
- (void)uploadMediaData:(id)arg1 withMessage:(id)arg2 withType:(int)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)urlStringFromResponse:(id)arg1;
- (id)urlStringFromResponseDictionary:(id)arg1;
@property(readonly, nonatomic) int uploadResponseType;
@property(readonly, retain, nonatomic) NSDictionary *uploadPostDictionary;
@property(readonly, retain, nonatomic) NSString *uploadMessageKey;
@property(readonly, retain, nonatomic) NSString *uploadMediaKey;
@property(readonly, retain, nonatomic) NSURL *movieUploadURL;
@property(readonly, retain, nonatomic) NSURL *imageUploadURL;
@property(readonly, retain, nonatomic) NSURL *uploadURL;

@end
