//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCFill.h"

@interface TCGradientFill : TCFill
{
    float _stops[8];
    float _colors[32];
    int _count;
    float _angle;
}

@property(nonatomic) float angle; // @synthesize angle=_angle;
- (void)fillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)isOpaque;
- (BOOL)isVisible;
- (void)addColor:(id)arg1 atStop:(float)arg2;

@end

