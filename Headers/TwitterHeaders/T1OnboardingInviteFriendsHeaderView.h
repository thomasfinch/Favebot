//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface T1OnboardingInviteFriendsHeaderView : UIView
{
    UIButton *_selectOrUnselectAllButton;
    UILabel *_bodyLabel;
}

@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UIButton *selectOrUnselectAllButton; // @synthesize selectOrUnselectAllButton=_selectOrUnselectAllButton;
- (void).cxx_destruct;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 commitLayout:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
