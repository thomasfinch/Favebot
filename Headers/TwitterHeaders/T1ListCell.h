//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class T1AvatarImageView, TFNTwitterList, TFNTwitterScribeContext, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1ListCell : TFNTableViewCell
{
    T1AvatarImageView *_avatarImageView;
    UIImageView *_privateImageView;
    UILabel *_nameLabel;
    UILabel *_bylineLabel;
    UILabel *_descriptionLabel;
    UILabel *_memberCountLabel;
    TFNTwitterList *_list;
    int _displayMode;
    TFNTwitterScribeContext *_scribeContext;
}

+ (float)heightForList:(id)arg1 displayMode:(int)arg2 tableWidth:(float)arg3 contentPadding:(struct UIEdgeInsets)arg4;
@property(retain, nonatomic) TFNTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) TFNTwitterList *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)_layoutMemberCount:(struct CGRect)arg1 textX:(float)arg2 textY:(float)arg3;
- (float)_layoutDescription:(struct CGRect)arg1 textX:(float)arg2 textY:(float)arg3;
- (float)_layoutTopLine:(struct CGRect)arg1 textX:(float)arg2 textY:(float)arg3;
- (void)_update;
- (struct CGSize)_textSizeForLabel:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGSize)_textSizeForLabel:(id)arg1 withWidth:(float)arg2;
- (void)layoutSubviews;
- (void)_userDidUpdate:(id)arg1;
- (void)cleanup;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
