//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface T1ProfileAvatarImageView : UIView
{
    UIView *_borderView;
    UIImageView *_imageView;
}

+ (struct UIEdgeInsets)standardBorderEdgeInsets;
+ (struct CGSize)standardSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

