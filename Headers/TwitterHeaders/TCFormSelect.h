//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCFormFieldShowingText.h"

#import "TCFormSelectLabelDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, TCFormSelectLabel, TCFormSelectOption, UIPickerView;

@interface TCFormSelect : TCFormFieldShowingText <TCFormSelectLabelDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
{
    TCFormSelectLabel *_labelView;
    UIPickerView *_pickerView;
    BOOL _didSelect;
    NSArray *_options;
    TCFormSelectOption *_selectedOption;
}

@property(retain, nonatomic) TCFormSelectOption *selectedOption; // @synthesize selectedOption=_selectedOption;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (id)_stringForOption:(id)arg1;
- (int)_pickerRowCount;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)formSelectLabelDidEndEditing:(id)arg1;
- (void)formSelectLabelWillEndEditing:(id)arg1;
- (void)formSelectLabelDidBeginEditing:(id)arg1;
- (void)formSelectLabelWillBeginEditing:(id)arg1;
- (void)beginEditing;
- (BOOL)isEditing;
- (void)getFormParameterKey:(id *)arg1 value:(id *)arg2;
- (void)prepareForReuse;
- (void)resetSelectedOption;
- (BOOL)wantsUserInteraction;
- (void)updateViewProperties;
- (id)_unselectedLabelText;
- (void)configureView;
- (BOOL)drawsContent;
- (float)measureInAxis:(int)arg1 withConstraint:(float)arg2;
- (void)dispose;

@end

