//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface T1ComposeAlbumPickerCell : UITableViewCell
{
    BOOL _showChevron;
    UILabel *_albumTitleLabel;
}

@property(readonly, nonatomic) UILabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(nonatomic) BOOL showChevron; // @synthesize showChevron=_showChevron;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

