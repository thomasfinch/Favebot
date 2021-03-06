//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TFNCustomTableViewCell;

@interface TFNCustomTableViewCellView : UIView
{
    TFNCustomTableViewCell *_cell;
    struct {
        unsigned int highlighted:1;
        unsigned int selected:1;
        unsigned int animatesNextFrameChange:1;
    } _flags;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)canAnimateFrameChanges;
@property(nonatomic, getter=isSelected) BOOL selected;
- (void)animatesNextFrameChange;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(readonly, nonatomic) TFNCustomTableViewCell *cell;
- (id)initWithFrame:(struct CGRect)arg1 cell:(id)arg2;

@end

