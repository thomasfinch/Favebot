//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1UsersViewController.h"

__attribute__((visibility("hidden")))
@interface T1SlideshowUserListViewController : T1UsersViewController
{
}

- (BOOL)shouldShowBioForUserOrRecommendation:(id)arg1 atIndexPath:(id)arg2;
- (void)_done:(id)arg1;
- (void)setUserIDs:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)setModalPresentationHeightForPresentingViewController:(id)arg1;
- (void)_didSelectUser:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <T1SlideshowUserListViewControllerDelegate> delegate;

@end

