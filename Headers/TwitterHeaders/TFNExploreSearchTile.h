//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNExploreTile.h"

@class TFNTwitterSearchQuery;

@interface TFNExploreSearchTile : TFNExploreTile
{
    TFNTwitterSearchQuery *_query;
}

@property(retain, nonatomic) TFNTwitterSearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

