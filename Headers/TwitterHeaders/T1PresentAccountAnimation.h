//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAKeyframeAnimation.h"

__attribute__((visibility("hidden")))
@interface T1PresentAccountAnimation : CAKeyframeAnimation
{
    BOOL _staggers;
    float _base;
    unsigned int _type;
    float _distance;
}

+ (float)compressDistance;
+ (double)compressDuration;
+ (double)bounceDuration;
+ (id)animationWithType:(unsigned int)arg1 distance:(float)arg2;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) BOOL staggers; // @synthesize staggers=_staggers;
@property(nonatomic) float base; // @synthesize base=_base;
- (void)setDuration:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_slideValuesForDuration:(double)arg1 direction:(unsigned int)arg2;
- (id)_presentKeyTimesForDuration:(double)arg1 direction:(unsigned int)arg2;
- (id)_presentValuesForDuration:(double)arg1 direction:(unsigned int)arg2;

@end

