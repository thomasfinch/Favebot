//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, TFNDownload, TFNHTTPRequest;

@interface TFNTwitterTailfeatherInstance : NSObject
{
    TFNDownload *_refreshHashTagDownload;
    NSMutableDictionary *_mutableHashtags;
    TFNHTTPRequest *_configRequest;
}

- (void).cxx_destruct;
- (id)tailfeatherHashtagForDisplayText:(id)arg1;
- (void)_processHashtagMappingsWithJSONDictionary:(id)arg1;
- (void)_configRequestDidComplete:(id)arg1;
- (void)refreshHashtags;
- (void)dealloc;
- (id)init;

@end

