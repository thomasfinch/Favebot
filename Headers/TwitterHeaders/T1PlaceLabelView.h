//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1PlaceLabelView : UIView
{
    UILabel *_textLabel;
    UIImageView *_iconView;
    unsigned int _style;
}

+ (id)_fontForStyle:(unsigned int)arg1;
+ (float)heightForText:(id)arg1 style:(unsigned int)arg2;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned int)arg1;

@end
