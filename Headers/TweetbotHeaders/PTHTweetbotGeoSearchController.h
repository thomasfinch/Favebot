/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "PTHViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class PTHLocationManager, UIView, PTHTweetbotPlace, CLLocation, NSMutableArray, UITableView, PTHTweetbotAccount;

__attribute__((visibility("hidden")))
@interface PTHTweetbotGeoSearchController : PTHViewController <UITableViewDelegate, UITableViewDataSource> {
	PTHTweetbotAccount* _account;
	UITableView* _tableView;
	BOOL _firstTime;
	PTHLocationManager* _locationManager;
	NSMutableArray* _pois;
	UIView* _poisHeader;
	NSMutableArray* _places;
	UIView* _placesHeader;
	unsigned _state;
	CLLocation* _location;
	PTHTweetbotPlace* _place;
}
@property(retain, nonatomic) PTHTweetbotPlace* place;
@property(retain, nonatomic) CLLocation* location;
@property(assign, nonatomic) unsigned state;
-(void).cxx_destruct;
-(void)dealloc;
-(void)ok:(id)ok;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)reloadData;
-(id)initWithAccount:(id)account;
@end

