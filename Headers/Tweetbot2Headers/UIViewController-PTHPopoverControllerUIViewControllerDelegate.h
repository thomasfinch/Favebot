//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PTHPopoverController;

@interface UIViewController (PTHPopoverControllerUIViewControllerDelegate)
- (void)presentWithNavigationController:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentWithNavigationController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 permittedArrowDirections:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentController:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 permittedArrowDirections:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic, setter=setPTHPopoverController:) PTHPopoverController *pthPopoverController;
@end
