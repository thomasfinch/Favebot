//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterCluster.h"

@class NSArray, NSDate;

@interface TFNTwitterMomentCluster : TFNTwitterCluster
{
    BOOL _active;
    NSDate *_date;
    int _score;
    unsigned int _size;
    NSArray *_terms;
    NSArray *_drillDownClusterIDs;
}

+ (id)metadataKeyForClusterClass;
@property(retain, nonatomic) NSArray *drillDownClusterIDs; // @synthesize drillDownClusterIDs=_drillDownClusterIDs;
@property(retain, nonatomic) NSArray *terms; // @synthesize terms=_terms;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) int score; // @synthesize score=_score;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)duplicateClusterExcludingGalleries;
- (id)initWithJSONDictionary:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

