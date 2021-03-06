//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIEvent, UITouch;

@interface TFNPressTouchDetector : NSObject
{
    UITouch *_touch;
    struct CGPoint _touchPoint;
    UIEvent *_longPressEvent;
    BOOL _pressed;
    id <TFNPressTouchDetectorDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property(nonatomic) __weak id <TFNPressTouchDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didLongPress:(id)arg1;
- (void)_endPress:(id)arg1 withEvent:(id)arg2 gestureType:(int)arg3;
- (void)_beginPress:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

