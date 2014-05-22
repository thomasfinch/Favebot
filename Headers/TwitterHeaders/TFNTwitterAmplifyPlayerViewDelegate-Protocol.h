//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNTwitterAccount, TFNTwitterAmplifyAVPlayer, TFNTwitterAmplifyPlayerView, TFNTwitterStatus, UIButton;

@protocol TFNTwitterAmplifyPlayerViewDelegate <NSObject>
- (TFNTwitterStatus *)tweetForAmplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 playbackTimeDidChange:(double)arg2 duration:(double)arg3;
- (void)amplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 playbackStateDidChange:(BOOL)arg2;
- (BOOL)amplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 isPlayerLastInQueue:(TFNTwitterAmplifyAVPlayer *)arg2;
- (void)amplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 didPerformAction:(NSString *)arg2 withElement:(NSString *)arg3;
- (void)amplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 didPerformAction:(NSString *)arg2;
- (void)amplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 didChangeControlState:(BOOL)arg2;
- (void)amplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1 didBeginScrubLastVideo:(BOOL)arg2;
- (void)amplifyPlayerViewWillExitFullscreen:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerViewWillEnterFullscreen:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerViewWillClose:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerViewViewRelatedVideo:(TFNTwitterAmplifyPlayerView *)arg1;
- (BOOL)amplifyPlayerViewHasRelatedVideos:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerViewDidReplayVideos:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerViewDidEngageRetweet:(TFNTwitterAmplifyPlayerView *)arg1 viaButton:(UIButton *)arg2;
- (void)amplifyPlayerViewDidEngageReply:(TFNTwitterAmplifyPlayerView *)arg1 viaButton:(UIButton *)arg2;
- (void)amplifyPlayerViewDidEngageMore:(TFNTwitterAmplifyPlayerView *)arg1 viaButton:(UIButton *)arg2;
- (void)amplifyPlayerViewDidEngageFavorite:(TFNTwitterAmplifyPlayerView *)arg1 viaButton:(UIButton *)arg2;
- (void)amplifyPlayerViewDidEndScrub:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerViewControlWillHide:(TFNTwitterAmplifyPlayerView *)arg1;
- (void)amplifyPlayerViewControlWillShow:(TFNTwitterAmplifyPlayerView *)arg1;
- (TFNTwitterAccount *)accountForAmplifyPlayerView:(TFNTwitterAmplifyPlayerView *)arg1;
@end
