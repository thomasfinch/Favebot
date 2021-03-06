//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCFormFieldShowingText.h"

#import "UITextFieldDelegate.h"

@class NSCharacterSet, NSString, UITextField;

@interface TCFormText : TCFormFieldShowingText <UITextFieldDelegate>
{
    UITextField *_textFieldView;
    NSCharacterSet *_allowedCharacterSet;
    BOOL _parsedCharacterSet;
    unsigned int _maxLength;
    int _placeholderTokenizedTextID;
    NSString *_charset;
    int _inputMode;
}

@property(nonatomic) int inputMode; // @synthesize inputMode=_inputMode;
@property(copy, nonatomic) NSString *charset; // @synthesize charset=_charset;
@property(nonatomic) int placeholderTokenizedTextID; // @synthesize placeholderTokenizedTextID=_placeholderTokenizedTextID;
@property(nonatomic) unsigned int maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (id)_charsetFromString:(id)arg1;
- (id)_allowedCharacterSet;
- (int)_keyboardType;
- (void)_scrollToVisible;
- (void)_keyboardDidShow:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)beginEditing;
- (BOOL)isEditing;
- (void)getFormParameterKey:(id *)arg1 value:(id *)arg2;
- (void)prepareForReuse;
- (BOOL)wantsUserInteraction;
- (void)updateViewProperties;
- (void)configureView;
- (BOOL)drawsContent;
- (float)measureInAxis:(int)arg1 withConstraint:(float)arg2;
- (void)dispose;

@end

