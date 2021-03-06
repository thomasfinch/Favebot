//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterEvent.h"

@class NSString;

@interface TFNTwitterEventTVShow : TFNTwitterEvent
{
    BOOL _isLive;
    BOOL _isNewEpisode;
    NSString *_seriesTitle;
    NSString *_seriesDescription;
    unsigned int _seriesSeasonNumber;
    NSString *_episodeTitle;
    NSString *_episodeDescription;
    unsigned int _episodeNumber;
    NSString *_channel;
}

@property(nonatomic) BOOL isNewEpisode; // @synthesize isNewEpisode=_isNewEpisode;
@property(nonatomic) BOOL isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(copy, nonatomic) NSString *episodeDescription; // @synthesize episodeDescription=_episodeDescription;
@property(copy, nonatomic) NSString *episodeTitle; // @synthesize episodeTitle=_episodeTitle;
@property(nonatomic) unsigned int seriesSeasonNumber; // @synthesize seriesSeasonNumber=_seriesSeasonNumber;
@property(copy, nonatomic) NSString *seriesDescription; // @synthesize seriesDescription=_seriesDescription;
@property(copy, nonatomic) NSString *seriesTitle; // @synthesize seriesTitle=_seriesTitle;
- (void).cxx_destruct;
- (id)plistDictionaryValueForTimeline:(BOOL)arg1;
- (id)initWithPlistDictionary:(id)arg1 forTimeline:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scribeComponentForScribePage:(id)arg1;
- (unsigned int)searchSource;
- (id)initWithJSONDictionary:(id)arg1 statusDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)viewMoreDescription;
- (id)recommendedMessage;
- (id)iconImage;
- (id)socialText;
- (id)airingInfoSimplified;
- (id)airingInfo;

@end

