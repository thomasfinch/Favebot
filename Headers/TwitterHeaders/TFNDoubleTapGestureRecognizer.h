//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class NSDate;

@interface TFNDoubleTapGestureRecognizer : UIGestureRecognizer
{
    NSDate *_firstTouchTime;
    double _timeout;
}

- (void).cxx_destruct;
- (void)_timeoutFailure;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 timeout:(double)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

