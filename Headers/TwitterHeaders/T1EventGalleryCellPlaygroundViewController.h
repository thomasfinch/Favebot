//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDataViewController.h"

#import "TFNTwitterAuthenticated.h"

@class NSArray, NSMutableArray, TFNPagedGalleryCellViewCache, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1EventGalleryCellPlaygroundViewController : TFNDataViewController <TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    TFNPagedGalleryCellViewCache *_galleryViewCache;
    NSArray *_sectionItems;
    NSMutableArray *_tvItems;
    NSMutableArray *_sportsItems;
}

@property(retain, nonatomic) NSMutableArray *sportsItems; // @synthesize sportsItems=_sportsItems;
@property(retain, nonatomic) NSMutableArray *tvItems; // @synthesize tvItems=_tvItems;
@property(retain, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(retain, nonatomic) TFNPagedGalleryCellViewCache *galleryViewCache; // @synthesize galleryViewCache=_galleryViewCache;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_itemForEvents:(id)arg1 showHeader:(BOOL)arg2;
- (void)_loadSportsEvents;
- (id)_playerWithName:(id)arg1 location:(id)arg2 logoUrl:(id)arg3;
- (id)_sportEventWithID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 startTime:(id)arg4 players:(id)arg5 status:(id)arg6;
- (void)_loadTVEvents;
- (id)_tvEventWithID:(id)arg1 seriesTitle:(id)arg2 seriesDescrition:(id)arg3 seasonNumber:(unsigned int)arg4 episodeTitle:(id)arg5 episodeNumber:(unsigned int)arg6 channel:(id)arg7 startTime:(id)arg8 imageURL:(id)arg9;
- (void)_updateSections;
- (id)_activityIndicatorItem;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)indexPathForBackingObject:(id)arg1;
- (id)backingObjectAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

@end
