//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNExploreHeader.h"

@class NSString;

@interface TFNExploreSearchHeader : TFNExploreHeader
{
    NSString *_searchQuery;
}

@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)presentedViewControllerWithAccount:(id)arg1 scribeContext:(id)arg2;

@end

