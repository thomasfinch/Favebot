/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

// #import "PTHTweetbotCursorController.h"
// #import "Tweetbot-Structs.h"

@class PTHTweetbotStatus;

__attribute__((visibility("hidden")))
@interface PTHTweetbotStatusFavoritesController : NSObject {
	PTHTweetbotStatus* _status;
}
// -(void).cxx_destruct;
-(void)viewWillAppear:(BOOL)view;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(unsigned)itemDisplayCount;
-(id)nothingFoundTitle;
-(id)itemsTitle;
-(id)itemTitle;
-(void)setItems:(id)items;
-(void)_update;
-(id)searchTitle;
-(Class)cellClass;
-(id)initWithStatus:(id)status;
@end

