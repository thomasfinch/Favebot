//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIImage, UIImageView, UIWindow;

@interface TFNFullScreenTransition : NSObject
{
    SEL transition;
    CDUnknownBlockType completion;
    NSDictionary *options;
    UIWindow *sourceWindow;
    UIWindow *transitionWindow;
    UIImage *fromImage;
    UIImage *toImage;
    UIImageView *fromImageView;
}

+ (void)performTransition:(SEL)arg1 onWindow:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)prepareTransition2;
- (void)prepareTransition;
- (void)finishTransition;
- (id)initWithTransition:(SEL)arg1 window:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)zoomOut;
- (void)zoomIn;
- (void)zoom:(float)arg1 z:(int)arg2 duration:(float)arg3;

@end

