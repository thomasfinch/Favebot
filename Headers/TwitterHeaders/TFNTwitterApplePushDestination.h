//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterPlistSerialization.h"

@class NSDate;

@interface TFNTwitterApplePushDestination : NSObject <TFNTwitterPlistSerialization>
{
    int _appPushVersion;
    NSDate *_lastRefreshed;
    int _enabledFor;
    int _availableLevels;
    int _migrationVersion;
    int _enabledForDefault;
    int _enabledForMax;
}

+ (BOOL)_isValidPushPayload:(id)arg1;
+ (id)defaultApplePushDestination;
+ (id)applePushDestinationWithJSONData:(id)arg1 deviceToken:(id)arg2 error:(id *)arg3;
@property(nonatomic) int enabledForMax; // @synthesize enabledForMax=_enabledForMax;
@property(nonatomic) int enabledForDefault; // @synthesize enabledForDefault=_enabledForDefault;
@property(nonatomic) int migrationVersion; // @synthesize migrationVersion=_migrationVersion;
@property(nonatomic) int availableLevels; // @synthesize availableLevels=_availableLevels;
@property(nonatomic) int enabledFor; // @synthesize enabledFor=_enabledFor;
@property(retain, nonatomic) NSDate *lastRefreshed; // @synthesize lastRefreshed=_lastRefreshed;
@property(readonly, nonatomic) int appPushVersion; // @synthesize appPushVersion=_appPushVersion;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)_migrateEnabledFor;
- (id)description;
- (BOOL)areAllLevelsDisabled;
- (BOOL)needsRefresh;
- (BOOL)isAvailable:(int)arg1;
@property(nonatomic) BOOL retweeted;
@property(nonatomic) BOOL favorited;
@property(nonatomic) BOOL mentions;
@property(nonatomic) BOOL vitNotableEvent;
@property(nonatomic) BOOL news;
@property(nonatomic) BOOL favoritedMention;
@property(nonatomic) BOOL retweetedMention;
@property(nonatomic) BOOL recommendations;
@property(nonatomic) BOOL lifelineAlerts;
@property(nonatomic) BOOL experimental;
@property(nonatomic) BOOL addressBook;
@property(nonatomic) BOOL loginVerification;
@property(nonatomic) BOOL retweetedFromAll;
@property(nonatomic) BOOL retweetedFromFollowing;
@property(nonatomic) BOOL favoritedFromAll;
@property(nonatomic) BOOL favoritedFromFollowing;
@property(nonatomic) BOOL followed;
@property(nonatomic) BOOL mentionsFromAll;
@property(nonatomic) BOOL mentionsFromFollowing;
@property(nonatomic) BOOL tweets;
@property(nonatomic) BOOL messages;
- (void)_commonInit;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;

@end

