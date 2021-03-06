//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterAmplifyAbstractInstance.h"

#import "NSXMLParserDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, TFNTwitterAmplifyStitchedVideo, TFNTwitterAmplifyVideo;

@interface TFNTwitterAmplifyVMAPInstance : TFNTwitterAmplifyAbstractInstance <NSXMLParserDelegate>
{
    CDUnknownBlockType _handler;
    NSMutableArray *_mutableAdVideos;
    NSMutableArray *_mutableContentVideos;
    BOOL _stitched;
    NSMutableString *_stitchedAdDuration;
    TFNTwitterAmplifyStitchedVideo *_stitchedVideo;
    NSString *_processingTrackingEventKey;
    NSMutableArray *_elementStack;
    NSMutableDictionary *_currentBeaconURLs;
    int _currentAdPosition;
    NSArray *_videos;
}

- (id)videos;
- (void).cxx_destruct;
- (id)downloadWithURL:(id)arg1 requestFactory:(id)arg2;
- (void)_finalizeDurationElement;
- (void)_finalizeTrackEventsElement;
- (void)_finalizeElement:(int)arg1 namespace:(int)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (BOOL)_processTwitterAdElementWithAttributes:(id)arg1;
- (BOOL)_processAdElement;
- (BOOL)_processAdBreakElementWithAttributes:(id)arg1;
- (BOOL)_processTrackingElementWithAttributes:(id)arg1;
- (BOOL)_processTrackingEventsElementWithAttributes:(id)arg1;
- (BOOL)_processContentElementWithAttributes:(id)arg1;
- (BOOL)_processElement:(int)arg1 attributes:(id)arg2 namespace:(int)arg3;
- (int)_namespaceForURI:(id)arg1;
- (int)_elementForName:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (id)_createParserWithData:(id)arg1;
- (void)_createDataStores;
- (void)processData:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) TFNTwitterAmplifyVideo *currentNonStitchedVideo;
- (id)_createStitchedVideoIfNeeded;

@end

