/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotCursorController.h"

@class PTHTweetbotStatus;

__attribute__((visibility("hidden")))
@interface PTHTweetbotStatusRetweetsController : PTHTweetbotCursorController {
	PTHTweetbotStatus* _status;
}
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)viewDidLoad;
-(unsigned)itemDisplayCount;
-(id)nothingFoundTitle;
-(id)itemsTitle;
-(id)itemTitle;
-(id)searchTitle;
-(Class)cellClass;
-(id)initWithStatus:(id)status;
@end

