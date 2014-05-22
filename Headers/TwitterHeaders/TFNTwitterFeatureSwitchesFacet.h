//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TFNTwitterFeatureSwitchesFacet : NSObject
{
    NSString *_name;
    NSString *_description;
    NSString *_owner;
    BOOL _requiresRestart;
    BOOL _supportsAccessibility;
    NSArray *_parameters;
}

+ (id)facetWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) BOOL supportsAccessibility; // @synthesize supportsAccessibility=_supportsAccessibility;
@property(readonly, nonatomic) BOOL requiresRestart; // @synthesize requiresRestart=_requiresRestart;
@property(readonly, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSString *description; // @synthesize description=_description;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 description:(id)arg2 owner:(id)arg3 requiresRestart:(BOOL)arg4 supportsAccessibility:(BOOL)arg5 parameters:(id)arg6;

@end
