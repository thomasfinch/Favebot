/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotListCursor.h"


@interface PTHTweetbotListMembersCursor : PTHTweetbotListCursor {
}
+(Class)itemClass;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)response;
-(BOOL)needsSort;
-(BOOL)usesCursorPagination;
@end
