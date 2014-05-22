/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class PTHTweetbotAccount, PTHTweetbotUser, NSDate, NSString, NSRegularExpression, NSDictionary;

@interface PTHTweetbotStatusFilter : XXUnknownSuperclass <NSCoding> {
	long long _userTID;
	NSString* _userScreenName;
	NSRegularExpression* _keywordRegularExpression;
	BOOL _muteMentions;
	BOOL _keywordIsRegularExpression;
	PTHTweetbotAccount* _account;
	NSDate* _expirationDate;
	NSString* _keywordString;
	NSString* _hashtagString;
	NSString* _sourceText;
	NSDictionary* _unknownFilterDictionary;
}
@property(readonly, assign, nonatomic) NSDictionary* unknownFilterDictionary;
@property(assign, nonatomic) long long userTID;
@property(readonly, assign, nonatomic) NSString* expirationDateString;
@property(readonly, assign, nonatomic) NSString* displayString;
@property(copy, nonatomic) NSString* sourceText;
@property(copy, nonatomic) NSString* hashtagString;
@property(assign, nonatomic) BOOL keywordIsRegularExpression;
@property(copy, nonatomic) NSString* keywordString;
@property(assign, nonatomic) __weak PTHTweetbotUser* user;
@property(readonly, assign, nonatomic, getter=isKeywordFilter) BOOL keywordFilter;
@property(readonly, assign, nonatomic, getter=isSourceFilter) BOOL sourceFilter;
@property(readonly, assign, nonatomic, getter=isHashtagFilter) BOOL hashtagFilter;
@property(readonly, assign, nonatomic, getter=isUserFilter) BOOL userFilter;
@property(assign, nonatomic, getter=shouldMuteMentions) BOOL muteMentions;
@property(retain, nonatomic) NSDate* expirationDate;
@property(readonly, assign, nonatomic) BOOL isValid;
@property(assign, nonatomic) __weak PTHTweetbotAccount* account;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isSimilar:(id)similar;
-(id)urlValue;
-(void)updateFromURL:(id)url;
-(BOOL)shouldFilterStatus:(id)status;
-(id)initWithAccount:(id)account;
@end

