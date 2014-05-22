//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "TFNNavigationStack.h"

@class NSArray, UIViewController;

@interface TFNNavigationStackController : UINavigationController <TFNNavigationStack>
{
}

- (void)_performCompletion:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
- (id)popToRootAndPushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)popToRootAndPushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)replaceTopViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)replaceTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) UIViewController *topViewController;
@property(readonly, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) UIViewController *visibleViewController;

@end

