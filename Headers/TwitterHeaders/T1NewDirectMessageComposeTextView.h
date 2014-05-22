//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor, UILabel, UIResponder;

__attribute__((visibility("hidden")))
@interface T1NewDirectMessageComposeTextView : UITextView
{
    BOOL _canGrow;
    BOOL _needsNewlineCaretCorrection;
    BOOL _ignoreContentSizeUpdates;
    float _maxHeight;
    NSString *_placeholderText;
    UIColor *_placeholderTextColor;
    UIResponder *_forwardingResponder;
    UILabel *_placeholderTextLabel;
}

+ (float)contentHeightAdjustment;
@property(retain, nonatomic) UILabel *placeholderTextLabel; // @synthesize placeholderTextLabel=_placeholderTextLabel;
@property(nonatomic) BOOL ignoreContentSizeUpdates; // @synthesize ignoreContentSizeUpdates=_ignoreContentSizeUpdates;
@property(nonatomic) BOOL needsNewlineCaretCorrection; // @synthesize needsNewlineCaretCorrection=_needsNewlineCaretCorrection;
@property(nonatomic) BOOL canGrow; // @synthesize canGrow=_canGrow;
@property(retain, nonatomic) UIResponder *forwardingResponder; // @synthesize forwardingResponder=_forwardingResponder;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) float maxHeight; // @synthesize maxHeight=_maxHeight;
- (void).cxx_destruct;
- (void)_textChanged:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (id)nextResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
