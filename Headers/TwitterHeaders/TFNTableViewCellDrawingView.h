//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDrawingsHostView.h"

@class TFNDrawingTableViewCell;

@interface TFNTableViewCellDrawingView : TFNDrawingsHostView
{
    TFNDrawingTableViewCell *_cell;
    BOOL _highlighted;
    CDUnknownBlockType _drawRectBlock;
    CDUnknownBlockType _layoutSubviewsBlock;
    CDUnknownBlockType _touchesBeganBlock;
    CDUnknownBlockType _touchesMovedBlock;
    CDUnknownBlockType _touchesEndedBlock;
    CDUnknownBlockType _touchesCancelledBlock;
    CDUnknownBlockType _legacyDrawRectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType legacyDrawRectBlock; // @synthesize legacyDrawRectBlock=_legacyDrawRectBlock;
@property(copy, nonatomic) CDUnknownBlockType touchesCancelledBlock; // @synthesize touchesCancelledBlock=_touchesCancelledBlock;
@property(copy, nonatomic) CDUnknownBlockType touchesEndedBlock; // @synthesize touchesEndedBlock=_touchesEndedBlock;
@property(copy, nonatomic) CDUnknownBlockType touchesMovedBlock; // @synthesize touchesMovedBlock=_touchesMovedBlock;
@property(copy, nonatomic) CDUnknownBlockType touchesBeganBlock; // @synthesize touchesBeganBlock=_touchesBeganBlock;
@property(copy, nonatomic) CDUnknownBlockType layoutSubviewsBlock; // @synthesize layoutSubviewsBlock=_layoutSubviewsBlock;
@property(copy, nonatomic) CDUnknownBlockType drawRectBlock; // @synthesize drawRectBlock=_drawRectBlock;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithCell:(id)arg1;

@end

