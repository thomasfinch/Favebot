/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "Tweetbot-Structs.h"

@class PTHTweetbotAccount, PTHTweetbotUser, NSString, NSMutableDictionary, NSURL, PTHTweetbotStatus;

@interface PTHTweetbotEntity : XXUnknownSuperclass <NSCoding> {
	BOOL _checkedForMedia;
	BOOL _isMediaURL;
	BOOL _mediaRequiresAuth;
	BOOL _parsed;
	PTHTweetbotAccount* _account;
	int _type;
	NSURL* _url;
	NSURL* _expandedURL;
	NSString* _displayURLString;
	int _mediaType;
	NSString* _hashtagString;
	NSString* _symbolString;
	NSString* _userScreenName;
	PTHTweetbotStatus* _status;
	NSURL* _mediaURL;
	NSMutableDictionary* _thumbnailURLs;
	Class _mediaParserClass;
	NSRange _range;
	long long _userTID;
}
@property(assign, nonatomic, getter=isParsed) BOOL parsed;
@property(assign, nonatomic) __weak Class mediaParserClass;
@property(retain, nonatomic) NSMutableDictionary* thumbnailURLs;
@property(retain, nonatomic) NSURL* mediaURL;
@property(assign, nonatomic) __weak PTHTweetbotStatus* status;
@property(readonly, assign, nonatomic) PTHTweetbotUser* user;
@property(assign, nonatomic) long long userTID;
@property(retain, nonatomic) NSString* userScreenName;
@property(copy, nonatomic) NSString* symbolString;
@property(copy, nonatomic) NSString* hashtagString;
@property(assign, nonatomic) BOOL mediaRequiresAuth;
@property(assign, nonatomic) int mediaType;
@property(assign, nonatomic) BOOL isMediaURL;
@property(retain, nonatomic) NSString* displayURLString;
@property(retain, nonatomic) NSURL* expandedURL;
@property(retain, nonatomic) NSURL* url;
@property(assign, nonatomic) NSRange range;
@property(assign, nonatomic) int type;
@property(assign, nonatomic) __weak PTHTweetbotAccount* account;
+(id)newAttributedStringFromString:(id)string entities:(id)entities;
+(id)newEditingEntitiesFromString:(id)string account:(id)account;
+(id)newEntitiesFromString:(id)string andDictionary:(id)dictionary account:(id)account;
+(id)URLWithString:(id)string;
+(void)initialize;
+(void)loadConfiguration;
+(id)cachedHashtagsForAccount:(id)account;
+(void)cacheHashtagsFromEntities:(id)entities;
-(void).cxx_destruct;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isEqual:(id)equal;
-(void)loadThumbnailURLWithSize:(unsigned)size completion:(id)completion;
-(void)loadMediaURL:(id)url;
-(void)_checkForMedia;
-(id)initWithAccount:(id)account type:(int)type dictionary:(id)dictionary;
-(id)initWithAccount:(id)account type:(int)type;
@end

