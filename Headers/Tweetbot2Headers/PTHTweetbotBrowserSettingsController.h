//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHShadowedScrollViewController.h"

@class PTHSettingsControlCell;

@interface PTHTweetbotBrowserSettingsController : PTHShadowedScrollViewController
{
    PTHSettingsControlCell *_selectedCell;
}

@property(retain, nonatomic) PTHSettingsControlCell *selectedCell; // @synthesize selectedCell=_selectedCell;
- (void)dealloc;
- (void)changeOpenLinksInBrowser:(id)arg1;
- (void)_selectedCell:(id)arg1;
- (void)loadView;

@end

