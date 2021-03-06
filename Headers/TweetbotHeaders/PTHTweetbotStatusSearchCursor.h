/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotCursor.h"

@class NSString, CLCircularRegion;

@interface PTHTweetbotStatusSearchCursor : PTHTweetbotCursor {
	NSString* _query;
	NSString* _resultType;
	CLCircularRegion* _region;
}
@property(retain, nonatomic) CLCircularRegion* region;
@property(readonly, copy, nonatomic) NSString* resultType;
@property(readonly, copy, nonatomic) NSString* query;
+(Class)itemClass;
-(void).cxx_destruct;
-(id)itemsArrayFromResponse:(id)response;
-(id)requestURLString;
-(id)queryDictionary;
-(BOOL)usesTIDPagination;
-(BOOL)hasReadStatus;
-(id)uniqueID;
-(id)initWithAccount:(id)account query:(id)query resultType:(id)type;
@end

