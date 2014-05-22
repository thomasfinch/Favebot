//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSInvocation, NSString, UIImage;

@interface _TFNMultiSizeImageProxy : NSProxy
{
    BOOL _assumeAnimationSequence;
    NSString *_imageName;
    NSInvocation *_imageCreationInvocation;
    UIImage *_underlyingImage;
    NSString *_underlyingImageName;
    float _renderHeight;
    float _scale;
}

+ (id)_bestImageNameForBaseName:(id)arg1 renderHeight:(float)arg2 scale:(float)arg3 assumeAnimationSequence:(BOOL)arg4;
+ (id)underlyingImageCreationInvocationForClassSelector:(SEL)arg1;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float renderHeight; // @synthesize renderHeight=_renderHeight;
@property(copy, nonatomic) NSString *underlyingImageName; // @synthesize underlyingImageName=_underlyingImageName;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
@property(retain, nonatomic) NSInvocation *imageCreationInvocation; // @synthesize imageCreationInvocation=_imageCreationInvocation;
@property(nonatomic) BOOL assumeAnimationSequence; // @synthesize assumeAnimationSequence=_assumeAnimationSequence;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void)_updateUnderlyingImage;
- (void)setRenderSize:(struct CGSize)arg1 scale:(float)arg2;
- (id)tfnImageName;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithImageName:(id)arg1 assumeAnimationSequence:(BOOL)arg2;

@end
