//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary;

@interface TFNTableViewCellAnimationView : UIView
{
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UIView *_leftBorderView;
    UIView *_rightBorderView;
    NSMutableDictionary *_initialViewFrames;
    NSMutableDictionary *_targetViewFrames;
    int _separatorType;
    int _borderType;
    int _initialSectionBreaks;
    float _preExpansionContentOffset;
    UIView *_cellView;
    UIView *_contentView;
    UIView *_contentViewBackground;
    struct UIEdgeInsets _contentPadding;
    struct CGRect _initialFrame;
    struct CGRect _targetFrame;
}

@property(readonly, nonatomic) UIView *contentViewBackground; // @synthesize contentViewBackground=_contentViewBackground;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
@property(readonly, nonatomic) float preExpansionContentOffset; // @synthesize preExpansionContentOffset=_preExpansionContentOffset;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) int initialSectionBreaks; // @synthesize initialSectionBreaks=_initialSectionBreaks;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(readonly, nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding=_contentPadding;
@property(readonly, nonatomic) int borderType; // @synthesize borderType=_borderType;
@property(readonly, nonatomic) int separatorType; // @synthesize separatorType=_separatorType;
- (void).cxx_destruct;
- (void)_updateWithSectionBreaks:(int)arg1 viewFrames:(id)arg2;
- (struct CGRect)_cellViewFrameForFrame:(struct CGRect)arg1;
- (void)reattachContentView;
- (void)detachContentViewForSuperview:(id)arg1;
@property(readonly, nonatomic) struct CGRect targetContentViewFrame;
@property(readonly, nonatomic) struct CGRect initialContentViewFrame;
- (void)updateTargetFramesForExpansionToHeight:(float)arg1 withPreviousContentOffset:(float)arg2;
- (void)returnToInitialFrame;
- (void)updateToTargetFrame;
- (void)setTargetFrame:(struct CGRect)arg1 forViewWithTag:(int)arg2;
- (struct CGRect)targetFrameForViewWithTag:(int)arg1;
- (void)setInitialFrame:(struct CGRect)arg1 forViewWithTag:(int)arg2;
- (struct CGRect)initialFrameForViewWithTag:(int)arg1;
- (void)duplicateCell:(id)arg1;
- (id)viewWithTag:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

