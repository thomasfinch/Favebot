/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, PTHTweetbotObject;

__attribute__((visibility("hidden")))
@interface PTHTweetbotCell : XXUnknownSuperclass {
	UIViewController* _viewController;
	PTHTweetbotObject* _item;
	BOOL _disableReuse;
}
@property(assign, nonatomic) BOOL disableReuse;
@property(assign, nonatomic, getter=isMarked) BOOL marked;
@property(assign, nonatomic) __weak UIViewController* viewController;
@property(retain, nonatomic) PTHTweetbotObject* item;
+(float)selectedDrawerHeightforTableView:(id)view;
+(float)cellHeightWithItem:(id)item forTableView:(id)tableView;
-(void).cxx_destruct;
-(void)doubleTap;
-(id)reuseIdentifier;
-(long long)tid;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

