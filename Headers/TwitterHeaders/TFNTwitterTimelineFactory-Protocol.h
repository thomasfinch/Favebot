//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, TFNTwitterAccount, TFNTwitterTimeline;

@protocol TFNTwitterTimelineFactory <NSObject>
- (TFNTwitterTimeline *)timelineForAccount:(TFNTwitterAccount *)arg1 identifier:(NSString *)arg2 savedPlistDictionary:(NSDictionary *)arg3;
- (NSArray *)timelineIdentifiersForAccount:(TFNTwitterAccount *)arg1 savedIdentifiers:(NSArray *)arg2;
@end

