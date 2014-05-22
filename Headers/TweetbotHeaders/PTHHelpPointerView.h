/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIView, NSString, UIImage, NSMutableArray;

@interface PTHHelpPointerView : XXUnknownSuperclass {
	UIImage* _backgroundImage;
	UILabel* _label;
	NSMutableArray* _viewStack;
	int _direction;
	UIView* _pointToView;
}
@property(copy, nonatomic) NSString* message;
@property(retain, nonatomic) UIView* pointToView;
@property(assign, nonatomic) int direction;
-(void).cxx_destruct;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)didMoveToSuperview;
-(void)_update;
-(id)initWithFrame:(CGRect)frame;
@end

