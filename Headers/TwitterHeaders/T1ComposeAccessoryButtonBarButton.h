//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1ComposeButtonBarButton.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface T1ComposeAccessoryButtonBarButton : T1ComposeButtonBarButton
{
    struct CGRect _accessoryFrame;
    BOOL _transitioning;
    BOOL _accessoryVisible;
    UIView *_accessoryView;
}

@property(nonatomic) BOOL accessoryVisible; // @synthesize accessoryVisible=_accessoryVisible;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
- (void)setAccessoryVisible:(BOOL)arg1 animated:(BOOL)arg2;

@end

