//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1MediaStreamViewController.h"

@class T1StreamPoller;

__attribute__((visibility("hidden")))
@interface T1ProfileMediaStreamViewController : T1MediaStreamViewController
{
    BOOL _firstLoad;
    T1StreamPoller *_poller;
}

@property(retain, nonatomic) T1StreamPoller *poller; // @synthesize poller=_poller;
@property(nonatomic) BOOL firstLoad; // @synthesize firstLoad=_firstLoad;
- (void).cxx_destruct;
- (void)_startPollingAfterFirstLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setStream:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

