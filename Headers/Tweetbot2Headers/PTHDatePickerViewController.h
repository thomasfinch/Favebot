//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

@class UIDatePicker, UINavigationBar;

@interface PTHDatePickerViewController : PTHViewController
{
    UIDatePicker *_pickerView;
    UINavigationBar *_navigationBar;
}

@property(readonly, nonatomic) UIDatePicker *pickerView; // @synthesize pickerView=_pickerView;
- (void)dealloc;
- (void)viewDidUnload;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
@property(readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)loadView;
- (id)doneTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

