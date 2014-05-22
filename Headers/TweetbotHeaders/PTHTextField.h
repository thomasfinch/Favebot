/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIColor;

@interface PTHTextField : XXUnknownSuperclass {
	NSString* _placeholder;
	UIColor* _placeholderColor;
	UIEdgeInsets _textInset;
	UIEdgeInsets _clearButtonInset;
}
@property(retain, nonatomic) UIColor* placeholderColor;
@property(assign, nonatomic) UIEdgeInsets clearButtonInset;
@property(assign, nonatomic) UIEdgeInsets textInset;
-(void).cxx_destruct;
-(void)setPlaceholder:(id)placeholder;
-(void)setFont:(id)font;
-(void)_updatePlaceholder;
-(id)placeholder;
-(CGRect)clearButtonRectForBounds:(CGRect)bounds;
-(CGRect)editingRectForBounds:(CGRect)bounds;
-(CGRect)textRectForBounds:(CGRect)bounds;
@end

