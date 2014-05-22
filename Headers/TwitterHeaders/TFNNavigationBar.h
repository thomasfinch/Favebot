//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

@class CALayer, UIColor, UIImage, UIImageView;

@interface TFNNavigationBar : UINavigationBar
{
    CALayer *_overlayLayer;
    UIImageView *_customShadowImageView;
    BOOL _boundsChangesDisabled;
    int _backgroundImageIsTranslucent;
    int _matchingStatusBarStyle;
    UIImage *_customShadowImage;
}

@property(nonatomic) BOOL boundsChangesDisabled; // @synthesize boundsChangesDisabled=_boundsChangesDisabled;
@property(retain, nonatomic) UIImage *customShadowImage; // @synthesize customShadowImage=_customShadowImage;
@property(nonatomic) int matchingStatusBarStyle; // @synthesize matchingStatusBarStyle=_matchingStatusBarStyle;
@property(nonatomic) int backgroundImageIsTranslucent; // @synthesize backgroundImageIsTranslucent=_backgroundImageIsTranslucent;
- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)isTranslucent;
- (BOOL)_setViewWithFrame:(struct CGRect)arg1 hidden:(BOOL)arg2 withinView:(id)arg3;
- (struct CGRect)_customShadowImageFrame;
@property(retain, nonatomic) UIColor *overlayTintColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end
