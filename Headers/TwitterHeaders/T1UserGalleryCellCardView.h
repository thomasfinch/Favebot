//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNPagedGalleryCellView.h"

@class T1AvatarImageView, TFNTwitterFollowControl, TFNTwitterUser, TFNTwitterUserRecommendation, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1UserGalleryCellCardView : TFNPagedGalleryCellView
{
    id _userRepresentation;
    CDUnknownBlockType _avatarTapBlock;
    CDUnknownBlockType _avatarLongPressBlock;
    CDUnknownBlockType _followRequestResponseBlock;
    TFNTwitterUserRecommendation *_userRecommendation;
    TFNTwitterUser *_user;
    UIButton *_buttonUnderlay;
    T1AvatarImageView *_avatarView;
    TFNTwitterFollowControl *_followControl;
    UILabel *_fullNameLabel;
    UILabel *_usernameLabel;
    UIImageView *_verifiedBadgeImageView;
    UILabel *_bioTextLabel;
    UIImageView *_socialBadgeImageView;
    UILabel *_socialTextLabel;
    UIImageView *_promotedBadgeLabel;
    UILabel *_promotedTextLabel;
}

+ (float)heightForUserRepresentation:(id)arg1 tableWidth:(float)arg2;
+ (float)standardizedHeightForWidth:(float)arg1;
+ (id)_socialTextFont;
+ (id)_promotedFont;
+ (id)_bioFont;
+ (id)_usernameFont;
+ (id)_nameFont;
@property(retain, nonatomic) UILabel *promotedTextLabel; // @synthesize promotedTextLabel=_promotedTextLabel;
@property(retain, nonatomic) UIImageView *promotedBadgeLabel; // @synthesize promotedBadgeLabel=_promotedBadgeLabel;
@property(retain, nonatomic) UILabel *socialTextLabel; // @synthesize socialTextLabel=_socialTextLabel;
@property(retain, nonatomic) UIImageView *socialBadgeImageView; // @synthesize socialBadgeImageView=_socialBadgeImageView;
@property(retain, nonatomic) UILabel *bioTextLabel; // @synthesize bioTextLabel=_bioTextLabel;
@property(retain, nonatomic) UIImageView *verifiedBadgeImageView; // @synthesize verifiedBadgeImageView=_verifiedBadgeImageView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(retain, nonatomic) TFNTwitterFollowControl *followControl; // @synthesize followControl=_followControl;
@property(retain, nonatomic) T1AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIButton *buttonUnderlay; // @synthesize buttonUnderlay=_buttonUnderlay;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterUserRecommendation *userRecommendation; // @synthesize userRecommendation=_userRecommendation;
@property(copy, nonatomic) CDUnknownBlockType followRequestResponseBlock; // @synthesize followRequestResponseBlock=_followRequestResponseBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarLongPressBlock; // @synthesize avatarLongPressBlock=_avatarLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarTapBlock; // @synthesize avatarTapBlock=_avatarTapBlock;
@property(retain, nonatomic) id userRepresentation; // @synthesize userRepresentation=_userRepresentation;
- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (int)accessibilityElementCount;
- (void)cleanup;
- (void)willDisplay;
- (void)_followRequestResponseAction:(BOOL)arg1 error:(id)arg2;
- (void)_buttonUnderlayLongPressAction;
- (void)_buttonUnderlayTapAction;
- (void)_avatarLongPressAction;
- (void)_avatarTapAction;
- (void)layoutSubviews;
- (BOOL)isHighlighted;
- (void)_userDidUpdateProfileImage:(id)arg1;
- (void)_update;
- (void)setParentCell:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

