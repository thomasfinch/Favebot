//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTwitterGeoDataProvider;

@interface TFNTwitterGeoConfigChangeListener : NSObject
{
    BOOL _isStarted;
    TFNTwitterGeoDataProvider *_geoDataProvider;
}

+ (id)sharedListener;
@property BOOL isStarted; // @synthesize isStarted=_isStarted;
@property(retain) TFNTwitterGeoDataProvider *geoDataProvider; // @synthesize geoDataProvider=_geoDataProvider;
- (void).cxx_destruct;
- (void)_geoDataProviderConfigurationChanged:(id)arg1;
- (void)start;

@end

