//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1StatusStreamViewController.h"

@class TFNTwitterUser;

__attribute__((visibility("hidden")))
@interface T1UserTimelineViewController : T1StatusStreamViewController
{
    TFNTwitterUser *_user;
}

@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (unsigned int)statusCellOptionsForStatus:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (void)loadView;
- (id)init;

@end
