//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNDataViewController.h"

@class T1AppInstallObject;

__attribute__((visibility("hidden")))
@interface T1AppInstallNotificationPreviewViewController : TFNDataViewController
{
    T1AppInstallObject *_appInstallData;
}

@property(retain, nonatomic) T1AppInstallObject *appInstallData; // @synthesize appInstallData=_appInstallData;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
