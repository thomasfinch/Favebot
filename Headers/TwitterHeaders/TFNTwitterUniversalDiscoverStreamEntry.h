//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterTimelinePlistSerialization.h"

@class NSDictionary, NSString;

@interface TFNTwitterUniversalDiscoverStreamEntry : NSObject <TFNTwitterTimelinePlistSerialization>
{
    id _streamObject;
    NSDictionary *_streamObjectDictionary;
    NSString *_pageBoundaryScrollCursor;
}

@property(copy, nonatomic) NSString *pageBoundaryScrollCursor; // @synthesize pageBoundaryScrollCursor=_pageBoundaryScrollCursor;
@property(retain, nonatomic) NSDictionary *streamObjectDictionary; // @synthesize streamObjectDictionary=_streamObjectDictionary;
@property(retain, nonatomic) id streamObject; // @synthesize streamObject=_streamObject;
- (void).cxx_destruct;
- (id)allStatusesForTextHeightCacheSerialization;
- (BOOL)populateModelObjectsInTimelinePlistDictionaryWithStatuses:(id)arg1 users:(id)arg2;
- (id)allUserIDsInTimelinePlistDictionary;
- (id)allStatusIDsInTimelinePlistDictionary;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
