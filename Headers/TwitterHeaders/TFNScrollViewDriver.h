//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, UIScrollView;

@interface TFNScrollViewDriver : NSObject
{
    UIScrollView *_scrollView;
    CADisplayLink *_displayLink;
    BOOL _newStart;
    struct CGPoint _startOffset;
    struct CGPoint _targetOffset;
    double _startTime;
    double _targetTime;
    id <TFNScrollViewDriverDelegate> _delegate;
    float _velocity;
}

@property(nonatomic) float velocity; // @synthesize velocity=_velocity;
@property(nonatomic) __weak id <TFNScrollViewDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (struct CGPoint)_endPoint;
- (struct CGPoint)_startPoint;
- (void)_frameWillDisplay;
@property(readonly, nonatomic) BOOL running;
- (void)stop;
- (void)_startScrolling;
- (void)start;
- (id)initWithScrollView:(id)arg1;

@end

