//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCell.h"

@class PTHTweetbotAvatarFramedView, UILabel;

@interface PTHTweetbotStandardCell : PTHTweetbotCell
{
    UILabel *__textLabel;
    UILabel *__detailTextLabel;
    PTHTweetbotAvatarFramedView *_avatarImageView;
}

+ (unsigned int)cellHeightWithItem:(id)arg1 forTableView:(id)arg2;
@property(readonly, nonatomic) PTHTweetbotAvatarFramedView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)detailTextLabel;
- (id)textLabel;
@property(readonly, nonatomic) float textHorizontalOffset;
@property(readonly, nonatomic) struct CGPoint avatarImageOffset;
- (void)fontDidChange;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

