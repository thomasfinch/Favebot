//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@interface TFNLegacyFormTableView : UITableView
{
    BOOL suspendScrolling;
}

@property(nonatomic) BOOL suspendScrolling; // @synthesize suspendScrolling;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;

@end
