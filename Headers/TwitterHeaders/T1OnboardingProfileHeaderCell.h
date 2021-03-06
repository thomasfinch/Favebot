//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDrawingTableViewCell.h"

@class CAGradientLayer, T1OnboardingProfileHeaderBorderView, TFNCustomDrawing, TFNDrawingsHostView, TFNImageButtonDrawing, TFNImageDrawing, TFNTextDrawing, TFNTwitterUser, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface T1OnboardingProfileHeaderCell : TFNDrawingTableViewCell
{
    TFNDrawingsHostView *_hostView;
    T1OnboardingProfileHeaderBorderView *_borderView;
    UIImageView *_bannerView;
    CAGradientLayer *_bannerGradientLayer;
    TFNImageDrawing *_bannerIconDrawing;
    TFNImageButtonDrawing *_bannerButtonDrawing;
    TFNImageDrawing *_avatarDrawing;
    TFNImageButtonDrawing *_avatarButtonDrawing;
    TFNCustomDrawing *_avatarShadowDrawing;
    TFNTextDrawing *_fullNameDrawing;
    TFNTextDrawing *_usernameDrawing;
    UIView *_animationView;
    int _lastTargetingState;
    id <T1OnboardingProfileHeaderCellDelegate> _delegate;
    TFNTwitterUser *_user;
    UIImage *_avatarPreviewImage;
    UIImage *_bannerPreviewImage;
    int _targetingState;
}

+ (float)height;
+ (id)editImage;
@property(nonatomic) int targetingState; // @synthesize targetingState=_targetingState;
@property(retain, nonatomic) UIImage *bannerPreviewImage; // @synthesize bannerPreviewImage=_bannerPreviewImage;
@property(retain, nonatomic) UIImage *avatarPreviewImage; // @synthesize avatarPreviewImage=_avatarPreviewImage;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <T1OnboardingProfileHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (void)drawingViewLayoutSubviews:(struct CGRect)arg1;
- (void)drawingViewDrawRect:(struct CGRect)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)_bannerDidUpdate:(id)arg1;
- (void)_avatarDidUpdate:(id)arg1;
- (void)_bannerTapAction;
- (void)_avatarTapAction;
- (struct UIOffset)_iconOffsetForTargetingState:(int)arg1;
- (void)_updateDrawingsToTargetAvatar;
- (void)_updateDrawingsToTargetBanner;
- (void)_restoreDrawings;
- (void)_setUpAnimationViewForBorderLayer:(id)arg1;
- (void)_updateDrawings;

@end

