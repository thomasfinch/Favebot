/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"

@class UIView, UIImage, CAKeyframeAnimation;

__attribute__((visibility("hidden")))
@interface PTHTweetbotMediaImageView : XXUnknownSuperclass <UIScrollViewDelegate> {
	CAKeyframeAnimation* _animation;
	UIImage* _image;
	BOOL _disableLayout;
	UIView* _zoomContentView;
	UIView* _shadowView;
}
@property(assign, nonatomic) BOOL disableLayout;
@property(readonly, assign, nonatomic) float fitZoomScale;
@property(readonly, assign, nonatomic) UIView* shadowView;
@property(readonly, assign, nonatomic) UIView* zoomContentView;
@property(retain, nonatomic) UIImage* image;
-(void).cxx_destruct;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)toggleZoom;
-(void)stopAnimation;
-(void)startAnimation;
-(id)initWithImage:(id)image animation:(id)animation;
-(id)initWithFrame:(CGRect)frame;
@end

