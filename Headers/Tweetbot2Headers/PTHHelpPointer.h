//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PTHHelpPointerView;

@interface PTHHelpPointer : NSObject
{
    PTHHelpPointerView *_view;
    BOOL _visible;
    CDUnknownBlockType _completion;
}

+ (BOOL)pointerVisible;
- (void)dealloc;
- (void)touch:(id)arg1;
- (void)hide:(BOOL)arg1;
- (void)_hide:(BOOL)arg1 touched:(BOOL)arg2;
- (void)showMessage:(id)arg1 animated:(BOOL)arg2 inView:(id)arg3 pointToView:(id)arg4 direction:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end

