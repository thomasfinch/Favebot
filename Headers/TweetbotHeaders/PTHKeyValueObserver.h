/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface PTHKeyValueObserver : XXUnknownSuperclass {
	id _observer;
	id _object;
	NSString* _keyPath;
	id _changeBlock;
}
@property(copy, nonatomic) id changeBlock;
@property(readonly, copy, nonatomic) NSString* keyPath;
@property(readonly, assign, nonatomic) id object;
@property(readonly, assign, nonatomic) id observer;
-(void).cxx_destruct;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)initWithObject:(id)object forKeyPath:(id)keyPath;
@end
