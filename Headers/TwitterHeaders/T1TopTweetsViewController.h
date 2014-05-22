//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "TFNTwitterAuthenticated.h"

@class T1StatusTableRowAdapter, TFNTwitterAccount, TFNTwitterUniversalDiscoverStream;

__attribute__((visibility("hidden")))
@interface T1TopTweetsViewController : TFNItemsDataViewController <TFNTwitterAuthenticated>
{
    T1StatusTableRowAdapter *_statusAdapter;
    TFNTwitterAccount *_account;
    TFNTwitterUniversalDiscoverStream *_stream;
}

@property(retain, nonatomic) TFNTwitterUniversalDiscoverStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)loadTop;
- (BOOL)isLoadingTop;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (void)_updateSections;
- (void)update;
- (void)_streamDidUpdate:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
