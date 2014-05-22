/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableOrderedSet, NSMapTable, NSNumber, NSTimer, NSMutableDictionary, PTHNetworkLoader, _PTHWORMData, NSObject;
@protocol OS_dispatch_queue;

@interface PTHImageLoader : XXUnknownSuperclass {
	NSString* _directoryPath;
	PTHNetworkLoader* _networkLoader;
	NSMutableDictionary* _cacheDictionary;
	NSMutableOrderedSet* _cacheKeySet;
	NSMapTable* _cacheMapTable;
	NSMutableDictionary* _imageDictionaries;
	_PTHWORMData* _currentWORM;
	NSNumber* _currentWORMID;
	BOOL _dirty;
	NSMutableDictionary* _oldWORMs;
	NSObject<OS_dispatch_queue>* _imageLoaderQueue;
	NSTimer* _saveTimer;
	BOOL _debugEnabled;
	unsigned _maxDiskSpace;
	unsigned _memoryCacheSize;
	unsigned _backgroundCacheSize;
}
@property(assign, nonatomic, getter=isDebugEnabled) BOOL debugEnabled;
@property(assign, nonatomic) unsigned backgroundCacheSize;
@property(assign, nonatomic) unsigned memoryCacheSize;
@property(readonly, assign, nonatomic) unsigned maxDiskSpace;
+(void)initialize;
-(void).cxx_destruct;
-(void)dealloc;
-(void)saveIfNeeded;
-(void)_save;
-(void)_clearCacheForBackground;
-(void)_clearCacheForMemory;
-(void)delete;
-(void)cacheThumbnailsFromURLs:(id)urls size:(unsigned)size crop:(BOOL)crop;
-(void)storeImagePath:(id)path forURL:(id)url responseBlock:(id)block;
-(void)loadImagePathFromURL:(id)url fetchIfNeeded:(BOOL)needed progress:(id)progress responseBlock:(id)block;
-(void)loadScaledImageFromURL:(id)url size:(CGSize)size maxScale:(float)scale mode:(unsigned)mode responseBlock:(id)block;
-(BOOL)setImage:(id)image forKey:(id)key;
-(id)newImageForKey:(id)key;
-(void)setMaxFileCount:(unsigned)count;
-(unsigned)maxFileCount;
-(void)setExpirationTimeInterval:(double)interval;
-(double)expirationTimeInterval;
-(void)loadImageFromURL:(id)url responseBlock:(id)block;
-(id)initWithCacheDirectory:(id)cacheDirectory maxDiskSpace:(unsigned)space;
-(id)infoPath;
@end
