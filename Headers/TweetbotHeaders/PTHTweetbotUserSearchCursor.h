/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotCursor.h"

@class NSString;

@interface PTHTweetbotUserSearchCursor : PTHTweetbotCursor {
	NSString* _query;
}
@property(readonly, copy, nonatomic) NSString* query;
+(Class)itemClass;
-(void).cxx_destruct;
-(id)queryDictionary;
-(BOOL)needsSort;
-(id)requestURLString;
-(id)uniqueID;
-(id)initWithAccount:(id)account query:(id)query;
@end
