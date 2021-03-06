//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "TFNTwitterAuthenticated.h"

@class TFNTwitterAccount, TFNTwitterExploreStream;

__attribute__((visibility("hidden")))
@interface T1PhoneExploreListViewController : TFNItemsDataViewController <TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    TFNTwitterExploreStream *_stream;
}

@property(retain, nonatomic) TFNTwitterExploreStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeContextForIndexPath:(id)arg1;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (struct UIEdgeInsets)_headerPadding;
- (id)_headerFont;
- (void)loadTop;
- (id)_headerLabelForSectionWithName:(id)arg1;
- (void)update;
- (void)_update;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

