//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TFNTwitterAccount, UIImageView, UILabel, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface T1ComposeRichTextHeaderView : UIView
{
    UILabel *_fullnameLabel;
    UILabel *_usernameLabel;
    UIImageView *_avatarView;
    UITapGestureRecognizer *_tapRecognizer;
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_showDrafts:(id)arg1;
- (void)_selectComposeAccountFromView:(id)arg1;
- (void)_userDidUpdate:(id)arg1;
- (void)_updateAccountInfo;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

