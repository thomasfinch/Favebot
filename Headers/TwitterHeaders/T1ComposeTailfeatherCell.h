//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TFNTwitterAmplifyPlayerDelegate.h"

@class TFNDownload, TFNTwitterAmplifyPlayer, TFNTwitterTailfeatherVideo, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface T1ComposeTailfeatherCell : UITableViewCell <TFNTwitterAmplifyPlayerDelegate>
{
    TFNTwitterTailfeatherVideo *_video;
    UIView *_containerView;
    UIImageView *_thumbnailImageView;
    TFNTwitterAmplifyPlayer *_amplifyPlayer;
    UIActivityIndicatorView *_loadingIndicator;
    UIButton *_playButton;
    UILabel *_titleLabel;
    UIView *_adWarningContainer;
    UILabel *_adWarningLabel;
    TFNDownload *_thumbnailImageDownload;
    BOOL _disposed;
    id <T1ComposeTailfeatherCellDelegate> _delegate;
}

+ (float)descriptionHeightWithVideo:(id)arg1;
+ (float)descriptionWidth;
+ (float)cellHeightWithVideo:(id)arg1;
@property(nonatomic) __weak id <T1ComposeTailfeatherCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)instanceURLVMAPForAmplifyPlayer:(id)arg1;
- (void)amplifyPlayerPlaybackDidUserResume:(id)arg1;
- (void)amplifyPlayerPlaybackDidStart:(id)arg1;
- (void)amplifyPlayerPlaybackDidReplay:(id)arg1;
- (id)tweetForAmplifyPlayer:(id)arg1;
- (id)scribeBaseParametersForAmplifyPlayer:(id)arg1;
- (id)inlineParentViewForAmplifyPlayer:(id)arg1;
- (struct CGRect)inlineFrameForAmplifyPlayer:(id)arg1;
- (void)amplifyPlayer:(id)arg1 attachPlayerView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)amplifyPlayerShouldSkipAds:(id)arg1;
- (BOOL)amplifyPlayerShouldPlayInlineOnly:(id)arg1;
- (id)accountForAmplifyPlayer:(id)arg1;
- (void)_resetPlaybackElements;
- (void)_thumbnailDownloadDidChange;
- (void)_attachAmplify;
- (void)_animateHideAdWarning;
- (void)_animateRollingAdWarning;
- (void)_startPlayback;
- (void)stopPlayback;
- (void)layoutSubviews;
- (void)_startDownloadThumbnailImageWithURL:(id)arg1;
- (id)_createAdWarningLabel;
- (id)_createAdWarningContainerView;
- (id)_createDescriptionLabelWithDescription:(id)arg1;
- (id)_createTitleLabelWithTitle:(id)arg1 attachButton:(id)arg2;
- (id)_createAttachButton;
- (id)_createLoadingIndicator;
- (id)_createPlayButton;
- (id)_createThumbnailImage;
- (id)_createContainerView;
- (void)_setupContentViewWithVideo:(id)arg1;
- (void)dealloc;
- (id)initWithVideo:(id)arg1;

@end
