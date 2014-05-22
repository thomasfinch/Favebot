//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSDictionary, NSSet, NSString;

@interface TFNTwitterFeatureSwitchesConfig : NSObject <NSCoding>
{
    NSDictionary *_values;
    NSDate *_createdOn;
    NSString *_featureSwitchesVersion;
    NSString *_experimentsVersion;
    NSSet *_embeddedDarkmoded;
}

+ (id)parseEmbeddedDarkmoded:(id)arg1;
+ (id)parseImpressions:(id)arg1;
+ (id)configWithContentsOfFile:(id)arg1 error:(id *)arg2;
+ (id)configWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *experimentsVersion; // @synthesize experimentsVersion=_experimentsVersion;
@property(readonly, nonatomic) NSString *featureSwitchesVersion; // @synthesize featureSwitchesVersion=_featureSwitchesVersion;
@property(readonly, nonatomic) NSDate *createdOn; // @synthesize createdOn=_createdOn;
- (void).cxx_destruct;
- (void)logVersionsWithScribeDelegate:(id)arg1;
- (BOOL)isEmbeddedExperimentDarkmodedForKey:(id)arg1;
- (id)keysDifferentFromConfig:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValues:(id)arg1 embeddedDarkmoded:(id)arg2 featureSwitchesVersion:(id)arg3 experimentsVersion:(id)arg4;

@end
