//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotStatusCursorController.h"

#import "PTHTweetbotTimelineListControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class PTHHelpPointer, PTHTweetbotAccount, PTHTweetbotList, PTHTweetbotTimelineListController, UIView;

@interface PTHTweetbotHomeTimelineController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate, PTHTweetbotTimelineListControllerDelegate>
{
    PTHTweetbotAccount *_account;
    PTHTweetbotTimelineListController *_listController;
    UIView *_listShadowView;
    UIView *_mainShadowView;
    PTHHelpPointer *_navBarHelpPointer;
    BOOL _toggling;
    PTHTweetbotList *_list;
}

@property(retain, nonatomic) PTHTweetbotList *list; // @synthesize list=_list;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_toggleScroll;
- (void)_updateUnreadTab;
- (id)nothingFoundTitle;
- (id)searchTitle;
- (void)didSelectList:(id)arg1;
- (void)toggleLists:(id)arg1;
- (void)_resetStatusHeight:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

