//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCPlayerInstance.h"

@class MPMoviePlayerController;

@interface TCNormalPlayerInstance : TCPlayerInstance
{
    MPMoviePlayerController *_moviePlayer;
    BOOL _hasStartedPlaying;
    BOOL _hasPlayed;
    BOOL _didFailToPlay;
}

- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)_playbackDidFinish:(id)arg1;
- (void)_playerLoadStateDidChange:(id)arg1;
- (void)_playbackStateDidChange:(id)arg1;
- (void)dispose;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 element:(id)arg2 sourceURL:(id)arg3;

@end

