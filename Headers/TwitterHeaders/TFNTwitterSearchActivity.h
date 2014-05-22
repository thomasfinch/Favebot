//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TFNTwitterSearchActivity : NSObject
{
    float _maxScore;
    float _minScore;
    unsigned int _numIntervals;
    NSArray *_histogramIntervals;
    NSArray *_eventIntervals;
}

+ (id)activityWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) NSArray *eventIntervals; // @synthesize eventIntervals=_eventIntervals;
@property(readonly, nonatomic) NSArray *histogramIntervals; // @synthesize histogramIntervals=_histogramIntervals;
@property(nonatomic) unsigned int numIntervals; // @synthesize numIntervals=_numIntervals;
- (void).cxx_destruct;
@property(readonly, nonatomic) float minScore;
@property(readonly, nonatomic) float maxScore;
- (id)initWithJSONDictionary:(id)arg1;

@end
