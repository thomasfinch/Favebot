/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHWindow.h"


__attribute__((visibility("hidden")))
@interface PTHTweetbotWindow : PTHWindow {
}
+(void)doubleSwipeLeft:(id)left;
+(void)doubleSwipeRight:(id)right;
+(void)doubleSwipeUp:(id)up;
+(void)doubleSwipeDown:(id)down;
+(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
+(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
+(id)doubleLeftSwipeRecognizer;
+(id)doubleRightSwipeRecognizer;
+(id)doubleUpSwipeRecognizer;
+(id)doubleDownSwipeRecognizer;
-(void)didAddSubview:(id)subview;
@end
