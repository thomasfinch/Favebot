//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class ALAsset, TFNBadgeView, UIView;

__attribute__((visibility("hidden")))
@interface T1ComposePhotoGalleryImageView : UIImageView
{
    UIView *_highlightView;
    UIImageView *_gifIconView;
    TFNBadgeView *_badgeView;
    UIImageView *_zeroBadgeView;
    BOOL _animateNextUpdate;
    BOOL _highlight;
    BOOL _enabled;
    BOOL _isAnimated;
    BOOL _badged;
    ALAsset *_asset;
    unsigned int _buttonType;
    id <T1ComposePhotoGalleryImageViewDelegate> _delegate;
    int _badgeIndex;
}

@property(nonatomic) int badgeIndex; // @synthesize badgeIndex=_badgeIndex;
@property(nonatomic, getter=isBadged) BOOL badged; // @synthesize badged=_badged;
@property(nonatomic) BOOL isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL highlight; // @synthesize highlight=_highlight;
@property(nonatomic) __weak id <T1ComposePhotoGalleryImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (struct CGRect)_badgeFrame;
- (BOOL)_badgeHitTest:(struct CGPoint)arg1;
- (void)_animateBadge:(id)arg1 hidden:(BOOL)arg2;
- (void)_updateBadge;
- (void)_updateBorder;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

