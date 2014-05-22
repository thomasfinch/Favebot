//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterCard.h"

@class NSNumber, NSString;

@interface TFNTwitterPromotionCard : TFNTwitterCard
{
    struct {
        unsigned int hasCachedAppStoreID:1;
    } _flags;
    NSNumber *_appStoreID;
    NSString *_callToAction;
    int _promotionType;
    NSString *_targetURL;
}

@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(nonatomic) int promotionType; // @synthesize promotionType=_promotionType;
@property(copy, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *appStoreID;
- (BOOL)hasByline;
- (BOOL)hasSiteAttribution;
- (id)scribeElement;
- (int)cardType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;

@end
