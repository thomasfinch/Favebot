//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class T1IconAndCheckmarkControl, T1Invitee, UILabel;

__attribute__((visibility("hidden")))
@interface T1OnboardingInviteeCell : TFNTableViewCell
{
    id <T1OnboardingInviteeCellDelegate> _delegate;
    T1Invitee *_invitee;
    T1IconAndCheckmarkControl *_checkmarkControl;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) T1IconAndCheckmarkControl *checkmarkControl; // @synthesize checkmarkControl=_checkmarkControl;
@property(retain, nonatomic) T1Invitee *invitee; // @synthesize invitee=_invitee;
@property(nonatomic) __weak id <T1OnboardingInviteeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)checkmarkChecked;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

