//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1TabNavigationController.h"

#import "T1PhoneSearchContainerViewControllerDelegate.h"
#import "TFNNavigationControllerTransitionProvider.h"

__attribute__((visibility("hidden")))
@interface T1PhoneTabNavigationController : T1TabNavigationController <T1PhoneSearchContainerViewControllerDelegate, TFNNavigationControllerTransitionProvider>
{
    BOOL _isAnimatingSearch;
}

@property(nonatomic) BOOL isAnimatingSearch; // @synthesize isAnimatingSearch=_isAnimatingSearch;
- (void)searchContainerViewControllerDidCancel:(id)arg1;
- (id)navigationControllerTransitionForOperation:(int)arg1;
- (void)addStandardBarButtonItems:(id)arg1;
- (void)showDraftsFromBarButtonItem:(id)arg1;
- (void)showComposeFromBarButtonItem:(id)arg1;
- (void)showSearchFromBarButtonItem:(id)arg1;
- (id)init;

@end

