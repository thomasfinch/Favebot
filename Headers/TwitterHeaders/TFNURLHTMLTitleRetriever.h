//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "TFNCancellable.h"

@class NSString, NSURL, NSURLConnection, NSURLRequest, TFNHTMLTagParser, TFNTimer;

@interface TFNURLHTMLTitleRetriever : NSObject <NSURLConnectionDataDelegate, TFNCancellable>
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    unsigned int _encoding;
    TFNHTMLTagParser *_parser;
    TFNTimer *_timer;
    unsigned int _bytesReceived;
    unsigned int _redirectsReceived;
    NSURL *_url;
    NSString *_title;
    CDUnknownBlockType _completion;
    double _timeout;
}

+ (id)retrieveHTMLTitleForURL:(id)arg1 withTimeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)retrieveHTMLTitleForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)initialize;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_cancelConnection;
- (void)_handleTimeoutConnection;
- (void)_timeoutConnection:(id)arg1;
- (void)_cancel;
- (void)_cleanupFromFinish;
- (void)cancel;
- (id)initWithURL:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_retrieve;
- (void)dealloc;

@end
