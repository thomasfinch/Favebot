//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMapTable, NSMutableDictionary, NSOutputStream;

@interface PTHUIImageStartupCache : NSObject
{
    NSData *_readData;
    NSDictionary *_readInfo;
    NSMapTable *_readCache;
    struct CGColorSpace *_imageColorSpaceRef;
    NSOutputStream *_writeStream;
    NSMutableDictionary *_writeInfo;
    struct dispatch_queue_s *_writeQueue;
    BOOL _writeDirty;
    unsigned int _writeOffset;
}

+ (void)setIgnoreNames:(id)arg1;
+ (void)setCacheCount:(unsigned int)arg1;
+ (void)reset;
+ (void)setup;
- (void)dealloc;
- (void)_saveIfDirty;
- (void)addImageIfNeeded:(id)arg1 named:(id)arg2;
- (id)imageNamed:(id)arg1;
- (id)infoPath;
- (id)dataPath;
- (void)_reset;
- (id)init;

@end
