//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHHitInsetButton.h"

@class NSString;

@interface PTHTweetbotPostGeoButton : PTHHitInsetButton
{
    BOOL _landscape;
    int _buttonState;
    NSString *_realTitle;
}

@property(copy, nonatomic) NSString *realTitle; // @synthesize realTitle=_realTitle;
@property(nonatomic, getter=isLandscape) BOOL landscape; // @synthesize landscape=_landscape;
@property(readonly, nonatomic) int buttonState; // @synthesize buttonState=_buttonState;
- (void)dealloc;
- (void)setTitle:(id)arg1 buttonState:(int)arg2;
- (void)_updateSize;
- (id)init;

@end

