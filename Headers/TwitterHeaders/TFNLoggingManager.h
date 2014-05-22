//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface TFNLoggingManager : NSObject
{
    struct dispatch_queue_s *_transactionQueue;
    struct dispatch_queue_s *_loggingQueue;
    double _baseTimestamp;
    NSMutableSet *_onChannelsM;
    NSMutableSet *_offChannelsM;
    NSMutableSet *_streamsM;
    int _cachedLevels;
    NSMutableSet *_cachedOffChannelsM;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_canLogWithLevel:(int)arg1 channel:(id)arg2 contextObject:(id)arg3;
- (int)_canLogStream:(id)arg1 level:(int)arg2 channel:(id)arg3 contextObject:(id)arg4;
- (void)_logExecuteWithTimestamp:(double)arg1 level:(int)arg2 channel:(id)arg3 fileFunctionLine:(struct _TFNFileFunctionLine)arg4 contextObject:(id)arg5 threadId:(unsigned int)arg6 message:(id)arg7;
- (void)_logDispatchToLevel:(int)arg1 channel:(id)arg2 fileFunctionLine:(struct _TFNFileFunctionLine)arg3 contexObject:(id)arg4 format:(id)arg5 arguments:(void *)arg6;
- (void)logWithLevel:(int)arg1 channel:(id)arg2 fileFunctionLine:(struct _TFNFileFunctionLine)arg3 contextObject:(id)arg4 message:(id)arg5;
- (void)addOutputStream:(id)arg1;
- (void)setChannels:(id)arg1 on:(BOOL)arg2;
- (void)setChannel:(id)arg1 on:(BOOL)arg2;
- (id)_init;
- (id)init;
- (id)alertScribeOutputStream;
- (id)consoleOutputStream;
- (id)fileOutputStream;
- (id)crashlyticsOutputStream;
- (BOOL)hasOutputStream:(Class)arg1;
- (id)_streamOfClassKind:(Class)arg1;
- (id)retrieveLoggedDataFromOutputStream:(id)arg1 maxBytes:(unsigned int)arg2;
- (id)outputStreamsThatSupportLoggedDataRetrieval;
- (void)flush;
- (id)offChannels;
- (id)onChannels;
- (id)allChannels;
- (BOOL)isChannelOn:(id)arg1;
- (void)updateOutputStream:(id)arg1;
- (id)outputStreams;
- (void)removeOutputStream:(id)arg1;
- (id)startupTimestamp;

@end

