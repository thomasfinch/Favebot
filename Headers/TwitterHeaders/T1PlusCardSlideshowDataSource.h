//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "T1SlideshowViewControllerDataSource.h"
#import "TFNImageTransitionDelegate.h"

@class NSArray, TFNTwitterStatus, UIViewController;

__attribute__((visibility("hidden")))
@interface T1PlusCardSlideshowDataSource : NSObject <T1SlideshowViewControllerDataSource, TFNImageTransitionDelegate>
{
    NSArray *_slideshowSourceElements;
    TFNTwitterStatus *_status;
    UIViewController *_containingViewController;
}

- (void).cxx_destruct;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (BOOL)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2;
- (void)setPreviewImageHidden:(BOOL)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (id)slideshow:(id)arg1 transitionObjectForSlideAtIndex:(int)arg2;
- (struct CGSize)slideshow:(id)arg1 imageSizeForSlideAtIndex:(int)arg2;
- (id)slideshow:(id)arg1 imageURLStringForSlideAtIndex:(int)arg2;
- (id)slideshow:(id)arg1 previewImageForSlideAtIndex:(int)arg2;
- (id)slideshow:(id)arg1 statusForSlideAtIndex:(int)arg2;
- (int)numberOfSlidesInSlideshow:(id)arg1;
- (id)initWithCardInstance:(id)arg1 status:(id)arg2 containingViewController:(id)arg3;

@end

