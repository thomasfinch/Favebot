/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotCursorController.h"
#import "Tweetbot-Structs.h"


__attribute__((visibility("hidden")))
@interface PTHTweetbotUserSearchController : PTHTweetbotCursorController {
	BOOL _userSelectMode;
}
@property(assign) BOOL userSelectMode;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)nothingFoundTitle;
-(id)itemsTitle;
-(id)itemTitle;
-(id)searchTitle;
-(Class)cellClass;
-(void)viewDidLoad;
-(id)initWithAccount:(id)account query:(id)query;
@end
