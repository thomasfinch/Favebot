//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TFNAttributedTextViewDelegate.h"
#import "TFNPressTouchDetectorDelegate.h"
#import "TFNTwitterAuthenticated.h"

@class NSString, TFNAttributedTextView, TFNPressTouchDetector, TFNTwitterAccount, TFNTwitterTagSet, UIColor, UIFont, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface T1TagSetView : UIView <TFNAttributedTextViewDelegate, TFNPressTouchDetectorDelegate, TFNTwitterAuthenticated>
{
    BOOL _needsUpdateTextModel;
    UIImageView *_iconView;
    TFNAttributedTextView *_attributedTextView;
    UIColor *_originalBackgroundColor;
    TFNPressTouchDetector *_pressTouchDetector;
    BOOL _showAccountUserFirst;
    BOOL _singleLine;
    BOOL _summarize;
    BOOL _selectionEnabled;
    BOOL _highlightEnabled;
    TFNTwitterAccount *_account;
    id <T1TagSetViewDelegate> _delegate;
    TFNTwitterTagSet *_tagSet;
    NSString *_titleForEmptyTagSet;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_boldFont;
}

+ (struct CGSize)sizeForTagSet:(id)arg1 account:(id)arg2 font:(id)arg3 boldFont:(id)arg4 icon:(id)arg5 singleLine:(BOOL)arg6 summarize:(BOOL)arg7 showAccountUserFirst:(BOOL)arg8 selectionEnabled:(BOOL)arg9 highlightEnabled:(BOOL)arg10 inWidth:(float)arg11;
+ (float)selectionPadding;
@property(nonatomic) BOOL highlightEnabled; // @synthesize highlightEnabled=_highlightEnabled;
@property(nonatomic) BOOL selectionEnabled; // @synthesize selectionEnabled=_selectionEnabled;
@property(nonatomic) BOOL summarize; // @synthesize summarize=_summarize;
@property(nonatomic) BOOL singleLine; // @synthesize singleLine=_singleLine;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *titleForEmptyTagSet; // @synthesize titleForEmptyTagSet=_titleForEmptyTagSet;
@property(retain, nonatomic) TFNTwitterTagSet *tagSet; // @synthesize tagSet=_tagSet;
@property(nonatomic) __weak id <T1TagSetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)pressTouchDetector:(id)arg1 pressEnded:(id)arg2 withEvent:(id)arg3 forGestureType:(int)arg4;
- (BOOL)pressTouchDetector:(id)arg1 allowsLongPress:(id)arg2 withEvent:(id)arg3;
- (void)pressTouchDetector:(id)arg1 pressBegan:(id)arg2 withEvent:(id)arg3;
- (void)attributedTextView:(id)arg1 didLongPressRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2;
- (void)_updateTextModelIfNeeded;
- (id)_tagsToDisplay;
- (id)_textModelAndAddRangeToRanges:(id)arg1 inWidth:(float)arg2;
- (id)_truncateText:(id)arg1 forTag:(id)arg2 inRange:(struct _NSRange)arg3 andAddToRanges:(id)arg4 byReducingSpace:(inout float *)arg5;
- (id)_truncateTextForUserTag:(id)arg1 inRange:(struct _NSRange)arg2 andAddToRanges:(id)arg3 byReducingSpace:(inout float *)arg4;
- (id)_attributedStringForYou;
- (id)_attributedStringForUserTag:(id)arg1;
@property(retain, nonatomic) UIColor *highlightColor;
@property(nonatomic) BOOL showAccountUserFirst;
@property(retain, nonatomic) UIImage *icon;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)_iconViewFrame;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)_selectionPadding;
- (void)_setNeedsUpdateTextModel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

