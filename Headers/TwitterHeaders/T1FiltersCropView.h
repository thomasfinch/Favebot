//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class T1FiltersCropScrollView, T1FiltersEditGuideView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface T1FiltersCropView : UIView <UIScrollViewDelegate>
{
    T1FiltersCropScrollView *_scrollView;
    UIImageView *_imageView;
    UIImage *_image;
    T1FiltersEditGuideView *_guideView;
}

@property(readonly, nonatomic) T1FiltersEditGuideView *guideView; // @synthesize guideView=_guideView;
@property(readonly, nonatomic) T1FiltersCropScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)setSquare:(BOOL)arg1;
- (struct CGRect)cropRect;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end

