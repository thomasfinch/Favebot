/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class CLLocation, NSArray;

@interface PTHTweetbotBoundingBox : XXUnknownSuperclass <NSCoding> {
	int _type;
	NSArray* _locations;
}
@property(readonly, assign, nonatomic) CLLocation* location;
@property(readonly, assign, nonatomic) XXStruct_SRdqoD coordinateRegion;
@property(retain, nonatomic) NSArray* locations;
@property(assign, nonatomic) int type;
+(id)newBoundingBoxFromDictionary:(id)dictionary;
-(void).cxx_destruct;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)containsLocation:(id)location;
-(id)initWithLocation:(id)location;
-(id)initWithType:(int)type dictionary:(id)dictionary;
@end

