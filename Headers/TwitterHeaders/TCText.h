//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCElement.h"

#import "TFNAttributedTextRendererDelegate.h"

@class NSArray, NSString, TCVector4, TFNAttributedTextModel, TFNAttributedTextRenderer;

@interface TCText : TCElement <TFNAttributedTextRendererDelegate>
{
    BOOL _hasValidBackground;
    TFNAttributedTextModel *_textModel;
    TFNAttributedTextRenderer *_textRenderer;
    NSArray *_activeRanges;
    BOOL _fontBold;
    BOOL _fontItalic;
    BOOL _fontUnderline;
    BOOL _showEllipsis;
    int _tokenizedTextID;
    float _fontSize;
    NSString *_fontName;
    TCVector4 *_color;
    int _maxLines;
    float _lineHeightMultiple;
    NSString *_text;
    CDStruct_ffe6b7c1 _textAlignments;
}

+ (id)_fontsByNameAndType;
+ (id)_fontNameWithBaseName:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) float lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) int maxLines; // @synthesize maxLines=_maxLines;
@property(retain, nonatomic) TCVector4 *color; // @synthesize color=_color;
@property(nonatomic) BOOL showEllipsis; // @synthesize showEllipsis=_showEllipsis;
@property(nonatomic) BOOL fontUnderline; // @synthesize fontUnderline=_fontUnderline;
@property(nonatomic) BOOL fontItalic; // @synthesize fontItalic=_fontItalic;
@property(nonatomic) BOOL fontBold; // @synthesize fontBold=_fontBold;
@property(nonatomic) CDStruct_1ef3fb1f textAlignments; // @synthesize textAlignments=_textAlignments;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) int tokenizedTextID; // @synthesize tokenizedTextID=_tokenizedTextID;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_performTextTokenAction:(int)arg1;
- (void)pressTouchDetector:(id)arg1 pressEnded:(id)arg2 withEvent:(id)arg3 forGestureType:(int)arg4;
- (BOOL)pressTouchDetector:(id)arg1 allowsLongPress:(id)arg2 withEvent:(id)arg3;
- (void)pressTouchDetector:(id)arg1 pressBegan:(id)arg2 withEvent:(id)arg3;
- (id)activeRangesForAttributedTextRenderer:(id)arg1;
- (BOOL)shouldHighlightOnCurrentTouches;
- (BOOL)wantsTouches;
- (id)_fontWithStyle:(id)arg1;
- (void)_setParagraphStyleForLineBreakMode:(unsigned char)arg1 font:(id)arg2 lineHeightMultiple:(float)arg3 onAttributedString:(id)arg4 range:(struct _NSRange)arg5;
- (id)_attributedStringWithLineBreakMode:(unsigned char)arg1;
- (void)_updateTextModelIfNecessary;
- (id)_string;
- (id)_tokenizedAttributedString;
- (id)_styledColor;
- (float)_styledLineHeightMultiple;
- (float)_styledFontSize;
- (id)_styledFontName;
- (BOOL)_styledFontUnderline;
- (BOOL)_styledFontItalic;
- (BOOL)_styledFontBold;
- (id)backstopValueForStyleProperty:(int)arg1;
- (int)sizingStyleMask;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityLabelIsCustom;
- (id)accessibilityLabel;
- (BOOL)shouldBeAccessible;
- (void)drawRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)performLayout;
- (void)updateViewAndLayerProperties;
- (int)axisConstraint;
- (float)measureInAxis:(int)arg1 withConstraint:(float)arg2;
- (void)invalidateLayoutIncludingSize:(BOOL)arg1;
- (id)shadowPath;
- (BOOL)isOpaque;
- (id)extraDescription;
- (void)configureView;
- (id)initWithDocument:(id)arg1;

@end

