//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TFNTwitterExperimentTranslation : NSObject
{
    NSString *_experimentKey;
    NSDictionary *_translationsByBucket;
}

@property(retain, nonatomic) NSDictionary *translationsByBucket; // @synthesize translationsByBucket=_translationsByBucket;
@property(readonly, nonatomic) NSString *experimentKey; // @synthesize experimentKey=_experimentKey;
- (void).cxx_destruct;
- (id)translationForBucket:(id)arg1;
- (id)initWithExperimentKey:(id)arg1 translationsByBucket:(id)arg2;

@end
