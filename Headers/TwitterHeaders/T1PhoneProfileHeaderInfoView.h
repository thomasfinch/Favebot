//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumber, NSString, TFNAttributedStringItem, TFNTwitterEntitySet, TFNTwitterEntityURL, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface T1PhoneProfileHeaderInfoView : UIView
{
    BOOL _messageButtonsShown;
    BOOL _shouldShowLargeFollowingButton;
    id <T1PhoneProfileHeaderInfoViewDelegate> _delegate;
    NSString *_bio;
    NSNumber *_followersCount;
    NSNumber *_followingCount;
    TFNTwitterEntityURL *_url;
    TFNAttributedStringItem *_bioLabel;
    UIButton *_followersButton;
    UIButton *_followingButton;
    UILabel *_locationLabel;
    UIButton *_urlButton;
    UIButton *_messageButton;
    UIButton *_tweetToButton;
    TFNTwitterEntitySet *_bioEntities;
    UIView *_bottomBorderView;
}

@property(retain, nonatomic) UIView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(retain, nonatomic) TFNTwitterEntitySet *bioEntities; // @synthesize bioEntities=_bioEntities;
@property(retain, nonatomic) UIButton *tweetToButton; // @synthesize tweetToButton=_tweetToButton;
@property(retain, nonatomic) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) UIButton *urlButton; // @synthesize urlButton=_urlButton;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIButton *followingButton; // @synthesize followingButton=_followingButton;
@property(retain, nonatomic) UIButton *followersButton; // @synthesize followersButton=_followersButton;
@property(retain, nonatomic) TFNAttributedStringItem *bioLabel; // @synthesize bioLabel=_bioLabel;
@property(nonatomic) BOOL shouldShowLargeFollowingButton; // @synthesize shouldShowLargeFollowingButton=_shouldShowLargeFollowingButton;
@property(retain, nonatomic) TFNTwitterEntityURL *url; // @synthesize url=_url;
@property(nonatomic, getter=areMessageButtonsShown) BOOL messageButtonsShown; // @synthesize messageButtonsShown=_messageButtonsShown;
@property(retain, nonatomic) NSNumber *followingCount; // @synthesize followingCount=_followingCount;
@property(retain, nonatomic) NSNumber *followersCount; // @synthesize followersCount=_followersCount;
@property(copy, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(nonatomic) __weak id <T1PhoneProfileHeaderInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_generateMessageButtonWithIcon:(id)arg1 title:(id)arg2;
- (id)_generateBioLabel;
- (void)_didTapTweetToButton:(id)arg1;
- (void)_didTapMessageButton:(id)arg1;
- (void)_didLongPressURLButton:(id)arg1;
- (void)_didTapURLButton:(id)arg1;
- (void)_didTapFollowers:(id)arg1;
- (void)_didTapFollowing:(id)arg1;
- (id)_attributedTitleForMetricButtonWithLabel:(id)arg1 count:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isDirectMessageEnabled) BOOL directMessageEnabled;
@property(copy, nonatomic) NSString *location;
- (void)setBio:(id)arg1 entities:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
