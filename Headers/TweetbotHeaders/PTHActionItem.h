/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface PTHActionItem : XXUnknownSuperclass {
	BOOL _enabled;
	NSString* _title;
	id _chosenBlock;
	int _buttonStyle;
	int _tag;
}
@property(assign, nonatomic) int tag;
@property(assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) int buttonStyle;
@property(copy, nonatomic) id chosenBlock;
@property(retain, nonatomic) NSString* title;
+(id)actionItemWithTitle:(id)title chosenBlock:(id)block;
-(void).cxx_destruct;
-(id)description;
@end

