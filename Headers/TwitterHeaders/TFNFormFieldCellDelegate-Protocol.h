//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNFormFieldCell, UITextField;

@protocol TFNFormFieldCellDelegate <NSObject>
- (void)formFieldCellWillAnimateToShowError:(TFNFormFieldCell *)arg1;
- (BOOL)formFieldCell:(TFNFormFieldCell *)arg1 textFieldShouldReturn:(UITextField *)arg2;
- (void)formFieldCellTextFieldDidBeginEditing:(TFNFormFieldCell *)arg1;
@end
