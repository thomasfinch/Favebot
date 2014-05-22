//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TFNAttributedTextView, UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface T1AmbientNotificationTitleView : UIView
{
    UIView *_leftSlidingTitleBackground;
    UIView *_rightSlidingTitleBackground;
    TFNAttributedTextView *_label;
    UIImageView *_imageView;
    struct CGRect _originalFrame;
    NSString *_message;
    UIImage *_icon;
    UIColor *_titleBackgroundColor;
}

+ (struct CGRect)defaultFrame;
+ (float)notificationTitleViewHeight;
- (void).cxx_destruct;
- (void)animateArrivalCompletion:(CDUnknownBlockType)arg1;
- (void)_removeAnimationsFromAnimatedLayers;
- (void)slideOut;
- (void)layoutSubviews;
- (void)setMessage:(id)arg1 icon:(id)arg2 backgroundColor:(id)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setMessage:(id)arg1 icon:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitleAlpha:(float)arg1;

@end

