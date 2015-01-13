//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHGroupedTableViewCell.h"

@class NSString, UIImage, UIImageView, UILabel, UIViewController;

@interface PTHTweetbotGroupedCell : PTHGroupedTableViewCell
{
    struct UIEdgeInsets _titleInsets;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_titleImageView;
    UIViewController *_viewController;
}

@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets titleInsets; // @synthesize titleInsets=_titleInsets;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(copy, nonatomic) UIImage *titleHighlightedImage;
@property(copy, nonatomic) UIImage *titleImage;
@property(copy, nonatomic) NSString *subTitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

