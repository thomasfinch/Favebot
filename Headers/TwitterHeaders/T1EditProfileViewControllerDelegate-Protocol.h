//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class T1EditProfileViewController;

@protocol T1EditProfileViewControllerDelegate <NSObject>
- (void)editProfileViewController:(T1EditProfileViewController *)arg1 didSave:(BOOL)arg2;
- (void)editProfileViewControllerWillSave:(T1EditProfileViewController *)arg1;

@optional
- (void)editProfileViewControllerWillRemoveHeader:(T1EditProfileViewController *)arg1;
- (void)editProfileViewControllerWillChangeHeader:(T1EditProfileViewController *)arg1;
@end

