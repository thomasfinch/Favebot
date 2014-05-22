//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface TFNHUD : UIWindow
{
    UIActivityIndicatorView *activity;
    UILabel *label;
    UIImageView *imageView;
    UIWindow *blockingWindow;
    NSString *singletonKey;
    BOOL showBlockingWindow;
    BOOL showGrowlWindow;
}

+ (void)indicateErrorMessage:(id)arg1 duration:(float)arg2;
+ (void)indicateErrorMessage:(id)arg1;
+ (void)indicateError:(id)arg1;
+ (void)indicateLongProgress:(id)arg1;
+ (void)indicateImage:(id)arg1 text:(id)arg2 duration:(float)arg3;
+ (void)indicateSuccess:(id)arg1 duration:(float)arg2;
+ (void)indicateSuccess:(id)arg1;
+ (void)growlImage:(id)arg1 text:(id)arg2;
+ (struct CGRect)windowFrameWithWidth:(float)arg1;
+ (id)hudManager;
@property(copy, nonatomic) NSString *singletonKey; // @synthesize singletonKey;
@property(nonatomic) BOOL showGrowlWindow; // @synthesize showGrowlWindow;
@property(nonatomic) BOOL showBlockingWindow; // @synthesize showBlockingWindow;
- (void).cxx_destruct;
- (void)indicateErrorMessageAndHide:(id)arg1 duration:(float)arg2;
- (void)indicateErrorMessageAndHide:(id)arg1;
- (void)indicateErrorAndHide:(id)arg1;
- (void)indicateSuccess:(id)arg1 duration:(float)arg2;
- (void)indicateSuccessAndHide:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)_swapInImageNamed:(id)arg1;
- (void)hide;
- (void)hideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)showBrieflyThenHide:(float)arg1;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)show;
- (void)dealloc;
- (void)resignKeyWindow;
- (void)animateIn;
- (struct CGAffineTransform)_currentTransform;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLabelText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1;

@end

