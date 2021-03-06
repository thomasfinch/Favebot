//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSString, UIImageView, UILabel;

@interface TFNDemoHUD : UIWindow
{
    UILabel *label;
    UIImageView *imageView;
    UIWindow *blockingWindow;
    NSString *singletonKey;
    BOOL showBlockingWindow;
    struct CGRect _desiredFrame;
}

+ (struct CGRect)windowFrameWithWidth:(int)arg1;
+ (id)hudManager;
@property(nonatomic) struct CGRect desiredFrame; // @synthesize desiredFrame=_desiredFrame;
@property(copy, nonatomic) NSString *singletonKey; // @synthesize singletonKey;
@property(nonatomic) BOOL showBlockingWindow; // @synthesize showBlockingWindow;
- (void).cxx_destruct;
- (void)hide;
- (void)hideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)showBrieflyThenHide:(float)arg1;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)show;
- (void)dealloc;
- (void)animateIn;
- (struct CGAffineTransform)_currentTransform;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLabelText:(id)arg1;
- (struct CGRect)windowFrameWithWidth:(int)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1;

@end

