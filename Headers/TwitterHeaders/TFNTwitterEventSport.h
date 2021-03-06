//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterEvent.h"

@class NSMutableArray, NSString, TFNTwitterEventSportGameInfo;

@interface TFNTwitterEventSport : TFNTwitterEvent
{
    NSString *_gameType;
    NSString *_sportsTitle;
    NSMutableArray *_players;
    TFNTwitterEventSportGameInfo *_gameInfo;
    NSString *_channel;
}

@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) TFNTwitterEventSportGameInfo *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(retain, nonatomic) NSMutableArray *players; // @synthesize players=_players;
@property(copy, nonatomic) NSString *sportsTitle; // @synthesize sportsTitle=_sportsTitle;
@property(copy, nonatomic) NSString *gameType; // @synthesize gameType=_gameType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithTwitterEvent:(id)arg1;
- (void)didUpdateSportEvent:(id)arg1;
- (id)plistDictionaryValueForTimeline:(BOOL)arg1;
- (id)initWithPlistDictionary:(id)arg1 forTimeline:(BOOL)arg2;
- (id)scribeComponentForScribePage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)searchSource;
- (id)initWithJSONDictionary:(id)arg1 statusDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)viewMoreDescription;
- (id)recommendedMessage;
- (id)iconImage;
- (id)socialText;
- (id)airingInfo;

@end

