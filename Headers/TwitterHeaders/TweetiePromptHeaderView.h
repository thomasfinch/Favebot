//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDelegate.h"

@class CALayer, NSString, TweetiePromptShadowView, UILabel, UITableView;

__attribute__((visibility("hidden")))
@interface TweetiePromptHeaderView : UIView <UITableViewDelegate>
{
    UILabel *titleLabel;
    UILabel *messageLabel;
    UITableView *tableView;
    UIView *contentView;
    TweetiePromptShadowView *bottomShadowView;
    UIView *headerHeader;
    CALayer *divider;
}

+ (id)font;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView;
@property(retain, nonatomic) UIView *headerHeader; // @synthesize headerHeader;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
- (void).cxx_destruct;
- (void)loadContentView;
- (float)expectedHeightForLabel:(id)arg1;
- (float)expectedHeight;
- (id)newLabelWithFont:(id)arg1 textColor:(id)arg2;
- (void)sizeToFit;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)updateOffsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
