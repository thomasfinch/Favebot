/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "PTHTweetbotLoadingTableViewController.h"

@class PTHTweetbotTrendPlace;

__attribute__((visibility("hidden")))
@interface PTHTweetbotTrendPlaceSelectController : PTHTweetbotLoadingTableViewController {
	PTHTweetbotTrendPlace* _trendPlace;
}
@property(retain, nonatomic) PTHTweetbotTrendPlace* trendPlace;
-(void).cxx_destruct;
-(void)viewWillAppear:(BOOL)view;
-(void)loadDataIfNeeded:(BOOL)needed;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_updateCurrent;
-(id)nothingFoundTitle;
-(void)configure:(id)configure forItem:(id)item;
-(id)initWithAccount:(id)account;
@end

