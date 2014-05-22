//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface T1OnboardingProfileHeaderBorderView : UIView
{
    CALayer *_bannerBorderLayer;
    CALayer *_avatarBorderLayer;
}

+ (void)initialize;
+ (struct CGImage *)borderImageOfSize:(struct CGSize)arg1 forType:(int)arg2;
@property(retain, nonatomic) CALayer *avatarBorderLayer; // @synthesize avatarBorderLayer=_avatarBorderLayer;
@property(retain, nonatomic) CALayer *bannerBorderLayer; // @synthesize bannerBorderLayer=_bannerBorderLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateBorderLayer:(id)arg1 toType:(int)arg2 hidden:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_addBorderLayerWithCornerRadius:(float)arg1;

@end

