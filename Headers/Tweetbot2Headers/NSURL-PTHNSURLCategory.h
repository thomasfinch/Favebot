//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (PTHNSURLCategory)
+ (id)URLWithString:(id)arg1 queryDictionary:(id)arg2;
+ (id)stringFromQueryDictionary:(id)arg1;
+ (id)queryDictionaryFromString:(id)arg1;
- (id)affiliateURLIfPossible;
@property(readonly, nonatomic) unsigned int iTunesIdentifier;
@property(readonly, nonatomic) BOOL isiTunesURL;
- (id)initWithString:(id)arg1 queryDictionary:(id)arg2;
- (id)fragmentDictionary;
- (id)queryDictionary;
@end
