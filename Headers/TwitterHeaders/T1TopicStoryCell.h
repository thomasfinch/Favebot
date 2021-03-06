//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class TFNAttributedTextView, TFNTwitterTopicStory, UIImageView;

__attribute__((visibility("hidden")))
@interface T1TopicStoryCell : TFNTableViewCell
{
    UIImageView *_pictureImageView;
    TFNAttributedTextView *_socialProofTextView;
    BOOL _isSummarized;
    TFNTwitterTopicStory *_topicStory;
}

+ (id)cellForTopicStory:(id)arg1 tableView:(id)arg2 summarize:(BOOL)arg3;
+ (float)heightForTopicStory:(id)arg1 summarize:(BOOL)arg2 tableWidth:(float)arg3 contentPadding:(struct UIEdgeInsets)arg4;
+ (void)drawVideoStoryOverlayInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
@property(retain, nonatomic) TFNTwitterTopicStory *topicStory; // @synthesize topicStory=_topicStory;
@property(nonatomic) BOOL isSummarized; // @synthesize isSummarized=_isSummarized;
- (void).cxx_destruct;
- (id)_tweetSummaryText:(BOOL)arg1;
- (id)_trendingTopicText:(BOOL)arg1;
- (id)_socialProofText:(BOOL)arg1;
- (void)layoutSubviews;
- (void)cleanup;
- (void)_storyDidUpdate:(id)arg1;
- (void)_update;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

