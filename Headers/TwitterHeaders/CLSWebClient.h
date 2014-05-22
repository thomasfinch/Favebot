//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSURL;

@interface CLSWebClient : NSObject
{
    NSURL *_url;
    NSMutableSet *_connections;
    struct dispatch_queue_s *_queue;
    NSMutableDictionary *_customHeaders;
    id <CLSPersistenceCacheDelegate> _cacheDelegate;
}

+ (id)encodeJSON:(id)arg1;
+ (id)decodeJSON:(id)arg1;
+ (id)escapeURLString:(id)arg1;
@property(nonatomic) id <CLSPersistenceCacheDelegate> cacheDelegate; // @synthesize cacheDelegate=_cacheDelegate;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void)postFormData:(id)arg1 toPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncStartRequest:(id)arg1 expectingResponse:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncStartRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRequest:(id)arg1 expectingResponse:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addValue:(id)arg1 forHeader:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

