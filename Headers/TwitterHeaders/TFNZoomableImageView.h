//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class UIImage, UIImageView, UIScrollView;

@interface TFNZoomableImageView : UIView <UIScrollViewDelegate>
{
    float _fillZoomScale;
    float _previousZoomScale;
    BOOL _pinchMayCloseView;
    struct CGSize _detailSize;
    BOOL _filling;
    BOOL _minning;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIImageView *_imageView;
    struct CGSize _lastLayoutSize;
    UIImage *_image;
    id <TFNZoomableImageViewZoomDelegate> _zoomDelegate;
    int _displaySize;
    int _zoomType;
    float _toggleZoomScale;
    float _minimumZoomScale;
    float _maximumZoomScale;
}

@property(nonatomic) float maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(readonly, nonatomic) float minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) float toggleZoomScale; // @synthesize toggleZoomScale=_toggleZoomScale;
@property(nonatomic) int zoomType; // @synthesize zoomType=_zoomType;
@property(nonatomic) int displaySize; // @synthesize displaySize=_displaySize;
@property(nonatomic) __weak id <TFNZoomableImageViewZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;
- (void).cxx_destruct;
- (void)_recenterScrollView;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGPoint)_contentFrameOrigin;
- (void)_recordMinningState;
- (void)_updateZoomScaleAnimated:(BOOL)arg1;
- (void)_updateZoomRange;
- (struct CGSize)_imageSize;
- (void)layoutSubviews;
- (void)toggleZoomAtPoint:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
@property(nonatomic) float zoomScale;
- (struct CGRect)imageFrame;
- (void)replaceImageWithDetail:(id)arg1;
- (void)setImage:(id)arg1 withDetailImageSize:(struct CGSize)arg2;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
