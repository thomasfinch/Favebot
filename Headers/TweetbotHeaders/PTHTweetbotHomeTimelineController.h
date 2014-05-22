/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotStatusCursorController.h"
#import "UIGestureRecognizerDelegate.h"

@class PTHTweetbotAccount, UILongPressGestureRecognizer, PTHTweetbotHomeTimelineListPickerController, PTHTweetbotList;

__attribute__((visibility("hidden")))
@interface PTHTweetbotHomeTimelineController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate> {
	PTHTweetbotAccount* _account;
	UILongPressGestureRecognizer* _listPickerRecognizer;
	PTHTweetbotHomeTimelineListPickerController* _listPicker;
	PTHTweetbotList* _list;
}
@property(retain, nonatomic) PTHTweetbotList* list;
-(void).cxx_destruct;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)parentViewController;
-(void)_pickList:(id)list;
-(void)willMoveToParentViewController:(id)parentViewController;
-(void)_updateUnreadTab;
-(id)nothingFoundTitle;
-(id)searchTitle;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(id)initWithAccount:(id)account;
@end

