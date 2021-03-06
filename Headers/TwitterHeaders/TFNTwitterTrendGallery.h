//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterDateComparable.h"
#import "TFNTwitterPlistSerialization.h"
#import "TFNTwitterTimelinePlistSerialization.h"

@class NSArray, NSDate;

@interface TFNTwitterTrendGallery : NSObject <TFNTwitterDateComparable, TFNTwitterPlistSerialization, TFNTwitterTimelinePlistSerialization>
{
    NSArray *_trends;
    NSDate *_comparableDate;
}

@property(retain, nonatomic) NSDate *comparableDate; // @synthesize comparableDate=_comparableDate;
@property(retain, nonatomic) NSArray *trends; // @synthesize trends=_trends;
- (void).cxx_destruct;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1 forTimeline:(BOOL)arg2;
- (id)timelinePlistDictionaryValue;
- (id)plistDictionaryValue;
- (id)plistDictionaryValueForTimeline:(BOOL)arg1;
- (id)description;
- (id)timelineItems;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (id)scribeComponent;
- (id)scribeItems;

@end

