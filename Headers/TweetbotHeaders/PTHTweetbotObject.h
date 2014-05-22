/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class PTHTweetbotAccount, NSNumber, NSMutableDictionary;

@interface PTHTweetbotObject : XXUnknownSuperclass <NSCoding> {
	PTHTweetbotAccount* _account;
	long long _tid;
	BOOL _loaded;
	BOOL _dirty;
	NSMutableDictionary* _cache;
}
@property(assign, nonatomic, getter=isDirty) BOOL dirty;
@property(assign, nonatomic, getter=isLoaded) BOOL loaded;
@property(retain, nonatomic) NSMutableDictionary* cache;
@property(readonly, assign, nonatomic) NSNumber* tidValue;
@property(assign, nonatomic) long long tid;
@property(assign, nonatomic) __weak PTHTweetbotAccount* account;
+(id)newWithAccount:(id)account dictionary:(id)dictionary;
+(id)newWithAccount:(id)account tid:(long long)tid;
+(void)initialize;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)resetCache;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(int)compare:(id)compare;
-(BOOL)hasString:(id)string;
-(void)updateFromDictionary:(id)dictionary;
-(id)initWithAccount:(id)account tid:(long long)tid;
@end

