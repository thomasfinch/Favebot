//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class NSString, TFNButton, TFNTwitterCustomTimeline, TFNTwitterUser, UILabel;

__attribute__((visibility("hidden")))
@interface T1CustomTimelineHeaderCell : TFNTableViewCell
{
    UILabel *_nameLabel;
    UILabel *_authorLabel;
    UILabel *_descriptionLabel;
    TFNButton *_followButton;
    BOOL _longPressRecursionGuard;
    BOOL _showAuthor;
    id <T1CustomTimelineHeaderDelegate> _delegate;
    TFNTwitterCustomTimeline *_timeline;
    TFNTwitterUser *_author;
    CDUnknownBlockType _tapBlock;
}

+ (id)authorTextFromUser:(id)arg1;
+ (float)_maxWidthForButton:(id)arg1;
+ (float)heightForName:(id)arg1 description:(id)arg2 author:(id)arg3 showFollowButton:(BOOL)arg4 tableWidth:(float)arg5 contentPadding:(struct UIEdgeInsets)arg6;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) BOOL showAuthor; // @synthesize showAuthor=_showAuthor;
@property(retain, nonatomic) TFNTwitterUser *author; // @synthesize author=_author;
@property(nonatomic) __weak TFNTwitterCustomTimeline *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) __weak id <T1CustomTimelineHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_followTapped:(id)arg1;
- (void)_tappedHeader:(id)arg1;
- (void)setShowsFollowButton:(BOOL)arg1;
- (void)layoutSubviews;
@property(nonatomic, setter=setFollowing:) BOOL isFollowing;
@property(copy, nonatomic) NSString *description;
@property(copy, nonatomic) NSString *name;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
