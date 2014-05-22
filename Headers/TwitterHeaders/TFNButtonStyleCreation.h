//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNButtonStyle.h"

@class NSArray, NSString, TFNButtonStyleCreationRootNode, UIColor;

@interface TFNButtonStyleCreation : TFNButtonStyle
{
    TFNButtonStyleCreation *_defaultPresentation;
    TFNButtonStyleCreation *_borderless;
    TFNButtonStyleCreation *_presentedOverDarkBackground;
    TFNButtonStyleCreation *_xLarge;
    TFNButtonStyleCreation *_large;
    TFNButtonStyleCreation *_medium;
    TFNButtonStyleCreation *_mediumCondensed;
    TFNButtonStyleCreation *_smallCondensed;
    TFNButtonStyleCreation *_heavy;
    TFNButtonStyleCreation *_bold;
    TFNButtonStyleCreation *_regular;
    TFNButtonStyleCreation *_light;
    TFNButtonStyleCreation *_normal;
    TFNButtonStyleCreation *_highlighted;
    TFNButtonStyleCreation *_selected;
    TFNButtonStyleCreation *_disabled;
    unsigned int _nodeKey;
    unsigned int _subnodeKey;
    TFNButtonStyleCreationRootNode *_rootNode;
}

+ (id)styleForAppearanceKey:(id)arg1;
@property(nonatomic) TFNButtonStyleCreationRootNode *rootNode; // @synthesize rootNode=_rootNode;
@property(readonly, nonatomic) unsigned int subnodeKey; // @synthesize subnodeKey=_subnodeKey;
@property(readonly, nonatomic) unsigned int nodeKey; // @synthesize nodeKey=_nodeKey;
@property(retain, nonatomic) TFNButtonStyleCreation *disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) TFNButtonStyleCreation *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) TFNButtonStyleCreation *highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) TFNButtonStyleCreation *normal; // @synthesize normal=_normal;
@property(retain, nonatomic) TFNButtonStyleCreation *light; // @synthesize light=_light;
@property(retain, nonatomic) TFNButtonStyleCreation *regular; // @synthesize regular=_regular;
@property(retain, nonatomic) TFNButtonStyleCreation *bold; // @synthesize bold=_bold;
@property(retain, nonatomic) TFNButtonStyleCreation *heavy; // @synthesize heavy=_heavy;
@property(retain, nonatomic) TFNButtonStyleCreation *smallCondensed; // @synthesize smallCondensed=_smallCondensed;
@property(retain, nonatomic) TFNButtonStyleCreation *mediumCondensed; // @synthesize mediumCondensed=_mediumCondensed;
@property(retain, nonatomic) TFNButtonStyleCreation *medium; // @synthesize medium=_medium;
@property(retain, nonatomic) TFNButtonStyleCreation *large; // @synthesize large=_large;
@property(retain, nonatomic) TFNButtonStyleCreation *xLarge; // @synthesize xLarge=_xLarge;
@property(retain, nonatomic) TFNButtonStyleCreation *presentedOverDarkBackground; // @synthesize presentedOverDarkBackground=_presentedOverDarkBackground;
@property(retain, nonatomic) TFNButtonStyleCreation *borderless; // @synthesize borderless=_borderless;
@property(retain, nonatomic) TFNButtonStyleCreation *defaultPresentation; // @synthesize defaultPresentation=_defaultPresentation;
- (void).cxx_destruct;
- (void)setDefaultAppearanceKey:(id)arg1 whenApplyingStateMask:(unsigned int)arg2;
- (void)setScalingMode:(unsigned int)arg1 forPropertyName:(unsigned int)arg2;
- (void)setColorAdjustMode:(unsigned int)arg1 forPropertyName:(unsigned int)arg2;
- (id)initWithNodeKey:(unsigned int)arg1 subnodeKey:(unsigned int)arg2 rootNode:(id)arg3;

// Remaining properties
@property(nonatomic) struct UIEdgeInsets contentPadding;
@property(nonatomic) float cornerRadius;
@property(retain, nonatomic) UIColor *fillColor;
@property(nonatomic) BOOL imageAndTitleAreBothPermitted;
@property(retain, nonatomic) UIColor *imageColor;
@property(nonatomic) float imageHeight;
@property(nonatomic) BOOL imageIsPermitted;
@property(nonatomic) struct UIEdgeInsets imagePadding;
@property(nonatomic) BOOL imageTintColorEnabled;
@property(nonatomic) float imageToTitlePadding;
@property(nonatomic) float minimumHeight;
@property(nonatomic) float minimumWidth;
@property(nonatomic) float opacity;
@property(retain, nonatomic) UIColor *strokeColor;
@property(nonatomic) float strokeLineWidth;
@property(copy, nonatomic) NSArray *tintablePropertyNames;
@property(retain, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *titleFontSelectorName;
@property(nonatomic) BOOL titleIsPermitted;
@property(nonatomic) struct UIEdgeInsets titlePadding;
@property(nonatomic) struct UIEdgeInsets touchInsets;

@end
