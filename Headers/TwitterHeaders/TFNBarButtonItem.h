//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class TFNBarButtonItemButton;

@interface TFNBarButtonItem : UIBarButtonItem
{
    id _target;
    SEL _action;
    TFNBarButtonItemButton *_button;
}

+ (id)fixedSpaceWithWidth:(float)arg1;
+ (id)flexibleSpace;
+ (id)whiteTextBlueBackgroundButtonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4 isTFNButtonEnabled:(BOOL)arg5;
+ (id)whiteTextBlueBackgroundCondensedButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isTFNButtonEnabled:(BOOL)arg4;
+ (id)whiteTextBlueBackgroundButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isTFNButtonEnabled:(BOOL)arg4;
+ (id)_whiteTextBlueBackgroundButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isTFNButtonEnabled:(BOOL)arg4 size:(unsigned int)arg5 weight:(unsigned int)arg6 variant:(unsigned int)arg7 presentation:(unsigned int)arg8;
+ (id)blueTextButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isTFNButtonEnabled:(BOOL)arg4;
+ (id)buttonWithTitle:(id)arg1 defaultImage:(id)arg2 selectedImage:(id)arg3 pressedImage:(id)arg4 pressedSelectedImage:(id)arg5 target:(id)arg6 action:(SEL)arg7;
@property(retain, nonatomic) TFNBarButtonItemButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1 event:(id)arg2;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets;
- (void)setEnabled:(BOOL)arg1;
- (void)_init;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4 delayTinting:(BOOL)arg5;
- (id)initWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 delayTinting:(BOOL)arg4;
- (id)initWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithExtendedSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;

@end

