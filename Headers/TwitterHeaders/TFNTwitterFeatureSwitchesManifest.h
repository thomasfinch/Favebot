//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSSet, TFNTwitterFeatureSwitchesConfig;

@interface TFNTwitterFeatureSwitchesManifest : NSObject
{
    TFNTwitterFeatureSwitchesConfig *_defaultConfig;
    NSDictionary *_embeddedExperiments;
    NSSet *_requiresRestart;
    NSArray *_facets;
    NSDate *_createdOn;
    NSSet *_experimentNamesSupportingAccessibility;
}

+ (id)manifestWithContentsOfFile:(id)arg1 error:(id *)arg2;
+ (id)manifestWithDictionary:(id)arg1 createdOn:(id)arg2;
@property(readonly, nonatomic) NSDate *createdOn; // @synthesize createdOn=_createdOn;
@property(readonly, nonatomic) NSArray *facets; // @synthesize facets=_facets;
@property(readonly, nonatomic) TFNTwitterFeatureSwitchesConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void).cxx_destruct;
- (BOOL)hasAccessibilitySupportForKey:(id)arg1;
- (id)embeddedExperimentForKey:(id)arg1;
- (BOOL)requiresRestartForKeys:(id)arg1;
- (id)initWithDefaultConfig:(id)arg1 embeddedExperiments:(id)arg2 requiresRestart:(id)arg3 facets:(id)arg4 createdOn:(id)arg5 experimentNamesSupportingAccessibility:(id)arg6;

@end

