/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;

@interface PTHNavBarPageControl : XXUnknownSuperclass {
	unsigned _currentPage;
	unsigned _pageCount;
	UIButton* _upButton;
	UIButton* _downButton;
}
@property(assign, nonatomic) unsigned pageCount;
@property(assign, nonatomic) unsigned currentPage;
-(void).cxx_destruct;
-(void)_next;
-(void)_previous;
-(void)_update;
-(id)initWithFrame:(CGRect)frame;
@end

