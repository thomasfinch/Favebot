//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PTHPageView;

@protocol PTHPageViewDelegate <NSObject>

@optional
- (void)pageViewWillBeginDragging:(PTHPageView *)arg1;
- (void)pageViewDidEndDecelerating:(PTHPageView *)arg1;
- (void)pageViewDidChangePage:(PTHPageView *)arg1;
- (void)pageViewDidScroll:(PTHPageView *)arg1;
@end

