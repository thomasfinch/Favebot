//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHShadowedScrollViewController.h"

@class NSArray, NSMutableArray, PTHSettingOption, PTHSettingsControlCell;

@interface PTHSettingsOptionsViewController : PTHShadowedScrollViewController
{
    NSMutableArray *_cells;
    NSArray *_options;
    PTHSettingOption *_selectedOption;
    PTHSettingsControlCell *_selectedCell;
    CDUnknownBlockType _valueChangedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType valueChangedBlock; // @synthesize valueChangedBlock=_valueChangedBlock;
@property(retain, nonatomic) PTHSettingsControlCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(retain, nonatomic) PTHSettingOption *selectedOption; // @synthesize selectedOption=_selectedOption;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
- (void)dealloc;
- (void)viewDidUnload;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_selectedCell:(id)arg1;
@property(nonatomic) int selectedValueType;
@property(retain, nonatomic) id selectedValue;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

