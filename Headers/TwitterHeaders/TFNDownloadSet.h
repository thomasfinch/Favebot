//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface TFNDownloadSet : NSObject
{
    int _maxInProgress;
    NSMutableDictionary *_downloads;
    NSMutableArray *_orderedDownloads;
    NSMutableSet *_inProgressDownloads;
    int _suspensions;
    int _downloadType;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property(nonatomic) int suspensions; // @synthesize suspensions=_suspensions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
- (void).cxx_destruct;
- (BOOL)_startNextDownloadWithCandidate:(id)arg1;
- (void)cancelDownloads;
- (void)downloadDidComplete:(id)arg1 forKey:(id)arg2;
- (void)downloadDidRequestStart:(id)arg1 forKey:(id)arg2;
- (id)downloadForKey:(id)arg1;
- (id)inProgressDownloads;
- (id)downloads;
- (id)initWithDownloadType:(int)arg1 maximumInProgress:(int)arg2;

@end

