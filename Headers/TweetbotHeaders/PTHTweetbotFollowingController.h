/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotCursorController.h"

@class PTHTweetbotUser;

__attribute__((visibility("hidden")))
@interface PTHTweetbotFollowingController : PTHTweetbotCursorController {
	PTHTweetbotUser* _tweetbotUser;
	BOOL _userSelectMode;
}
@property(assign) BOOL userSelectMode;
-(void).cxx_destruct;
-(id)modalCancelButtonTitle;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)nothingFoundTitle;
-(id)itemsTitle;
-(id)itemTitle;
-(id)searchTitle;
-(Class)cellClass;
-(void)viewDidLoad;
-(id)initWithTweetbotUser:(id)tweetbotUser;
@end

