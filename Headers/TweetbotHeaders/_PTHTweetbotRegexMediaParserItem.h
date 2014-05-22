/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSRegularExpression, NSDictionary, NSArray;

@interface _PTHTweetbotRegexMediaParserItem : XXUnknownSuperclass {
	NSString* _expressionString;
	NSDictionary* _thumbnailFormats;
	NSString* _mediaFormat;
	NSRegularExpression* _expression;
	NSArray* _hosts;
	int _mediaType;
}
@property(readonly, assign, nonatomic) int mediaType;
@property(readonly, assign, nonatomic) NSArray* hosts;
-(void).cxx_destruct;
-(id)thumbnailURLForURL:(id)url withSize:(unsigned)size;
-(id)mediaURLForURL:(id)url;
-(id)_url:(id)url withFormat:(id)format;
-(BOOL)canParseURL:(id)url;
-(id)expression;
-(id)initWithDictionary:(id)dictionary;
@end
