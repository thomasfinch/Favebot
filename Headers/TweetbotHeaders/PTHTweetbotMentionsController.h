/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotStatusCursorController.h"
#import "UIGestureRecognizerDelegate.h"

@class PTHTweetbotUser;

__attribute__((visibility("hidden")))
@interface PTHTweetbotMentionsController : PTHTweetbotStatusCursorController <UIGestureRecognizerDelegate> {
	PTHTweetbotUser* _tweetbotUser;
}
-(void).cxx_destruct;
-(void)_playNewItemsSoundIfNeeded;
-(void)_updateUnreadTab;
-(id)nothingFoundTitle;
-(id)searchTitle;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)shouldShowRemoteNotification:(id)notification;
-(id)initWithTweetbotUser:(id)tweetbotUser;
@end

