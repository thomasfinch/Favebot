//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1ComposeButtonBackgroundView.h"

@class NSMutableSet, T1PhoneComposeButtonBackgroundDivotView, UIView;

__attribute__((visibility("hidden")))
@interface T1PhoneComposeButtonBackgroundView : T1ComposeButtonBackgroundView
{
    UIView *_top;
    T1PhoneComposeButtonBackgroundDivotView *_bottom;
    NSMutableSet *_buttons;
    UIView *_selectedButton;
}

- (void).cxx_destruct;
- (void)hideDivotForButton:(id)arg1;
- (void)hideDivot;
- (void)showDivotForButton:(id)arg1;
- (void)addButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

