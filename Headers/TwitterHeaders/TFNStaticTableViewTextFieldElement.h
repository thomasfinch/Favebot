//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNStaticTableViewElement.h"

@class UITextField;

@interface TFNStaticTableViewTextFieldElement : TFNStaticTableViewElement
{
    UITextField *textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField;
- (void).cxx_destruct;
- (void)willSelectInTableView:(id)arg1;
- (BOOL)isSelectable;
- (id)cellForTableView:(id)arg1;

@end

