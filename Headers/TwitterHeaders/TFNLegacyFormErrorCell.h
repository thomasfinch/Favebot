//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNLegacyFormCell.h"

@class TFNNoteBackgroundLayer, UILabel;

@interface TFNLegacyFormErrorCell : TFNLegacyFormCell
{
    TFNNoteBackgroundLayer *backgroundLayer;
    BOOL hasLoadedViews;
    BOOL bottomRow;
    UILabel *errorMessageLabel;
}

@property(nonatomic) BOOL bottomRow; // @synthesize bottomRow;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadViews;
- (void)_updateMask;
- (void)applyMask;

@end

