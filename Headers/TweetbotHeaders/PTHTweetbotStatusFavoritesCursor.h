/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotStatusCursor.h"


@interface PTHTweetbotStatusFavoritesCursor : PTHTweetbotStatusCursor {
}
+(Class)itemClass;
-(void)processItems:(id)items block:(id)block;
-(id)queryDictionary;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)response;
-(BOOL)hasReadStatus;
@end

