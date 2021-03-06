//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNRailContentView.h"

@class T1AvatarImageView, TFNTwitterUser, TFNTwitterUserRecommendation, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1UserRailContentView : TFNRailContentView
{
    id _userRepresentation;
    CDUnknownBlockType _avatarTapBlock;
    CDUnknownBlockType _avatarLongPressBlock;
    TFNTwitterUserRecommendation *_userRecommendation;
    TFNTwitterUser *_user;
    T1AvatarImageView *_avatarView;
    UILabel *_fullName;
    UIImageView *_verifiedBadge;
    UILabel *_socialText;
}

+ (struct CGSize)contentSize;
+ (id)_socialTextFont;
+ (id)_nameFont;
@property(retain, nonatomic) UILabel *socialText; // @synthesize socialText=_socialText;
@property(retain, nonatomic) UIImageView *verifiedBadge; // @synthesize verifiedBadge=_verifiedBadge;
@property(retain, nonatomic) UILabel *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) T1AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TFNTwitterUserRecommendation *userRecommendation; // @synthesize userRecommendation=_userRecommendation;
@property(copy, nonatomic) CDUnknownBlockType avatarLongPressBlock; // @synthesize avatarLongPressBlock=_avatarLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarTapBlock; // @synthesize avatarTapBlock=_avatarTapBlock;
@property(retain, nonatomic) id userRepresentation; // @synthesize userRepresentation=_userRepresentation;
- (void).cxx_destruct;
- (void)_avatarLongPressAction;
- (void)_avatarTapAction;
- (void)cleanup;
- (void)_profileHeaderImageDidUpdate:(id)arg1;
- (void)willDisplay;
- (void)_layoutDrawings;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_update;
- (id)initWithRailView:(id)arg1;

@end

