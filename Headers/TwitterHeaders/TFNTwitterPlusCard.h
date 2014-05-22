//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TFNTwitterPlistSerialization.h"

@class NSDictionary, NSString, TCImageSpec, TFNTwitterUser;

@interface TFNTwitterPlusCard : NSObject <NSCoding, TFNTwitterPlistSerialization>
{
    TCImageSpec *_primaryImageSpec;
    NSDictionary *_bindingsToScribe;
    NSDictionary *_forwardBindingsToScribe;
    NSString *_name;
    NSString *_URL;
    NSDictionary *_dataDictionary;
    NSString *_compiledCardURL;
    NSDictionary *_usersByIDNumber;
    NSString *_forwardName;
    NSDictionary *_forwardDataDictionary;
    NSString *_forwardCompiledCardURL;
}

@property(copy, nonatomic) NSString *forwardCompiledCardURL; // @synthesize forwardCompiledCardURL=_forwardCompiledCardURL;
@property(retain, nonatomic) NSDictionary *forwardDataDictionary; // @synthesize forwardDataDictionary=_forwardDataDictionary;
@property(copy, nonatomic) NSString *forwardName; // @synthesize forwardName=_forwardName;
@property(retain, nonatomic) NSDictionary *usersByIDNumber; // @synthesize usersByIDNumber=_usersByIDNumber;
@property(copy, nonatomic) NSString *compiledCardURL; // @synthesize compiledCardURL=_compiledCardURL;
@property(retain, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)forwardValueProviders;
- (id)valueProviders;
@property(readonly, nonatomic) NSString *rating;
@property(readonly, nonatomic) NSString *deepUrl;
@property(readonly, nonatomic) NSString *numRatings;
@property(readonly, nonatomic) NSString *websiteURL;
@property(readonly, nonatomic) NSString *phoneNumberDisplay;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *appName;
@property(readonly, nonatomic) NSString *amplifyURLVMAP;
@property(readonly, nonatomic) NSString *amplifyURL;
@property(readonly, nonatomic) NSString *amplifyContentID;
@property(readonly, nonatomic) NSString *playerHTMLURL;
@property(readonly, nonatomic) NSString *playerStreamContentType;
@property(readonly, nonatomic) NSString *playerStreamURL;
@property(readonly, nonatomic) BOOL canPlayStreamInline;
@property(readonly, nonatomic) NSString *primaryImageThumbnailURL;
@property(readonly, nonatomic) NSString *primaryImageFullSizeURL;
@property(readonly, nonatomic) struct CGSize primaryImageSize;
@property(readonly, nonatomic) BOOL hasPrimaryImage;
- (id)_primaryImageSpec;
@property(readonly, nonatomic) NSString *digest;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) TFNTwitterUser *siteUser;
@property(readonly, nonatomic) TFNTwitterUser *creatorUser;
- (id)_userIDNumberForKey:(id)arg1;
@property(readonly, nonatomic) NSString *forwardCardPlayerHTMLURL;
@property(readonly, nonatomic) NSString *forwardCardPlayerStreamContentType;
@property(readonly, nonatomic) NSString *forwardCardPlayerStreamURL;
@property(readonly, nonatomic) BOOL forwardCardCanPlayStreamInline;
@property(readonly, nonatomic) NSString *forwardCardAppInstallId;
@property(readonly, nonatomic) int forwardCardAppInstallStatus;
@property(readonly, nonatomic) int forwardCardHeight;
@property(readonly, nonatomic) BOOL hasForwardCard;
- (id)scribeParametersForOpenLink:(id)arg1;
@property(readonly, nonatomic) NSString *appInstallId;
@property(readonly, nonatomic) NSDictionary *appInstallStatusScribeItemEntry;
@property(readonly, nonatomic) int appInstallStatus;
@property(readonly, nonatomic) NSDictionary *extraScribeItem;
@property(readonly, nonatomic) int plusCardType;
- (id)plistDictionaryValueIncludingUsers:(BOOL)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1 users:(id)arg2;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_addForwardCardAudienceFromJSON:(id)arg1 toScribeDict:(id)arg2;
- (id)_addCardAudienceFromJSON:(id)arg1 toScribeDict:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;

@end
