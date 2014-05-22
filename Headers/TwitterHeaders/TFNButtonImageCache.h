//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface TFNButtonImageCache : NSObject
{
    NSCache *_cache;
}

+ (id)_createCacheableBackgroundImageWithCornerRadius:(float)arg1 strokeLineWidth:(float)arg2 fillColor:(id)arg3 strokeColor:(id)arg4;
+ (id)_colorKeyForColor:(id)arg1;
+ (id)sharedCache;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (id)_cacheKeyForBaseImage:(id)arg1;
- (id)backgroundImageWithCornerRadius:(float)arg1 fillColor:(id)arg2 strokeColor:(id)arg3 strokeLineWidth:(float)arg4;
- (id)_backgroundTintedFillStrokeImageWithCornerRadius:(float)arg1 strokeLineWidth:(float)arg2 fillColor:(id)arg3 fillColorKey:(id)arg4 strokeColor:(id)arg5 strokeColorKey:(id)arg6;
- (id)_backgroundTintedStrokeImageWithCornerRadius:(float)arg1 strokeLineWidth:(float)arg2 strokeColor:(id)arg3 colorKey:(id)arg4;
- (id)_backgroundTintedFillImageWithCornerRadius:(float)arg1 fillColor:(id)arg2 colorKey:(id)arg3;
- (id)_backgroundBaseStrokeImageWithCornerRadius:(float)arg1 strokeLineWidth:(float)arg2;
- (id)_backgroundBaseFillImageWithCornerRadius:(float)arg1;
- (id)imageWithBaseImage:(id)arg1 renderHeight:(float)arg2 tintColor:(id)arg3 tintEnabled:(BOOL)arg4 flippedHorizontally:(BOOL)arg5;
- (void)dealloc;
- (id)init;

@end
