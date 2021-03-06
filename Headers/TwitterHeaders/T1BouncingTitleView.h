//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface T1BouncingTitleView : UIView
{
    BOOL _shouldBounce;
    NSString *_title;
    NSString *_subtitle;
    float _upperClipOffset;
    float _lowerClipOffset;
    float _fullNameAlpha;
    UIView *_maskView;
    UILabel *_collapsedTitleLabel;
    UILabel *_collapsedSubtitleLabel;
}

+ (struct UIEdgeInsets)defaultContentEdgeInsets;
@property(retain, nonatomic) UILabel *collapsedSubtitleLabel; // @synthesize collapsedSubtitleLabel=_collapsedSubtitleLabel;
@property(retain, nonatomic) UILabel *collapsedTitleLabel; // @synthesize collapsedTitleLabel=_collapsedTitleLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) float fullNameAlpha; // @synthesize fullNameAlpha=_fullNameAlpha;
@property(nonatomic) float lowerClipOffset; // @synthesize lowerClipOffset=_lowerClipOffset;
@property(nonatomic) float upperClipOffset; // @synthesize upperClipOffset=_upperClipOffset;
@property(nonatomic) BOOL shouldBounce; // @synthesize shouldBounce=_shouldBounce;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_update;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

