//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1DownwardDisclosureCell : TFNTableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_disclosureView;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
