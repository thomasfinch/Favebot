//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSRegularExpression, NSString;

@interface _PTHTweetbotRegexMediaParserItem : NSObject
{
    NSString *_expressionString;
    NSDictionary *_thumbnailFormats;
    NSString *_mediaFormat;
    NSRegularExpression *_expression;
    NSArray *_hosts;
    int _mediaType;
}

@property(readonly, nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
- (void)dealloc;
- (id)thumbnailURLForURL:(id)arg1 withSize:(unsigned int)arg2;
- (id)mediaURLForURL:(id)arg1;
- (id)_url:(id)arg1 withFormat:(id)arg2;
- (BOOL)canParseURL:(id)arg1;
- (id)expression;
- (id)initWithDictionary:(id)arg1;

@end

