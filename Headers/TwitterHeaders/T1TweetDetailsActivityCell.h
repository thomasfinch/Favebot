//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class T1ActivitySummaryView, T1TweetDetailsActionView;

__attribute__((visibility("hidden")))
@interface T1TweetDetailsActivityCell : TFNTableViewCell
{
    T1ActivitySummaryView *_activitySummaryView;
    T1TweetDetailsActionView *_actionView;
    int _mode;
}

@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, nonatomic) T1TweetDetailsActionView *actionView;
@property(readonly, nonatomic) T1ActivitySummaryView *activitySummaryView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

