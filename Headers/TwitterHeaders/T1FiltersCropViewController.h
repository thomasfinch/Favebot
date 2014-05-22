//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class T1FiltersCropView, TFNHUD, TFNTimer, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface T1FiltersCropViewController : UIViewController <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIImage *_image;
    UIImage *_originalImage;
    T1FiltersCropView *_cropView;
    BOOL _square;
    TFNHUD *_hud;
    TFNTimer *_hudTimer;
    id <T1FiltersCropViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <T1FiltersCropViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_hideHUD;
- (void)_hudTimerCallback:(id)arg1;
- (void)_showHUDWithDelay:(float)arg1;
- (struct CGRect)_contentFrame;
- (void)toggleSquareAspectRatio;
- (void)cancelCrop;
- (void)applyCrop;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithImage:(id)arg1 originalImage:(id)arg2;

@end
