//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

__attribute__((visibility("hidden")))
@interface T1ComposeLockingTableView : UITableView
{
    BOOL _locked;
    float _offsetWhenLocked;
    struct CGPoint _contentOffsetLocked;
    struct CGPoint _lastContentOffset;
    float _offset;
}

@property(nonatomic) float offset; // @synthesize offset=_offset;
@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)endDragging;

@end

