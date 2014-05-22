//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TFNTwitterPlistSerialization.h"

@class NSMutableDictionary, NSString, TFNTwitterCardImage, TFNTwitterUser;

@interface TFNTwitterCard : NSObject <NSCoding, TFNTwitterPlistSerialization>
{
    int _cardType;
    NSString *_title;
    NSString *_digest;
    NSMutableDictionary *_images;
    NSString *_URL;
    TFNTwitterUser *_siteUser;
    TFNTwitterUser *_authorUser;
    NSString *_displayURLString;
    NSString *_expandedURL;
}

+ (id)cardWithJSONData:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *expandedURL; // @synthesize expandedURL=_expandedURL;
@property(copy, nonatomic) NSString *displayURLString; // @synthesize displayURLString=_displayURLString;
@property(retain, nonatomic) TFNTwitterUser *authorUser; // @synthesize authorUser=_authorUser;
@property(retain, nonatomic) TFNTwitterUser *siteUser; // @synthesize siteUser=_siteUser;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableDictionary *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (id)scribeParametersForOpenLink:(id)arg1;
- (id)scribeParametersForClick:(id)arg1;
@property(readonly, nonatomic) NSString *scribeActionClick;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly, nonatomic) BOOL hasSiteAttribution;
@property(readonly, nonatomic) BOOL hasCaption;
@property(readonly, nonatomic) BOOL hasByline;
@property(readonly, nonatomic) struct CGSize previewImageSize;
@property(readonly, nonatomic) TFNTwitterCardImage *primaryImage;
@property(readonly, nonatomic) BOOL hasAnImage;
- (id)description;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

