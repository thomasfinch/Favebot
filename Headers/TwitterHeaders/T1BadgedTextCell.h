//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTextCell.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface T1BadgedTextCell : TFNTextCell
{
    UIImageView *_badgeView;
    struct UIEdgeInsets _textContentInsets;
}

+ (id)iconCellForTableView:(id)arg1 withText:(id)arg2 detailText:(id)arg3 icon:(id)arg4 accessoryType:(int)arg5;
@property(nonatomic) struct UIEdgeInsets textContentInsets; // @synthesize textContentInsets=_textContentInsets;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

