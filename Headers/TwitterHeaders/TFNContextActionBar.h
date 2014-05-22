//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TFNTwitterAccount, TFNTwitterStatus, UILabel;

@interface TFNContextActionBar : NSObject
{
    NSMutableArray *_buttons;
    NSMutableArray *_countButtons;
    UILabel *countsLabel;
    NSMutableArray *_actions;
    struct CGRect _buttonBounds;
    BOOL _showCounts;
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_status;
    float _height;
}

+ (id)contextActionBarWithActions:(id)arg1 status:(id)arg2 showCounts:(BOOL)arg3 account:(id)arg4;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) BOOL showCounts; // @synthesize showCounts=_showCounts;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_countsAboveActionsText;
- (BOOL)_shouldDisplayCountsNextToActions;
- (id)buttonAtIndex:(unsigned int)arg1;
- (void)_layoutActionButtonsWithoutCountsForBounds:(struct CGRect)arg1;
- (void)_layoutActionButtonsWithCountsForBounds:(struct CGRect)arg1;
- (void)layoutActionButtonsForBounds:(struct CGRect)arg1;
- (BOOL)_layoutInline;
- (void)removeActionButtonsFromView;
- (void)addActionButtonsToView:(id)arg1;
- (void)_animateInButtons;
- (void)updateActionButtonImage:(id)arg1 highlightedImage:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_countButtonTapped:(id)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)_setupActionButtonForIndex:(unsigned int)arg1;
- (id)initWithActions:(id)arg1 status:(id)arg2 showCounts:(BOOL)arg3 account:(id)arg4;

@end
