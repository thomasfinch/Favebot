//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NSCopying.h"

@class T1PhoneStorkContentView;

__attribute__((visibility("hidden")))
@interface T1PhoneStorkView : UIView <NSCopying>
{
    struct CGRect _contentViewInitialFrame;
    unsigned int _state;
    UIView *_backgroundView;
    UIView *_overlayView;
    T1PhoneStorkContentView *_contentView;
}

@property(retain, nonatomic) T1PhoneStorkContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
