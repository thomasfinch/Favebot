//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString, NSURL, TFNTwitterUser;

@interface TFNTwitterCustomTimelineSearchResponse : NSObject <NSCoding>
{
    NSString *_timelineID;
    NSString *_description;
    TFNTwitterUser *_owner;
    NSString *_name;
    NSDate *_mostRecentTweetDate;
    unsigned int _memberCount;
    unsigned int _subscriberCount;
    unsigned int _type;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int subscriberCount; // @synthesize subscriberCount=_subscriberCount;
@property(nonatomic) unsigned int memberCount; // @synthesize memberCount=_memberCount;
@property(retain, nonatomic) NSDate *mostRecentTweetDate; // @synthesize mostRecentTweetDate=_mostRecentTweetDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TFNTwitterUser *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
- (void).cxx_destruct;
- (id)twitterCustomTimeline;
- (id)twitterList;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *detailDisplayText;
@property(readonly, nonatomic) NSString *descriptionDisplayText;
@property(readonly, nonatomic) NSString *authorDisplayText;
@property(readonly, nonatomic) NSString *nameDisplayText;

@end

