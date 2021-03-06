//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCPlayerInstance.h"

#import "TFNVinePlayerManagerDelegate.h"

@class TFNVinePlayerManager;

@interface TCVinePlayerInstance : TCPlayerInstance <TFNVinePlayerManagerDelegate>
{
    BOOL _playerIsVisible;
    BOOL _shouldAutoplay;
    TFNVinePlayerManager *_manager;
}

- (void).cxx_destruct;
- (void)_playerViewTapped;
- (void)_autoplayIfAppropriate;
- (void)vinePlayerManagerReadyToPlay:(id)arg1;
- (void)vinePlayerManagerFinishedDownload:(id)arg1;
- (void)disableAutoPlay;
- (void)unpauseIfAppropriate;
- (void)pause;
- (void)play;
- (void)dispose;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 element:(id)arg2 sourceURL:(id)arg3;

@end

