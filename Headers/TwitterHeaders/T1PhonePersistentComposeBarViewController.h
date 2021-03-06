//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1PersistentComposeBarViewController.h"

#import "T1ComposePhotoGalleryViewControllerDelegate.h"
#import "T1FiltersViewControllerDelegate.h"
#import "T1PhotoPickerViewControllerDelegate.h"

@class T1ComposePhotoGalleryNavController, T1ComposePhotoGalleryViewController, T1FiltersViewController, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface T1PhonePersistentComposeBarViewController : T1PersistentComposeBarViewController <T1ComposePhotoGalleryViewControllerDelegate, T1FiltersViewControllerDelegate, T1PhotoPickerViewControllerDelegate>
{
    T1ComposePhotoGalleryNavController *_galleryNavigationViewController;
    T1ComposePhotoGalleryViewController *_galleryViewController;
    T1FiltersViewController *_filtersViewController;
    UIViewController *_underKeyboardHostViewController;
    UIView *_inputAccessoryView;
    UIView *_mediaGalleryTransitioningSnapshotView;
}

@property(retain, nonatomic) UIView *mediaGalleryTransitioningSnapshotView; // @synthesize mediaGalleryTransitioningSnapshotView=_mediaGalleryTransitioningSnapshotView;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(nonatomic) __weak UIViewController *underKeyboardHostViewController; // @synthesize underKeyboardHostViewController=_underKeyboardHostViewController;
- (void).cxx_destruct;
- (void)composeBarDidSelectMediaGallery:(id)arg1;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPicker:(id)arg1 didChooseImageWithInfo:(id)arg2;
- (id)scribeSectionForFiltersViewController:(id)arg1;
- (void)filtersViewControllerDidCancel:(id)arg1;
- (void)filtersViewController:(id)arg1 didEditImage:(id)arg2;
- (BOOL)_showingMediaGallery;
- (void)photoGalleryController:(id)arg1 didSelectButton:(unsigned int)arg2;
- (void)photoGalleryController:(id)arg1 didSelectAsset:(id)arg2;
- (void)_setupGallery;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_handleImageInfoFromPhotoPicker:(id)arg1 sourceForScribe:(id)arg2;
- (void)_cleanupGallery;
- (void)cancelMediaEditing;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (BOOL)animatingToPreviousViewController;
- (id)activeEditingView;

// Remaining properties
@property(readonly, nonatomic) float photoSize;

@end

