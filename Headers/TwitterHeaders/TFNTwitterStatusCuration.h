//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFNTwitterStatusCuration : NSObject
{
    NSString *_timelineName;
    NSString *_timelineURL;
    NSString *_timelineDescription;
    NSString *_timelineID;
    long long _userID;
}

@property(copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
@property(copy, nonatomic) NSString *timelineDescription; // @synthesize timelineDescription=_timelineDescription;
@property(copy, nonatomic) NSString *timelineURL; // @synthesize timelineURL=_timelineURL;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *timelineName; // @synthesize timelineName=_timelineName;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 timelineID:(id)arg2;

@end
