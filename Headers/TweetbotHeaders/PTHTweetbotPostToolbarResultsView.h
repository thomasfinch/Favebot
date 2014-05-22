/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIScrollView, PTHTweetbotEntity, PTHTweetbotPostDraft, NSMutableArray, NSArray;
@protocol PTHTweetbotPostViewDelegate;

__attribute__((visibility("hidden")))
@interface PTHTweetbotPostToolbarResultsView : XXUnknownSuperclass <UIScrollViewDelegate> {
	NSArray* _loadedHashtags;
	UIScrollView* _scrollView;
	NSArray* _postToolbarItems;
	NSMutableArray* _visibleBlockViews;
	float _visibleBlockPosition;
	NSMutableArray* _queuedViews;
	PTHTweetbotPostDraft* _draft;
	PTHTweetbotEntity* _selectedEntity;
	id<PTHTweetbotPostViewDelegate> _delegate;
	NSArray* _results;
}
@property(copy, nonatomic) NSArray* results;
@property(assign, nonatomic) __weak id<PTHTweetbotPostViewDelegate> delegate;
@property(retain, nonatomic) PTHTweetbotEntity* selectedEntity;
@property(retain, nonatomic) PTHTweetbotPostDraft* draft;
-(void).cxx_destruct;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_selectedCell:(id)cell;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)_updateVisibleViews;
-(id)_createCellForToolbarItem:(id)toolbarItem;
-(id)initWithFrame:(CGRect)frame;
@end

