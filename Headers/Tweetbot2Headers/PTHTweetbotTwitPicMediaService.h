//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotOAuthMediaService.h"

@class NSRegularExpression;

@interface PTHTweetbotTwitPicMediaService : PTHTweetbotOAuthMediaService
{
    NSRegularExpression *_expression;
}

+ (id)title;
+ (BOOL)canUploadImages;
- (void)dealloc;
- (id)urlStringFromResponseDictionary:(id)arg1;
- (id)uploadPostDictionary;
- (id)uploadMessageKey;
- (id)uploadMediaKey;
- (id)uploadURL;

@end

