//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TFNPaddedButton, TFNTwitterUser;

@interface TFNTwitterFollowerRequestControl : UIView
{
    id <TFNTwitterBinaryChoiceDelegate> _delegate;
    TFNTwitterUser *_user;
    int _mode;
    TFNPaddedButton *_acceptButton;
    TFNPaddedButton *_declineButton;
}

+ (struct CGSize)sizeForControlThatFits:(struct CGSize)arg1;
+ (struct CGSize)sizeForControl;
@property(retain, nonatomic) TFNPaddedButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) TFNPaddedButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak TFNTwitterUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <TFNTwitterBinaryChoiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_declineButtonTapped;
- (void)_acceptButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

