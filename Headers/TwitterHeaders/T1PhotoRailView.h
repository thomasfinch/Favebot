//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface T1PhotoRailView : UIScrollView <UIScrollViewDelegate>
{
    int _imageCount;
    NSMutableArray *_visibleButtons;
    NSMutableArray *_visiblePlaceholders;
    NSMutableArray *_reusableButtons;
    NSMutableArray *_reusablePlaceholders;
    id <T1PhotoRailViewDataSource> _photoRailDataSource;
    id <T1PhotoRailViewDelegate> _photoRailDelegate;
    float _imageSpacing;
    struct CGSize _imageSize;
    struct UIEdgeInsets _contentPadding;
}

+ (float)defaultImageSpacing;
+ (struct UIEdgeInsets)defaultContentPadding;
@property(nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) float imageSpacing; // @synthesize imageSpacing=_imageSpacing;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) __weak id <T1PhotoRailViewDelegate> photoRailDelegate; // @synthesize photoRailDelegate=_photoRailDelegate;
@property(nonatomic) __weak id <T1PhotoRailViewDataSource> photoRailDataSource; // @synthesize photoRailDataSource=_photoRailDataSource;
- (void).cxx_destruct;
- (void)imageButtonDidPush:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (struct CGRect)_imageFrameAtIndex:(int)arg1;
- (void)layoutSubviews;
- (void)reloadVisibleImages;
- (void)reloadData;
- (id)viewForImageAtColumn:(int)arg1;
- (id)imageAtColumn:(int)arg1;
- (void)scrollToColumn:(int)arg1 animated:(BOOL)arg2;
- (struct CGRect)rectForImageAtColumn:(int)arg1;
@property(readonly, nonatomic) struct _NSRange visibleRange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
