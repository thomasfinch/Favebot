//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FilterContext;

@interface FilterRenderer : NSObject
{
    struct Renderer *_renderer;
    struct RenderTarget *_gaussianV;
    struct RenderTarget *_gaussianH;
    unsigned int _gaussianProgram;
    float _gaussianKernel[15];
    FilterContext *_context;
}

+ (id)autoLevelImage:(id)arg1;
@property(readonly, nonatomic) FilterContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_gaussianBlur:(unsigned int)arg1 kernel:(float [15])arg2;
- (void)filterImage:(id)arg1 filter:(id)arg2 autoLevel:(BOOL)arg3 shaderParam:(float)arg4 vignetteParam:(float)arg5 onComplete:(CDUnknownBlockType)arg6;
- (void)renderImage:(id)arg1 sourceTexture:(unsigned int)arg2 size:(struct CGSize)arg3 offset:(struct CGPoint)arg4 alpha:(float)arg5 scissorRect:(struct CGRect)arg6 flipUVs:(BOOL)arg7 rotation:(float)arg8 upsideDown:(BOOL)arg9 flipX:(BOOL)arg10 shaderParam:(float)arg11 vignetteParam:(float)arg12;
- (void)renderImage:(id)arg1 sourceTexture:(unsigned int)arg2 size:(struct CGSize)arg3 offset:(struct CGPoint)arg4 alpha:(float)arg5 scissorRect:(struct CGRect)arg6 flipUVs:(BOOL)arg7 rotation:(float)arg8 shaderParam:(float)arg9 vignetteParam:(float)arg10;
- (void)prepareSource:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end
