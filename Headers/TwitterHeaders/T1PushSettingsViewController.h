//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "TFNTwitterAuthenticated.h"

@class TFNTwitterAccount, TFNTwitterApplePushDestination;

__attribute__((visibility("hidden")))
@interface T1PushSettingsViewController : TFNItemsDataViewController <TFNTwitterAuthenticated>
{
    BOOL _showInstructionsOnly;
    TFNTwitterAccount *_account;
    unsigned int _displayOptions;
    TFNTwitterApplePushDestination *_pushDestination;
}

@property(retain, nonatomic) TFNTwitterApplePushDestination *pushDestination; // @synthesize pushDestination=_pushDestination;
@property(nonatomic) unsigned int displayOptions; // @synthesize displayOptions=_displayOptions;
@property(nonatomic) BOOL showInstructionsOnly; // @synthesize showInstructionsOnly=_showInstructionsOnly;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_doneAction;
- (BOOL)_hasLifelineAlerts;
- (void)_updateSections;
- (id)_instructionNumber:(int)arg1 description:(id)arg2 iconName:(id)arg3 yOffset:(float)arg4;
- (id)_notificationInstructions;
- (id)_newsItem;
- (id)_recommendationsItem;
- (id)_lifelineAlertsItem;
- (id)_experimentalItem;
- (id)_addressBookItem;
- (id)_messagesItem;
- (id)_newFollowersItem;
- (id)_favoritesItem;
- (id)_retweetsItem;
- (id)_mentionsItem;
- (id)_tweetsItem;
- (id)_instructionsSection;
- (void)_updateServer;
- (void)_failedToUpdate;
- (void)_copyPushDestinations;
- (id)init;

@end
