//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class T1FiltersCropAndRotateGuideView, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;

__attribute__((visibility("hidden")))
@interface T1FiltersCropAndRotateContentView : UIView <UIGestureRecognizerDelegate>
{
    T1FiltersCropAndRotateGuideView *_guideView;
    UIImageView *_imageView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotateGestureRecognizer;
    struct CGPoint _panBase;
    float _scaleBase;
    float _rotateBase;
    BOOL _rotating;
    struct CGAffineTransform _invertedTransformCache;
    struct CGAffineTransform _cachedTransform;
    struct CGSize _cropReferenceSize;
    struct UIEdgeInsets _contentInset;
    struct CGRect _cropRect;
    struct CGRect _imageViewRect;
    struct CGAffineTransform _imageViewTransform;
}

@property(readonly, nonatomic) struct CGAffineTransform imageViewTransform; // @synthesize imageViewTransform=_imageViewTransform;
@property(readonly, nonatomic) struct CGRect imageViewRect; // @synthesize imageViewRect=_imageViewRect;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGSize cropReferenceSize; // @synthesize cropReferenceSize=_cropReferenceSize;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (struct CGAffineTransform)_invertTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)_rectContainsCropRectForTransform:(struct CGAffineTransform)arg1;
- (struct CGPoint)_centerOfCropRectForTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_rotateTransform:(struct CGAffineTransform)arg1 screenCenterRotation:(float)arg2;
- (struct CGAffineTransform)_scaleTransform:(struct CGAffineTransform)arg1 screenCenterScale:(float)arg2;
- (struct CGAffineTransform)_scaleTransformToFit:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)_moveTransformToFit:(struct CGAffineTransform)arg1;
- (struct CGPoint)_limitTranslationDelta:(struct CGPoint)arg1 toFitTransform:(struct CGAffineTransform)arg2;
- (void)_handleRotate:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handlePan:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_fitImageTranform;
- (struct CGRect)_cropRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_imageViewRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageViewTransform:(struct CGAffineTransform)arg1;
- (void)_animateImageTransformToTransform:(struct CGAffineTransform)arg1;
- (float)_nextRightAngleDeltaFromTransform:(struct CGAffineTransform)arg1;
- (void)rotateImageViewToNextRightAngle;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end

