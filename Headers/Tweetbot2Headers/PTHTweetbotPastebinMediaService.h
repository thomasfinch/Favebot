//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotMediaService.h"

@class PTHURLRequest;

@interface PTHTweetbotPastebinMediaService : PTHTweetbotMediaService
{
    PTHURLRequest *_urlRequest;
}

+ (id)title;
+ (BOOL)canUploadText;
- (void)dealloc;
- (void)cancel;
- (void)uploadMediaData:(id)arg1 withMessage:(id)arg2 withType:(int)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end

