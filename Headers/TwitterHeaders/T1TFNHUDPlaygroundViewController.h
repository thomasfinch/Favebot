//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

@class TFNHUD;

__attribute__((visibility("hidden")))
@interface T1TFNHUDPlaygroundViewController : TFNItemsDataViewController
{
    int _customStatusBarStyle;
    TFNHUD *_hud;
}

@property(retain, nonatomic) TFNHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) int customStatusBarStyle; // @synthesize customStatusBarStyle=_customStatusBarStyle;
- (void).cxx_destruct;
- (void)_showHUD;
- (void)_toggleStatusBarStyle;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

