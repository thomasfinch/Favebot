//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1StatusStreamViewController.h"

@class NSMutableArray, TFNTwitterScribeContext, TFNTwitterUser, TFNTwitterUserFavoritesStream;

__attribute__((visibility("hidden")))
@interface T1FavoritesViewController : T1StatusStreamViewController
{
    TFNTwitterUser *_user;
    TFNTwitterScribeContext *_scribeContext;
    NSMutableArray *_statusesToRemoveOnDisappear;
}

@property(retain, nonatomic) NSMutableArray *statusesToRemoveOnDisappear; // @synthesize statusesToRemoveOnDisappear=_statusesToRemoveOnDisappear;
@property(retain, nonatomic) TFNTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)_userDidUnfavorite:(id)arg1;
- (void)_userDidFavorite:(id)arg1;
- (void)_setupNotifications;
- (unsigned int)statusCellOptionsForStatus:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeImpressionParameters;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (void)setAccount:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) TFNTwitterUserFavoritesStream *statusStream;

@end

