//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDrawingTableViewCell.h"

@class NSAttributedString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1OnboardingPlaceholderUserCell : TFNDrawingTableViewCell
{
    NSAttributedString *_bodyAttributedString;
    UIImageView *_avatarImageView;
    UILabel *_bodyLabel;
}

@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSAttributedString *bodyAttributedString; // @synthesize bodyAttributedString=_bodyAttributedString;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
