/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotCell.h"

@class UILabel, PTHTweetbotPlace, PTHHitInsetButton;

__attribute__((visibility("hidden")))
@interface PTHTweetbotGeoCell : PTHTweetbotCell {
	UILabel* _nameLabel;
	UILabel* _addressLabel;
	PTHHitInsetButton* _locationButton;
}
@property(readonly, assign, nonatomic) PTHTweetbotPlace* place;
+(float)cellHeightWithItem:(id)item forTableView:(id)tableView;
+(void)initialize;
-(void).cxx_destruct;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)colorThemeDidChange;
-(void)showPlace:(id)place;
-(void)selectPlace;
-(void)setItem:(id)item;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
