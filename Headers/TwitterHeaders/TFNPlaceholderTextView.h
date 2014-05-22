//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "TFNPlaceholderTextViewProvider.h"

@class NSString, UIColor, UILabel;

@interface TFNPlaceholderTextView : UITextView <TFNPlaceholderTextViewProvider>
{
    BOOL _acceptScrolls;
    NSString *_placeholderText;
    UIColor *_placeholderTextColor;
    UILabel *_placeholderTextLabel;
}

@property(retain, nonatomic) UILabel *placeholderTextLabel; // @synthesize placeholderTextLabel=_placeholderTextLabel;
@property(nonatomic) BOOL acceptScrolls; // @synthesize acceptScrolls=_acceptScrolls;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void).cxx_destruct;
- (void)_textChanged:(id)arg1;
- (void)_updatePlaceholder;
- (void)_initialize;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)setPlaceHolderNumberOfLines:(unsigned int)arg1 lineBreakMode:(int)arg2;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
@property(readonly, nonatomic) BOOL showingPlaceholder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

