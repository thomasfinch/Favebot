//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNPressTouchDetectorDelegate.h"

@class CALayer, NSArray, TCAction, TCContainer, TCElementView, TCShadow, TCStyle, TCVector2, TCVector4, TFNPressTouchDetector;

@interface TCElement : NSObject <TFNPressTouchDetectorDelegate>
{
    BOOL _bindingDidSetVisible;
    BOOL _boundVisible;
    struct CGSize _measuredSize;
    struct CGSize _measureConstraint;
    struct CGRect _layoutRect;
    CALayer *_shadowLayer;
    TFNPressTouchDetector *_pressTouchDetector;
    TCStyle *_flattenedStyle;
    BOOL _layoutValid;
    BOOL _visible;
    BOOL _highlighted;
    TCElementView *_view;
    id <TCDocument> _document;
    TCContainer *_parent;
    int _identifier;
    float _opacity;
    TCVector2 *_position;
    int _positionMode;
    TCVector2 *_size;
    TCVector2 *_maxSize;
    TCVector4 *_margin;
    TCShadow *_shadow;
    int _touchDownActionID;
    int _touchUpActionID;
    int _tapActionID;
    int _longPressActionID;
    TCAction *_touchDownAction;
    TCAction *_touchUpAction;
    TCAction *_tapAction;
    TCAction *_longPressAction;
    NSArray *_styles;
    CDStruct_79c71658 _sizeModes;
    CDStruct_79c71658 _maxSizeModes;
}

+ (Class)viewClass;
@property(retain, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) TCAction *longPressAction; // @synthesize longPressAction=_longPressAction;
@property(retain, nonatomic) TCAction *tapAction; // @synthesize tapAction=_tapAction;
@property(retain, nonatomic) TCAction *touchUpAction; // @synthesize touchUpAction=_touchUpAction;
@property(retain, nonatomic) TCAction *touchDownAction; // @synthesize touchDownAction=_touchDownAction;
@property(nonatomic) int longPressActionID; // @synthesize longPressActionID=_longPressActionID;
@property(nonatomic) int tapActionID; // @synthesize tapActionID=_tapActionID;
@property(nonatomic) int touchUpActionID; // @synthesize touchUpActionID=_touchUpActionID;
@property(nonatomic) int touchDownActionID; // @synthesize touchDownActionID=_touchDownActionID;
@property(retain, nonatomic) TCShadow *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) TCVector4 *margin; // @synthesize margin=_margin;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) CDStruct_1ef3fb1f maxSizeModes; // @synthesize maxSizeModes=_maxSizeModes;
@property(retain, nonatomic) TCVector2 *maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) CDStruct_1ef3fb1f sizeModes; // @synthesize sizeModes=_sizeModes;
@property(retain, nonatomic) TCVector2 *size; // @synthesize size=_size;
@property(nonatomic) int positionMode; // @synthesize positionMode=_positionMode;
@property(retain, nonatomic) TCVector2 *position; // @synthesize position=_position;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) TCContainer *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id <TCDocument> document; // @synthesize document=_document;
@property(readonly, nonatomic) BOOL layoutValid; // @synthesize layoutValid=_layoutValid;
@property(retain, nonatomic) TCElementView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setVisible:(BOOL)arg1 fromBindingWithInvalidation:(BOOL)arg2;
@property(readonly, nonatomic) TCShadow *styledShadow;
@property(readonly, nonatomic) TCVector4 *styledMargin;
- (float)_styledMaxSizeY;
- (float)_styledMaxSizeX;
@property(readonly, nonatomic) struct CGPoint styledPosition;
- (float)_styledPositionY;
- (float)_styledPositionX;
- (float)_styledSizeY;
- (float)_styledSizeX;
@property(readonly, nonatomic) float styledOpacity;
@property(readonly, nonatomic) BOOL styledVisible;
- (float)maxSizeY;
- (float)maxSizeX;
- (float)positionY;
- (float)positionX;
- (float)sizeY;
- (float)sizeX;
- (id)backstopValueForStyleProperty:(int)arg1;
- (void)_invalidateForStylePropertyChange:(int)arg1;
- (int)redrawStyleMask;
- (int)layoutStyleMask;
- (int)sizingStyleMask;
- (id)valueForStyleProperty:(int)arg1;
- (void)removeStyle:(id)arg1;
- (void)addStyle:(id)arg1;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityLabelIsCustom;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)updateAccessibility;
- (BOOL)hasAccessibleActions;
- (BOOL)shouldBeAccessible;
- (id)_actionForAccessibility;
- (id)_actionWithID:(int)arg1;
- (void)pressTouchDetector:(id)arg1 pressEnded:(id)arg2 withEvent:(id)arg3 forGestureType:(int)arg4;
- (BOOL)pressTouchDetector:(id)arg1 allowsLongPress:(id)arg2 withEvent:(id)arg3;
- (void)pressTouchDetector:(id)arg1 pressBegan:(id)arg2 withEvent:(id)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) BOOL shouldHighlightOnCurrentTouches;
@property(readonly, nonatomic) BOOL wantsUserInteraction;
@property(readonly, nonatomic) BOOL wantsTouches;
- (void)visitTreeWithPruningBlock:(CDUnknownBlockType)arg1;
- (void)visitTreeWithBlock:(CDUnknownBlockType)arg1;
- (id)root;
- (id)shadowPath;
- (BOOL)drawsContent;
@property(readonly, nonatomic) struct CGSize layoutSize;
- (void)performLayout;
- (void)layoutInRect:(struct CGRect)arg1;
- (void)invalidateLayoutIncludingSize:(BOOL)arg1;
- (BOOL)_sizeAffectsParent;
- (float)maxSizeInAxis:(int)arg1;
- (BOOL)hasMaxSizeInAxis:(int)arg1;
- (int)maxSizeModeInAxis:(int)arg1;
- (int)sizeModeInAxis:(int)arg1;
- (float)sizeInAxis:(int)arg1;
- (int)axisConstraint;
- (float)measureInAxis:(int)arg1 withConstraint:(float)arg2;
- (float)getMeasuredHeight:(float)arg1;
- (float)getMeasuredWidth:(float)arg1;
- (void)updateLayerProperties;
- (void)updateViewProperties;
- (void)updateViewAndLayerProperties;
- (void)updateViewWithVisible:(BOOL)arg1;
- (void)configureView;
- (void)createViewIfNecessary;
- (BOOL)shouldRasterize;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)forceRedraw;
- (id)extraDescription;
- (id)description;
- (void)dispose;
- (id)initWithDocument:(id)arg1;

@end

