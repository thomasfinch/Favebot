//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverBackgroundView.h"

@class UIImageView;

@interface _PTHPopoverBackgroundView : UIPopoverBackgroundView
{
    UIImageView *_side1PartialView;
    float _side1MinSize;
    UIImageView *_side2PartialView;
    float _side2MinSize;
    UIImageView *_centerView;
    UIImageView *_side1FullView;
    UIImageView *_side2FullView;
    UIImageView *_overlayFrameView;
    unsigned int _arrowDirection;
    float _arrowOffset;
}

+ (struct UIEdgeInsets)contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;
@property(nonatomic) float arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) unsigned int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
