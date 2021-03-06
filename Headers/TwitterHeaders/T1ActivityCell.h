//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class T1ActivityFacepileView, TFNAttributedTextView, TFNTwitterActivityItem, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1ActivityCell : TFNTableViewCell
{
    T1ActivityFacepileView *_facepileView;
    TFNAttributedTextView *_titleView;
    UIImageView *_luckyCharmImageView;
    UILabel *_subTextLabel;
    UILabel *_fullnameLabel;
    UILabel *_usernameLabel;
    UILabel *_statusTextLabel;
    BOOL _hasFacepile;
    BOOL _statusSummary;
    BOOL _userSummary;
    int _adapterStyle;
    TFNTwitterActivityItem *_activityItem;
}

+ (float)activityCellHeight:(float)arg1 item:(id)arg2 style:(int)arg3;
@property(retain, nonatomic) TFNTwitterActivityItem *activityItem; // @synthesize activityItem=_activityItem;
@property(nonatomic) int adapterStyle; // @synthesize adapterStyle=_adapterStyle;
- (void).cxx_destruct;
- (void)_updateAccessibility:(id)arg1;
- (id)_luckyCharmImage:(id)arg1;
- (void)_hideSummaryLabels;
- (void)_updateFacepileView:(id)arg1 isRTL:(BOOL)arg2;
- (void)_layoutUserSummary:(struct CGRect)arg1;
- (void)_layoutStatusSummary:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

