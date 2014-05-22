/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotObject.h"

@class NSString, PTHTweetbotCursor;

@interface PTHTweetbotSuggestedCategory : PTHTweetbotObject {
	NSString* _name;
	NSString* _slug;
	int _size;
}
@property(readonly, assign, nonatomic) PTHTweetbotCursor* usersCursor;
@property(assign, nonatomic) int size;
@property(copy, nonatomic) NSString* slug;
@property(copy, nonatomic) NSString* name;
+(id)newWithAccount:(id)account dictionary:(id)dictionary;
-(void).cxx_destruct;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)updateFromDictionary:(id)dictionary;
@end

