//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TFNTwitterPlistSerialization.h"

@class NSArray, NSMutableArray, TFNTwitterCard;

@interface TFNTwitterCardSet : NSObject <NSCoding, TFNTwitterPlistSerialization>
{
    NSMutableArray *_summaries;
    NSMutableArray *_players;
    NSMutableArray *_photos;
    NSMutableArray *_promotions;
}

+ (id)cardSetWithJSONData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *players; // @synthesize players=_players;
@property(retain, nonatomic) NSMutableArray *summaries; // @synthesize summaries=_summaries;
- (void).cxx_destruct;
- (id)cardForURL:(id)arg1;
@property(readonly, nonatomic) TFNTwitterCard *primaryCard;
@property(readonly, nonatomic) NSArray *allCards;
@property(readonly, nonatomic) BOOL hasCards;
- (id)description;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

