/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView, PTHStaticSectionCell, PTHStaticSectionHeaderView, NSMutableSet, NSMutableArray, NSArray;

@interface PTHStaticSectionView : XXUnknownSuperclass {
	NSMutableArray* _cells;
	NSMutableSet* _hiddenCells;
	UIView* _contentView;
	UIView* _topSeparatorLine;
	NSMutableArray* _separatorLines;
	UIView* _bottomSeparatorLine;
	NSString* _colorGroupName;
	PTHStaticSectionHeaderView* _headerTitleView;
	NSMutableArray* _subviewConstraints;
	BOOL _hideTopSeparator;
	BOOL _hideBottomSeparator;
	UIView* _headerView;
	PTHStaticSectionCell* _selectedCell;
}
@property(retain, nonatomic) PTHStaticSectionCell* selectedCell;
@property(readonly, assign, nonatomic) NSArray* cells;
@property(assign, nonatomic) BOOL hideBottomSeparator;
@property(assign, nonatomic) BOOL hideTopSeparator;
@property(copy, nonatomic) NSString* headerTitle;
@property(retain, nonatomic) UIView* headerView;
@property(readonly, copy, nonatomic) NSString* colorGroupName;
+(void)initialize;
-(void).cxx_destruct;
-(void)setEnabled:(BOOL)enabled;
-(void)updateConstraints;
-(BOOL)isCellHidden:(id)hidden;
-(void)showCell:(id)cell;
-(void)hideCell:(id)cell;
-(void)addCell:(id)cell;
-(id)initWithColorGroupName:(id)colorGroupName;
-(id)_addSeparatorLine;
-(id)initWithFrame:(CGRect)frame;
@end
