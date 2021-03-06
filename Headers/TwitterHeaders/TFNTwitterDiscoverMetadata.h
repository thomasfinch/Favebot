//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TFNTwitterPlistSerialization.h"

@class NSDictionary, NSString;

@interface TFNTwitterDiscoverMetadata : NSObject <NSCoding, TFNTwitterPlistSerialization>
{
    NSString *_storyType;
    NSString *_storySource;
    NSString *_impressionID;
}

@property(copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(copy, nonatomic) NSString *storySource; // @synthesize storySource=_storySource;
@property(copy, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *scribeItem;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

