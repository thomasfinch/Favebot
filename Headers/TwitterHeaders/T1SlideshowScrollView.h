//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

__attribute__((visibility("hidden")))
@interface T1SlideshowScrollView : UIScrollView <UIScrollViewDelegate>
{
    unsigned int _direction;
    struct CGPoint _startingPoint;
}

@property(nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
- (void)reset:(struct CGPoint)arg1;

@end

