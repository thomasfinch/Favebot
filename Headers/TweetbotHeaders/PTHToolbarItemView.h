/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "PTHHitInsetButton.h"

@class PTHBarItem;

@interface PTHToolbarItemView : PTHHitInsetButton {
	PTHBarItem* _item;
}
@property(readonly, assign, nonatomic) PTHBarItem* item;
-(void).cxx_destruct;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)initWithBarItem:(id)barItem;
-(id)initWithFrame:(CGRect)frame;
@end

