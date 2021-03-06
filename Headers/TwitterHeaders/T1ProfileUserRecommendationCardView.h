//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "TFNTwitterFollowControlDelegate.h"

@class TFNTwitterFollowControl, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface T1ProfileUserRecommendationCardView : UICollectionViewCell <TFNTwitterFollowControlDelegate>
{
    BOOL _showAvatar;
    UIImageView *_bannerImageView;
    UIImageView *_avatarImageView;
    UILabel *_fullNameLabel;
    UILabel *_usernameLabel;
    UILabel *_bioLabel;
    TFNTwitterFollowControl *_followControl;
    unsigned int _badgeType;
    unsigned int _promotedContentType;
    UIView *_avatarBorderView;
    UIImageView *_badgeImageView;
    UIImageView *_promotedBadgeImageView;
    UILabel *_promotedContentLabel;
}

+ (float)heightForUser:(id)arg1 withWidth:(float)arg2 promotedContentType:(unsigned int)arg3;
@property(readonly, nonatomic) UILabel *promotedContentLabel; // @synthesize promotedContentLabel=_promotedContentLabel;
@property(readonly, nonatomic) UIImageView *promotedBadgeImageView; // @synthesize promotedBadgeImageView=_promotedBadgeImageView;
@property(readonly, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(readonly, nonatomic) UIView *avatarBorderView; // @synthesize avatarBorderView=_avatarBorderView;
@property(readonly, nonatomic) BOOL showAvatar; // @synthesize showAvatar=_showAvatar;
@property(nonatomic) unsigned int promotedContentType; // @synthesize promotedContentType=_promotedContentType;
@property(nonatomic) unsigned int badgeType; // @synthesize badgeType=_badgeType;
@property(readonly, nonatomic) TFNTwitterFollowControl *followControl; // @synthesize followControl=_followControl;
@property(readonly, nonatomic) UILabel *bioLabel; // @synthesize bioLabel=_bioLabel;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (void).cxx_destruct;
- (void)followControlNeedsLayout:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, nonatomic) float userNameOffsetX;
@property(readonly, nonatomic) float fullNameOffsetX;
- (id)initWithFrame:(struct CGRect)arg1 showAvatar:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

