/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

@interface PTHTweetbotRateLimit : XXUnknownSuperclass {
	unsigned _limit;
	unsigned _remaining;
	NSString* _key;
	NSDate* _resetDate;
}
@property(retain, nonatomic) NSDate* resetDate;
@property(readonly, assign, nonatomic) BOOL isLow;
@property(readonly, assign, nonatomic) BOOL isCurrent;
@property(copy, nonatomic) NSString* key;
@property(readonly, assign, nonatomic) unsigned resetMinutes;
@property(assign, nonatomic) unsigned remaining;
@property(assign, nonatomic) unsigned limit;
+(id)keyForPath:(id)path;
+(id)newWithURLResponse:(id)urlresponse;
-(void).cxx_destruct;
-(id)description;
@end

