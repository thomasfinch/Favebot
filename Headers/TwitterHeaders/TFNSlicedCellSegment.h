//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface TFNSlicedCellSegment : UIView
{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_labelWithText:(id)arg1 isValue:(BOOL)arg2;
- (id)initWithLabel:(id)arg1 value:(id)arg2 action:(CDUnknownBlockType)arg3;

@end

