//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "TFNActiveRangeTouchHandler.h"

@class NSAttributedString, NSMutableArray, UIColor, UIView;

@interface TFNUITextRenderer : UIResponder <TFNActiveRangeTouchHandler>
{
    struct __CTFrame *_ctFrame;
    NSMutableArray *_axViews;
    struct CGSize _size;
    BOOL _hasValidSize;
    BOOL _singleLine;
    unsigned char _lineBreakMode;
    BOOL _accessibilityDisabledForLinks;
    id <TFNUITextRendererDelegate> _delegate;
    UIView *_view;
    NSAttributedString *_attributedString;
    UIColor *_shadowColor;
    UIColor *_selectionColor;
    float _selectionRoundRadius;
    float _hitTestPadding;
    id <TFNActiveTextRange> _hitRange;
    struct CGSize _shadowOffset;
    struct CGPoint _hitPoint;
    struct CGRect _frame;
    struct UIEdgeInsets _selectionInsets;
}

@property(nonatomic) BOOL accessibilityDisabledForLinks; // @synthesize accessibilityDisabledForLinks=_accessibilityDisabledForLinks;
@property(readonly, nonatomic) struct CGPoint hitPoint; // @synthesize hitPoint=_hitPoint;
@property(readonly, nonatomic) id <TFNActiveTextRange> hitRange; // @synthesize hitRange=_hitRange;
@property(nonatomic) float hitTestPadding; // @synthesize hitTestPadding=_hitTestPadding;
@property(nonatomic) float selectionRoundRadius; // @synthesize selectionRoundRadius=_selectionRoundRadius;
@property(nonatomic) struct UIEdgeInsets selectionInsets; // @synthesize selectionInsets=_selectionInsets;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) BOOL singleLine; // @synthesize singleLine=_singleLine;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <TFNUITextRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateAXViews;
- (void)_removeAXViews;
- (void)_addAXViews;
- (id)activeRangeTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)activeRangeTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)activeRangeTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct __CTFrame *)_ctFrame;
- (void)_resetCtFrame;
- (void)_buildCtFrame;
- (struct __CTFrame *)_coreTextFrameWithAttributedString:(id)arg1 frame:(struct CGRect)arg2;
- (void)_rectsForRange:(CDStruct_1ef3fb1f)arg1 rects:(struct CGRect *)arg2 rectCount:(int *)arg3;
- (struct CGRect)_convertRect:(struct CGRect)arg1;
- (id)_hitTestRanges:(id)arg1 forPoint:(struct CGPoint)arg2;
- (struct CGRect)selectedRect;
- (id)selectedString;
- (struct CGSize)sizeThatFits;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)draw;
- (void)dealloc;
- (id)init;

@end
