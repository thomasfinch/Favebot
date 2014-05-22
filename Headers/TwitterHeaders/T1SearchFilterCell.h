//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class NSString, UIFont, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1SearchFilterCell : TFNTableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_checkImageView;
    UIImageView *_iconImageView;
    BOOL _hideCheck;
    NSString *_text;
    UIFont *_font;
}

@property(nonatomic) BOOL hideCheck; // @synthesize hideCheck=_hideCheck;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_hasIcon;
- (id)_imageName;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

