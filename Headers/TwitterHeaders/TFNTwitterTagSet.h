//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "TFNTwitterPlistSerialization.h"

@class NSArray, NSMutableArray;

@interface TFNTwitterTagSet : NSObject <NSCoding, NSCopying, TFNTwitterPlistSerialization>
{
    NSMutableArray *_tags;
}

@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeUser:(id)arg1;
- (BOOL)includesUser:(id)arg1;
- (id)userTagsWithPriorityToUser:(id)arg1;
- (id)userTags;
- (BOOL)isEqualToTagSet:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONArray:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTags:(id)arg1;
- (id)init;

@end
