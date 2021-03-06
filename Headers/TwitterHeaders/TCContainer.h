//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCElement.h"

@class CAShapeLayer, NSArray, NSMutableArray, TCBorder, TCFill, TCVector4;

@interface TCContainer : TCElement
{
    NSMutableArray *_elements;
    BOOL _haveAbsoluteFills;
    CAShapeLayer *_shapeLayer;
    float _cornerRadius;
    TCBorder *_border;
    TCFill *_backgroundFill;
    int _layout;
    int _overflowMode;
    TCVector4 *_padding;
    int _visibleChildIndex;
    CDStruct_ffe6b7c1 _axisAlignments;
}

@property(nonatomic) int visibleChildIndex; // @synthesize visibleChildIndex=_visibleChildIndex;
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) TCVector4 *padding; // @synthesize padding=_padding;
@property(nonatomic) int overflowMode; // @synthesize overflowMode=_overflowMode;
@property(nonatomic) CDStruct_1ef3fb1f axisAlignments; // @synthesize axisAlignments=_axisAlignments;
@property(nonatomic) int layout; // @synthesize layout=_layout;
@property(retain, nonatomic) TCFill *backgroundFill; // @synthesize backgroundFill=_backgroundFill;
@property(retain, nonatomic) TCBorder *border; // @synthesize border=_border;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (int)_styledVisibleChildIndex;
- (float)_styledCornerRadius;
- (id)_styledPadding;
- (id)_styledBorder;
- (id)_styledBackgroundFill;
- (id)backstopValueForStyleProperty:(int)arg1;
- (int)redrawStyleMask;
- (int)sizingStyleMask;
- (id)accessibilityLabel;
- (void)visitTreeWithPruningBlock:(CDUnknownBlockType)arg1;
- (void)visitTreeWithBlock:(CDUnknownBlockType)arg1;
- (void)performLayout;
- (void)layoutAbsoluteElement:(id)arg1 layoutSize:(struct CGSize)arg2;
- (void)performLayoutGrid:(struct CGSize)arg1;
- (void)performLayoutLinear:(struct CGSize)arg1 axisPrimary:(int)arg2;
- (int)_alignmentInAxis:(int)arg1;
- (float)measureGrid:(int)arg1 layoutAxis:(int)arg2 constraint:(float)arg3;
- (float)measureInAxis:(int)arg1 withConstraint:(float)arg2;
- (float)measureLayoutFitLinear:(int)arg1 layoutAxis:(int)arg2 constraint:(float)arg3;
- (float)resolveConstrainedAxis:(id)arg1 axis:(int)arg2 layoutAxis:(int)arg3 primarySize:(float)arg4 secondarySize:(float)arg5;
- (float)resolveConstrainedWidth:(id)arg1 fillSize:(struct CGSize)arg2;
- (float)resolveConstrainedHeight:(id)arg1 fillSize:(struct CGSize)arg2;
- (struct CGRect)computeConstrainedBox:(struct CGSize)arg1 naturalSize:(struct CGSize)arg2;
- (float)clampElement:(id)arg1 axis:(int)arg2 measuredDimension:(float)arg3 fillDimension:(float)arg4;
- (float)clampMeasuredHeight:(id)arg1 measuredHeight:(float)arg2 fillSize:(struct CGSize)arg3;
- (float)clampMeasuredWidth:(id)arg1 measuredWidth:(float)arg2 fillSize:(struct CGSize)arg3;
- (id)_nonAbsoluteLayoutElements;
- (id)_absoluteLayoutElements;
- (id)_layoutElements;
- (int)axisConstraint;
- (void)insertTrickChildSublayer:(id)arg1;
- (id)backgroundSourceColorForChildElement:(id)arg1;
- (BOOL)shouldRasterize;
- (void)updateViewProperties;
- (void)updateViewWithVisible:(BOOL)arg1;
- (id)shadowPath;
- (BOOL)canUseShapeLayer;
- (BOOL)drawsContent;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)wantsUserInteraction;
- (void)appendElement:(id)arg1;
- (void)dispose;
- (id)initWithDocument:(id)arg1;

@end

