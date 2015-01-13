//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, NSString, UIImage, UILabel, UIView;

@interface PTHHelpPointerView : UIControl
{
    UIImage *_backgroundImage;
    UILabel *_label;
    NSMutableArray *_viewStack;
    int _direction;
    UIView *_pointToView;
}

@property(retain, nonatomic) UIView *pointToView; // @synthesize pointToView=_pointToView;
@property(nonatomic) int direction; // @synthesize direction=_direction;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didMoveToSuperview;
@property(copy, nonatomic) NSString *message;
- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;

@end

