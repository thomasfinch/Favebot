//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface PTHTweetbotSpinnerView : UIView
{
    BOOL _spinning;
    float _progress;
    UIImage *_spinnerImage;
}

@property(retain, nonatomic) UIImage *spinnerImage; // @synthesize spinnerImage=_spinnerImage;
@property(nonatomic, getter=isSpinning) BOOL spinning; // @synthesize spinning=_spinning;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;

@end

