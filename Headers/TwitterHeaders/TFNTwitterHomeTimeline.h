//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterStatusesTimeline.h"

@interface TFNTwitterHomeTimeline : TFNTwitterStatusesTimeline
{
}

+ (id)timelineUpdateNotificationName;
+ (id)streamUpdateNotificationName;
+ (unsigned int)refreshPolicy;
+ (unsigned int)initializePriority;
+ (id)identifier;
- (id)streamWithPlistDictionary:(id)arg1;
- (id)deserializedDictionary;
- (id)streamPlistDictionaryValue;
- (BOOL)hasUnreadItems;
- (id)storkDetailText;
- (id)storkTitleText;
- (id)storkScribePage;

@end

