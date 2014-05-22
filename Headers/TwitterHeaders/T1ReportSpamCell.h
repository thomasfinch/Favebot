//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

#import "TFNAttributedTextViewDelegate.h"

@class NSString, TFNAttributedTextView, UISwitch;

__attribute__((visibility("hidden")))
@interface T1ReportSpamCell : TFNTableViewCell <TFNAttributedTextViewDelegate>
{
    TFNAttributedTextView *_spamTextView;
    TFNAttributedTextView *_spamDetailTextView;
    CDUnknownBlockType _spamDetailTextLinkTappedBlock;
    UISwitch *_switch;
    BOOL _checkmarkDisplayed;
    BOOL _switchDisplayed;
    NSString *_text;
    NSString *_detailText;
    unsigned int _type;
    CDUnknownBlockType _switchDidUpdateBlock;
}

+ (int)_accessoryTypeForSpamCellType:(unsigned int)arg1;
+ (float)heightForText:(id)arg1 detailText:(id)arg2 spamCellType:(unsigned int)arg3 tableWidth:(float)arg4;
@property(copy, nonatomic) CDUnknownBlockType switchDidUpdateBlock; // @synthesize switchDidUpdateBlock=_switchDidUpdateBlock;
@property(nonatomic, getter=isSwitchDisplayed) BOOL switchDisplayed; // @synthesize switchDisplayed=_switchDisplayed;
@property(nonatomic, getter=isCheckmarkDisplayed) BOOL checkmarkDisplayed; // @synthesize checkmarkDisplayed=_checkmarkDisplayed;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2;
- (void)layoutSubviews;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setDetailText:(id)arg1 withLinkRanges:(id)arg2 tapBlock:(CDUnknownBlockType)arg3;
- (void)_switchAction:(id)arg1;
- (id)_switchAccessoryView;
- (void)setText:(id)arg1 withHighlightRanges:(id)arg2;
@property(nonatomic, getter=isSwitchOn) BOOL switchOn;
@property(readonly, nonatomic) int paddingAccessoryType;
- (void)_resetType;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
