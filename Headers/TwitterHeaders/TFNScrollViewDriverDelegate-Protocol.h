//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNScrollViewDriver;

@protocol TFNScrollViewDriverDelegate <NSObject>

@optional
- (void)scrollViewDriverWillReverseDirection:(TFNScrollViewDriver *)arg1;
- (void)scrollViewDriverWillStopScrolling:(TFNScrollViewDriver *)arg1;
- (void)scrollViewDriverDidStartScrolling:(TFNScrollViewDriver *)arg1;
@end

