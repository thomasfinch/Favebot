//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterTimeline.h"

@interface TFNTwitterActivityTimelineBase : TFNTwitterTimeline
{
}

+ (BOOL)forMyActivity;
+ (Class)streamClass;
- (id)streamWithPlistDictionary:(id)arg1;
- (id)deserializedDictionary;
- (id)streamPlistDictionaryValue;
- (BOOL)supportsMultipleStreams;

@end
