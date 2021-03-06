//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TFNHighlightControl, TFNTwitterStatusActivitySummary, UILabel;

__attribute__((visibility("hidden")))
@interface T1ActivitySummaryView : UIView
{
    TFNHighlightControl *_repliesControl;
    UILabel *_repliesLabel;
    id _repliesTarget;
    SEL _repliesAction;
    TFNHighlightControl *_retweetsControl;
    UILabel *_retweetsLabel;
    id _retweetsTarget;
    SEL _retweetsAction;
    TFNHighlightControl *_favoritesControl;
    UILabel *_favoritesLabel;
    id _favoritesTarget;
    SEL _favoritesAction;
    TFNTwitterStatusActivitySummary *_activitySummary;
    int _style;
}

+ (float)activityDefaultSpacing;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) TFNTwitterStatusActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
- (void).cxx_destruct;
- (void)_favoritesAction;
- (void)_retweetsAction;
- (void)_repliesAction;
- (struct CGRect)favoritesFrame;
- (void)setFavoritesTarget:(id)arg1 action:(SEL)arg2;
- (struct CGRect)retweetsFrame;
- (void)setRetweetsTarget:(id)arg1 action:(SEL)arg2;
- (struct CGRect)repliesFrame;
- (void)setRepliesTarget:(id)arg1 action:(SEL)arg2;
- (id)_attributedStatLabelForCount:(id)arg1 format:(id)arg2;
- (id)_attributedFavoritesLabel;
- (id)_attributedRetweetsLabel;
- (id)_attributedRepliesLabel;
- (void)_updateStyle;
- (void)update;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

