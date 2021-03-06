//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1PersistentComposeBarViewController.h"

#import "T1FiltersViewControllerDelegate.h"

@class T1MediaChooser, TFNHUD;

__attribute__((visibility("hidden")))
@interface T1PadPersistentComposeBarViewController : T1PersistentComposeBarViewController <T1FiltersViewControllerDelegate>
{
    TFNHUD *_hud;
    T1MediaChooser *_mediaChooser;
}

@property(retain, nonatomic) T1MediaChooser *mediaChooser; // @synthesize mediaChooser=_mediaChooser;
- (void).cxx_destruct;
- (void)_handleImageInfoFromPhotoPicker:(id)arg1;
- (void)filtersViewControllerDidCancel:(id)arg1;
- (void)filtersViewController:(id)arg1 didEditImage:(id)arg2;
- (void)_didChooseImage:(id)arg1;
- (void)composeBarDidSelectMediaGallery:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end

