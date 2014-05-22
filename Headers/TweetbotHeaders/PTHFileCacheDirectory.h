/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface PTHFileCacheDirectory : XXUnknownSuperclass {
	NSString* _cacheDirectory;
	NSMutableDictionary* _cacheDictionary;
	unsigned _dirtyCount;
	BOOL _deleted;
	NSString* _fileSuffix;
	unsigned _maxFileCount;
	double _expirationTimeInterval;
}
@property(assign, nonatomic, getter=isDeleted) BOOL deleted;
@property(assign, nonatomic) unsigned maxFileCount;
@property(assign, nonatomic) double expirationTimeInterval;
@property(copy, nonatomic) NSString* fileSuffix;
-(void).cxx_destruct;
-(void)dealloc;
-(void)saveIfNeeded;
-(void)delete;
-(void)removePathWithKey:(id)key;
-(void)removeAllPaths;
-(void)addPath:(id)path forKey:(id)key;
-(void)addPath:(id)path fileDictionary:(id)dictionary forKey:(id)key;
-(id)createPath;
-(id)fileDictionaryForKey:(id)key;
-(id)pathForKey:(id)key;
-(void)executeInfoForKey:(id)key result:(id)result;
-(void)_setup;
-(id)initWithCacheDirectory:(id)cacheDirectory;
@end

