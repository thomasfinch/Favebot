/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

__attribute__((visibility("hidden")))
@interface PTHTweetbotThemeController : XXUnknownSuperclass {
	NSDate* _nextAutochangeDate;
	unsigned _changeCounter;
	BOOL _themeAutoChangeEnabled;
}
+(id)sharedController;
-(void).cxx_destruct;
-(void)dealloc;
-(void)setTheme:(id)theme withAnimation:(unsigned)animation;
-(void)pauseAutochange:(double)autochange;
-(void)_changeIfNeeded;
-(void)_didBecomeActive;
-(void)_defaultsDidChange;
-(id)init;
@end
