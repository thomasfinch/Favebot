//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class NSString, T1LegacyProfileViewController, TFNAttributedStringItem, TFNTwitterAccount, TFNTwitterEntitySet, TFNTwitterEntityURL, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface T1ProfileHeaderCell : TFNTableViewCell
{
    BOOL _isUserViewingOwnProfile;
    TFNTwitterAccount *account;
    TFNTwitterAccount *viewingAccount;
    T1LegacyProfileViewController *sourceViewController;
    CDUnknownBlockType avatarButtonBlock;
    CDUnknownBlockType avatarLongPressBlock;
    UIImage *bannerImage;
    UIImageView *headerImageView;
    CDUnknownBlockType _verifiedButtonBlock;
}

+ (id)urlFont;
+ (id)locationFont;
+ (id)followsYouFont;
+ (id)bioFont;
+ (id)usernameFont;
+ (id)fullNameFont;
+ (float)parallaxBackgroundAmplitude;
+ (float)parallaxForegroundAmplitude;
+ (double)headerImageFadeDuration;
@property(copy, nonatomic) CDUnknownBlockType verifiedButtonBlock; // @synthesize verifiedButtonBlock=_verifiedButtonBlock;
@property(nonatomic) BOOL isUserViewingOwnProfile; // @synthesize isUserViewingOwnProfile=_isUserViewingOwnProfile;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage;
@property(copy, nonatomic) CDUnknownBlockType avatarLongPressBlock; // @synthesize avatarLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarButtonBlock; // @synthesize avatarButtonBlock;
@property(nonatomic) __weak T1LegacyProfileViewController *sourceViewController; // @synthesize sourceViewController;
@property(retain, nonatomic) TFNTwitterAccount *viewingAccount; // @synthesize viewingAccount;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account;
- (void).cxx_destruct;
- (void)performBlockingAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)performFollowerRequestAcceptAnimation;
- (void)_verifiedTapAction;
- (void)_avatarLongPressAction:(id)arg1;
- (void)_avatarTapAction:(id)arg1;
- (id)_itemWithDisplayText:(id)arg1 ranges:(id)arg2 insets:(struct UIEdgeInsets)arg3 font:(id)arg4 color:(id)arg5;
- (id)locationItemWithTextInsets:(struct UIEdgeInsets)arg1 font:(id)arg2 color:(id)arg3;
- (id)bioItemWithTextInsets:(struct UIEdgeInsets)arg1 font:(id)arg2 color:(id)arg3;
- (id)linkItemWithTextInsets:(struct UIEdgeInsets)arg1 font:(id)arg2 color:(id)arg3;
- (id)headerImageWithImage:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIImage *avatarImage; // @dynamic avatarImage;
@property(copy, nonatomic) NSString *bio; // @dynamic bio;
@property(retain, nonatomic) TFNTwitterEntitySet *bioEntities; // @dynamic bioEntities;
@property(retain, nonatomic) TFNAttributedStringItem *bioItem; // @dynamic bioItem;
@property(nonatomic) BOOL doesFollowYou; // @dynamic doesFollowYou;
@property(retain, nonatomic) TFNTwitterEntityURL *entityURL; // @dynamic entityURL;
@property(copy, nonatomic) NSString *fullName; // @dynamic fullName;
@property(nonatomic) BOOL isProtectedAccount; // @dynamic isProtectedAccount;
@property(nonatomic) BOOL isVerifiedAccount; // @dynamic isVerifiedAccount;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(copy, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) TFNAttributedStringItem *urlItem; // @dynamic urlItem;
@property(copy, nonatomic) NSString *userName; // @dynamic userName;

@end

