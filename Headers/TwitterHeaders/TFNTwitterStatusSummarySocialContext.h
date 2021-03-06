//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterStatusSocialContext.h"

@class NSString;

@interface TFNTwitterStatusSummarySocialContext : NSObject <TFNTwitterStatusSocialContext>
{
    int _type;
    unsigned int _favoriteCount;
    unsigned int _retweetCount;
    NSString *_trendingTopic;
}

@property(copy, nonatomic) NSString *trendingTopic; // @synthesize trendingTopic=_trendingTopic;
@property(nonatomic) unsigned int retweetCount; // @synthesize retweetCount=_retweetCount;
@property(nonatomic) unsigned int favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)plistDictionaryValueForTimeline:(BOOL)arg1;
- (id)timelinePlistDictionaryValue;
- (id)plistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allUsers;
- (id)primaryUser;
- (BOOL)updateActivityCountsWithFavoriteCount:(unsigned int)arg1 retweetCount:(unsigned int)arg2;
- (BOOL)socialTextIsActivityCount;
- (id)activityName;
- (id)socialText;
- (id)initWithJSONDictionary:(id)arg1;

@end

