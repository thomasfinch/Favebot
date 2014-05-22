/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"
#import "PTHBlurBackgroundTransitioningController.h"

@class NSString, PTHTweetbotMediaImageView, UIImageView, UIView, UIDynamicAnimator, PTHBlurBackgroundTransitioningDelegate, UIAttachmentBehavior, PTHTweetbotMediaLoader;

__attribute__((visibility("hidden")))
@interface PTHTweetbotMediaLoaderController : XXUnknownSuperclass <UIGestureRecognizerDelegate, PTHBlurBackgroundTransitioningController> {
	UIView* _containerView;
	PTHTweetbotMediaLoader* _mediaLoader;
	UIImageView* _backgroundView;
	PTHTweetbotMediaImageView* _imageView;
	NSString* _oldAudioSessionCategory;
	PTHBlurBackgroundTransitioningDelegate* _transitioningDelegate;
	CGPoint _panStartPoint;
	BOOL _flicking;
	UIDynamicAnimator* _flickAnimator;
	UIAttachmentBehavior* _flickAttachmentBehavior;
	BOOL _shouldCrop;
	UIView* _launchView;
	float _maxScale;
	UIView* _contentView;
	CGRect _launchRect;
}
@property(retain, nonatomic) UIView* contentView;
@property(assign, nonatomic) float maxScale;
@property(assign, nonatomic) BOOL shouldCrop;
@property(retain, nonatomic) UIView* launchView;
@property(assign, nonatomic) CGRect launchRect;
-(void).cxx_destruct;
-(void)dealloc;
-(int)preferredInterfaceOrientationForPresentation;
-(BOOL)prefersStatusBarHidden;
-(BOOL)doubleSwipeDisabled;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)dismissTransition:(id)transition;
-(void)presentTransition:(id)transition;
-(void)_moveToLaunchPosition;
-(id)animationView;
-(void)cancel;
-(void)showImageOptions:(id)options;
-(void)didTap;
-(void)_pan:(id)pan;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)loadView;
-(id)initWithMediaLoader:(id)mediaLoader;
@end
