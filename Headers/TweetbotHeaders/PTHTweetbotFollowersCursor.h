/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotUserCursor.h"


@interface PTHTweetbotFollowersCursor : PTHTweetbotUserCursor {
}
+(Class)itemClass;
-(void)processItems:(id)items block:(id)block;
-(id)itemsArrayFromResponse:(id)response;
-(id)newItemWithDictionary:(id)dictionary;
-(id)queryDictionary;
-(id)requestURLString;
-(BOOL)needsSort;
-(BOOL)usesCursorPagination;
@end

