//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "TFNTwitterAuthenticated.h"

@class TFNTwitterAccount, TFNTwitterTopicsStream;

__attribute__((visibility("hidden")))
@interface T1TopicsViewController : TFNItemsDataViewController <TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    TFNTwitterTopicsStream *_stream;
}

@property(retain, nonatomic) TFNTwitterTopicsStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (void)_streamDidUpdate:(id)arg1;
- (void)update;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

