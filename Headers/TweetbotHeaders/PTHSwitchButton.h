/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, UIView, NSString, UIImage;

@interface PTHSwitchButton : XXUnknownSuperclass {
	BOOL _on;
	BOOL _wasOn;
	BOOL _hitKnob;
	CGPoint _touchPoint;
	BOOL _didMove;
	UIImageView* _wellImageView;
	UIView* _wellClipView;
	UIImageView* _overlayImageView;
	UIView* _highlightOverlayView;
	UILabel* _onLabel;
	UILabel* _offLabel;
	UIImageView* _onImageView;
	UIImageView* _offImageView;
	float _knobWidth;
	CGPoint _wellOffset;
	UIImageView* _backgroundImageView;
	UIImageView* _knobImageView;
}
@property(assign, nonatomic, getter=isOn) BOOL on;
@property(copy, nonatomic) UIImage* offSelectedImage;
@property(copy, nonatomic) UIImage* onSelectedImage;
@property(copy, nonatomic) UIImage* offImage;
@property(copy, nonatomic) UIImage* onImage;
@property(readonly, assign, nonatomic) UILabel* offLabel;
@property(readonly, assign, nonatomic) UILabel* onLabel;
@property(copy, nonatomic) NSString* offTitle;
@property(copy, nonatomic) NSString* onTitle;
+(id)newToolbarSwitch;
+(id)newAlternateSwitch;
+(id)newOnOffSwitch;
-(void).cxx_destruct;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)setOn:(BOOL)on animated:(BOOL)animated;
-(void)_setOn:(BOOL)on animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted;
-(void)cancelTrackingWithEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)setEnabled:(BOOL)enabled;
-(void)sendValueDidChange;
-(BOOL)_currentIsOn;
-(void)_updateFrame;
-(id)initWithBackgroundImage:(id)backgroundImage knobImage:(id)image;
-(id)initWithWellImage:(id)wellImage overlayImage:(id)image;
@end

