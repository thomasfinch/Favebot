//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCPlayerInstance.h"

@class AVPlayer, TFNAVPlayerView, TFNDownload;

@interface TCAnimatedGifPlayerInstance : TCPlayerInstance
{
    BOOL _playerIsVisible;
    BOOL _shouldAutoplay;
    AVPlayer *_player;
    TFNAVPlayerView *_playerView;
    TFNDownload *_download;
}

+ (void)_loopingPlayerItemFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_playerItemDidReachEnd:(id)arg1;
- (void)_playerViewTapped;
- (void)_autoplayIfAppropriate;
- (BOOL)_isPlayerRunning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_downloadDidChange;
- (void)unpauseIfAppropriate;
- (void)pause;
- (void)play;
- (void)dispose;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 element:(id)arg2 sourceURL:(id)arg3;

@end

