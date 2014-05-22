//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNAttributedTextCell.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface T1SearchQueryTableViewCell : TFNAttributedTextCell
{
    BOOL _showsTapaheadButton;
    id <T1SearchQueryTableViewCellDelegate> _delegate;
    UIButton *_tapAheadButton;
}

+ (float)heightForAttributedText:(id)arg1 tableWidth:(float)arg2 contentPadding:(struct UIEdgeInsets)arg3 iconImage:(id)arg4 withTapaheadButton:(BOOL)arg5;
+ (id)cellForTableView:(id)arg1 withAttributedText:(id)arg2 iconImage:(id)arg3 withTapaheadButton:(BOOL)arg4;
@property(retain, nonatomic) UIButton *tapAheadButton; // @synthesize tapAheadButton=_tapAheadButton;
@property(nonatomic) BOOL showsTapaheadButton; // @synthesize showsTapaheadButton=_showsTapaheadButton;
@property(nonatomic) __weak id <T1SearchQueryTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tapAheadButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)cleanup;

@end

