//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TFNTwitterPlistSerialization.h"
#import "TFNTwitterRecommendableItem.h"
#import "TFNTwitterScribableItem.h"
#import "TFNTwitterTimelinePlistSerialization.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, TFNTwitterDiscoverMetadata;

@interface TFNTwitterEvent : NSObject <TFNTwitterRecommendableItem, NSCoding, TFNTwitterPlistSerialization, TFNTwitterTimelinePlistSerialization, TFNTwitterScribableItem>
{
    NSString *_eventID;
    NSString *_type;
    NSString *_imageUrl;
    NSString *_largeImageUrl;
    NSString *_title;
    NSString *_subtitle;
    NSString *_query;
    NSString *_hashtag;
    unsigned int _tweetCount;
    unsigned int _userCount;
    NSDate *_startTime;
    NSArray *_statuses;
    NSArray *_statusTimelineDictionaries;
    TFNTwitterDiscoverMetadata *_discoverMetadata;
    NSMutableDictionary *_cachedImages;
    NSString *_storySource;
    NSString *_storyType;
    NSString *_impressionID;
    NSString *_viewUrl;
}

+ (id)eventWithPlistDictionary:(id)arg1 forTimeline:(BOOL)arg2;
+ (id)eventFromJSONDictionary:(id)arg1 statusDictionary:(id)arg2;
+ (id)eventFromJSONDictionary:(id)arg1 statusDictionary:(id)arg2 metadataDictionary:(id)arg3;
+ (id)eventFromJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *viewUrl; // @synthesize viewUrl=_viewUrl;
@property(copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(copy, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property(copy, nonatomic) NSString *storySource; // @synthesize storySource=_storySource;
@property(readonly, nonatomic) NSMutableDictionary *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(retain, nonatomic) TFNTwitterDiscoverMetadata *discoverMetadata; // @synthesize discoverMetadata=_discoverMetadata;
@property(retain, nonatomic) NSArray *statusTimelineDictionaries; // @synthesize statusTimelineDictionaries=_statusTimelineDictionaries;
@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int userCount; // @synthesize userCount=_userCount;
@property(nonatomic) unsigned int tweetCount; // @synthesize tweetCount=_tweetCount;
@property(copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *largeImageUrl; // @synthesize largeImageUrl=_largeImageUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *scribeItem;
@property(readonly, nonatomic) NSString *scribeItemImpressionID;
- (id)description;
- (id)plistDictionaryValueForTimeline:(BOOL)arg1;
- (id)initWithPlistDictionary:(id)arg1 forTimeline:(BOOL)arg2;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scribeComponentForScribePage:(id)arg1;
- (id)searchQueryString;
- (unsigned int)searchSource;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithJSONDictionary:(id)arg1 statusDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;
- (id)viewMoreDescription;
- (id)recommendedMessage;
- (id)initialRecommendedMessage;
- (id)iconImage;
- (id)socialText;
- (id)airingInfoSimplified;
- (id)airingInfo;
- (id)displayName;

@end

