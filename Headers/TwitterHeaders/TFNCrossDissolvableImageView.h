//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class CADisplayLink, NSArray, UIImage;

@interface TFNCrossDissolvableImageView : UIImageView
{
    CADisplayLink *_displayLink;
    float _startPercentComplete;
    float _endPercentComplete;
    double _startTimestamp;
    double _animationDuration;
    NSArray *_images;
    float _percentComplete;
    CDUnknownBlockType _completionBlock;
    UIImageView *_overlayView;
}

@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (void)_animateOverlayView;
- (void)_updateOverlayView;
@property(retain, nonatomic) UIImage *baseImage;
- (void)setPercentComplete:(float)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPercentComplete:(float)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (id)initWithImages:(id)arg1;

@end

