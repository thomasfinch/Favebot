//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PTHPageView, UIView;

@protocol PTHPageViewDataSource <NSObject>
- (UIView *)pageView:(PTHPageView *)arg1 pageAtIndex:(int)arg2;
- (unsigned int)numberOfPagesInPageView:(PTHPageView *)arg1;

@optional
- (void)pageView:(PTHPageView *)arg1 didRemovePage:(UIView *)arg2;
- (UIView *)appendView:(PTHPageView *)arg1;
- (UIView *)prependView:(PTHPageView *)arg1;
@end

