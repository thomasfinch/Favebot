//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class T1BlurrableImageView, T1BouncingTitleView, T1EventHeaderInfoView, UIButton, UIImage;

__attribute__((visibility("hidden")))
@interface T1EventContainerHeaderView : UIView
{
    id <T1EventContainerHeaderViewDelegate> _delegate;
    T1EventHeaderInfoView *_infoView;
    T1BlurrableImageView *_bannerImageView;
    T1BouncingTitleView *_titleView;
    UIImage *_bannerImage;
    UIButton *_backButton;
    UIButton *_composeTweetButton;
    UIView *_bannerImageContainer;
    float _expansionDelta;
    float _expansionStart;
    struct CGSize _preferredSize;
}

+ (unsigned int)_headerBlurLevelsOfDetail;
@property(nonatomic) float expansionStart; // @synthesize expansionStart=_expansionStart;
@property(nonatomic) float expansionDelta; // @synthesize expansionDelta=_expansionDelta;
@property(retain, nonatomic) UIView *bannerImageContainer; // @synthesize bannerImageContainer=_bannerImageContainer;
@property(retain, nonatomic) UIButton *composeTweetButton; // @synthesize composeTweetButton=_composeTweetButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain, nonatomic) T1BouncingTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) T1BlurrableImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) T1EventHeaderInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak id <T1EventContainerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_layoutTitleViewWithDelta:(float)arg1;
- (void)_didTapComposeNavigationButton:(id)arg1;
- (void)_didTapBackButton:(id)arg1;
- (void)_boundsDidUpdate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)recalculatePreferredSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

