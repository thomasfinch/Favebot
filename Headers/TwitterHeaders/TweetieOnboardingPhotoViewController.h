//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNStaticTableViewController.h"

@class T1MediaChooser, TFNTwitterAccount, TweetiePromptHeaderView, UIButton, UIImage;

__attribute__((visibility("hidden")))
@interface TweetieOnboardingPhotoViewController : TFNStaticTableViewController
{
    UIButton *photoButton;
    UIImage *pickedPhoto;
    TFNTwitterAccount *account;
    TweetiePromptHeaderView *headerPromptView;
    T1MediaChooser *_mediaChooser;
}

@property(retain, nonatomic) T1MediaChooser *mediaChooser; // @synthesize mediaChooser=_mediaChooser;
@property(retain, nonatomic) UIImage *pickedPhoto; // @synthesize pickedPhoto;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)nameCell;
- (void)didTouchPhoto:(id)arg1;
- (void)uploadPhoto;
- (void)updatePreview;
- (id)defaultPhoto;
- (void)chooseExistingPhoto:(id)arg1;
- (void)takePhoto:(id)arg1;
- (void)_didFinishPickingFromMediaChooser:(id)arg1;
- (void)loadTableView;
- (void)scribeImpressionWithParameters:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)userDidUpdate:(id)arg1;
- (id)headerMessage;
- (id)headerTitle;
- (id)scribeSection;
- (id)scribePage;
- (void)dealloc;

@end
