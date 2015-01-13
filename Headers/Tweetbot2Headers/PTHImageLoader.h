//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer, PTHNetworkLoader, _PTHWORMData;

@interface PTHImageLoader : NSObject
{
    NSString *_directoryPath;
    PTHNetworkLoader *_networkLoader;
    NSMutableDictionary *_cacheDictionary;
    NSMutableArray *_cacheKeyArray;
    NSMutableDictionary *_imageDictionaries;
    _PTHWORMData *_currentWORM;
    NSNumber *_currentWORMID;
    BOOL _dirty;
    NSMutableDictionary *_oldWORMs;
    struct dispatch_queue_s *_imageLoaderQueue;
    NSTimer *_saveTimer;
    BOOL _debugEnabled;
    unsigned int _backgroundCacheSize;
    unsigned int _maxDiskSpace;
    unsigned int _memoryCacheSize;
}

+ (void)initialize;
@property(nonatomic, getter=isDebugEnabled) BOOL debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(nonatomic) unsigned int memoryCacheSize; // @synthesize memoryCacheSize=_memoryCacheSize;
@property(readonly, nonatomic) unsigned int maxDiskSpace; // @synthesize maxDiskSpace=_maxDiskSpace;
@property(nonatomic) unsigned int backgroundCacheSize; // @synthesize backgroundCacheSize=_backgroundCacheSize;
- (void)dealloc;
- (void)_saveIfNeeded;
- (void)_clearCacheForBackground;
- (void)_clearCacheForMemory;
- (void)delete;
- (void)cacheThumbnailsFromURLs:(id)arg1 size:(unsigned int)arg2 crop:(BOOL)arg3;
- (void)loadImagePathFromURL:(id)arg1 progress:(CDUnknownBlockType)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)loadThumbnailFromURL:(id)arg1 size:(unsigned int)arg2 maxScale:(float)arg3 crop:(BOOL)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (void)loadThumbnailFromURL:(id)arg1 size:(unsigned int)arg2 crop:(BOOL)arg3 responseBlock:(CDUnknownBlockType)arg4;
- (BOOL)setImage:(id)arg1 forKey:(id)arg2;
- (id)newImageForKey:(id)arg1;
- (void)setMaxFileCount:(unsigned int)arg1;
- (unsigned int)maxFileCount;
- (void)setExpirationTimeInterval:(double)arg1;
- (double)expirationTimeInterval;
- (void)loadImageFromURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (id)initWithCacheDirectory:(id)arg1 maxDiskSpace:(unsigned int)arg2;
- (id)infoPath;

@end

