//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class TFNSubTabBarItem;

@interface TFNSubTabBarTabView : UIControl
{
    BOOL _usesIPadGlowLayout;
    TFNSubTabBarItem *_item;
}

@property(nonatomic) BOOL usesIPadGlowLayout; // @synthesize usesIPadGlowLayout=_usesIPadGlowLayout;
@property(retain, nonatomic) TFNSubTabBarItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTabBarBackgroundInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

