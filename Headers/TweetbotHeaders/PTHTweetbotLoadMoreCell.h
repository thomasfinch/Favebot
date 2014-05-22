/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotCell.h"

@class UIImageView, UIView, PTHHitInsetButton;

__attribute__((visibility("hidden")))
@interface PTHTweetbotLoadMoreCell : PTHTweetbotCell {
	UIView* _containerView;
	PTHHitInsetButton* _loadButton;
	UIImageView* _spinnerView;
	UIView* _leftOverlayView;
	UIView* _rightOverlayView;
	UIImageView* _middleOverlayView;
	BOOL _loading;
	BOOL _gap;
}
@property(assign, nonatomic, getter=isGap) BOOL gap;
@property(readonly, assign, nonatomic) PTHHitInsetButton* loadButton;
@property(assign, nonatomic, getter=isLoading) BOOL loading;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
