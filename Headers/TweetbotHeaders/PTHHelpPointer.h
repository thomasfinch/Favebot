/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PTHHelpPointerView;

@interface PTHHelpPointer : XXUnknownSuperclass {
	PTHHelpPointerView* _view;
	BOOL _visible;
	id _completion;
}
+(BOOL)pointerVisible;
-(void).cxx_destruct;
-(void)touch:(id)touch;
-(void)hide:(BOOL)hide;
-(void)_hide:(BOOL)hide touched:(BOOL)touched;
-(void)showMessage:(id)message animated:(BOOL)animated inView:(id)view pointToView:(id)view4 direction:(int)direction completion:(id)completion;
-(id)init;
@end

