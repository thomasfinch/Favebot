//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, PTHGradientView, UIImageView, UILabel;

@interface PTHToolbar : UIView
{
    PTHGradientView *_backgroundView;
    UILabel *_titleLabel;
    UIImageView *_titleBackground;
    NSMutableArray *_leftViews;
    NSMutableArray *_rightViews;
    BOOL _visible;
    NSArray *_leftItems;
    NSArray *_rightItems;
}

@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(copy, nonatomic) NSArray *rightItems; // @synthesize rightItems=_rightItems;
@property(copy, nonatomic) NSArray *leftItems; // @synthesize leftItems=_leftItems;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (float)heightForOrientation:(int)arg1;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

