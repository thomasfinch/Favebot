//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "T1DirectMessageTopUsersViewControllerDelegate.h"

@class NSString, T1NewDirectMessageMultiSelectionTopUsersViewController;

@protocol T1NewDirectMessageMultiSelectionTopUsersViewControllerDelegate <NSObject, T1DirectMessageTopUsersViewControllerDelegate>
- (BOOL)newDirectMessageMultiSelectionTopUsersViewController:(T1NewDirectMessageMultiSelectionTopUsersViewController *)arg1 shouldShowActivityIndicatorUsername:(NSString *)arg2;
- (BOOL)newDirectMessageMultiSelectionTopUsersViewController:(T1NewDirectMessageMultiSelectionTopUsersViewController *)arg1 shouldSelectUsername:(NSString *)arg2;
@end
