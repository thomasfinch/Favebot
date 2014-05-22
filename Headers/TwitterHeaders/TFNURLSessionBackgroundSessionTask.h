//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNBackgroundFetchTask.h"

@class NSURLSession;

@interface TFNURLSessionBackgroundSessionTask : TFNBackgroundFetchTask
{
    BOOL _supportsBackgroundURLSession;
}

@property(readonly, nonatomic) BOOL supportsBackgroundURLSession; // @synthesize supportsBackgroundURLSession=_supportsBackgroundURLSession;
- (void)URLSessionTaskDidComplete:(id)arg1 withData:(id)arg2 temporaryFileURL:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)generateURLSessionTask;
@property(readonly, nonatomic) NSURLSession *URLSession;
- (id)initWithIdentifier:(id)arg1 supportsBackgroundURLSession:(BOOL)arg2;

@end
