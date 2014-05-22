//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCElement.h"

@class CAShapeLayer, TCBorder, TCFill;

@interface TCBox : TCElement
{
    CAShapeLayer *_shapeLayer;
    BOOL _hasValidBackground;
    TCFill *_backgroundFill;
    TCBorder *_border;
    float _cornerRadius;
}

@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) TCBorder *border; // @synthesize border=_border;
@property(retain, nonatomic) TCFill *backgroundFill; // @synthesize backgroundFill=_backgroundFill;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (float)_styledCornerRadius;
- (id)_styledBorder;
- (id)_styledBackgroundFill;
- (int)redrawStyleMask;
- (id)backstopValueForStyleProperty:(int)arg1;
- (void)drawRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)isOpaque;
- (BOOL)drawsContent;
- (id)shadowPath;
- (BOOL)canUseShapeLayer;
- (void)updateViewProperties;
- (void)updateViewAndLayerProperties;
- (BOOL)_needBackgroundSource;

@end
