//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSString;

@interface TFNNewDirectMessageAbstractThreadEntry : NSObject <NSCoding, NSCopying>
{
    NSString *_threadId;
    int _entryType;
    NSDate *_time;
    long long _eventId;
}

@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) int entryType; // @synthesize entryType=_entryType;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) long long eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (BOOL)shouldAssimilateEntry:(id)arg1;
- (unsigned int)secondarySortKey;
- (long long)primarySortKey;
- (void)assimilateThreadEntry:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToThreadEntryById:(id)arg1;
- (BOOL)isEqualToThreadEntry:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithJSONDictionary:(id)arg1;

@end

