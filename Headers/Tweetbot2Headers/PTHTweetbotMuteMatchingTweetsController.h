//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, UITableView;

@interface PTHTweetbotMuteMatchingTweetsController : PTHViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_matchingItems;
}

- (void)dealloc;
- (void)viewDidUnload;
- (void)unload;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)loadView;
- (id)initWithMatchingTweets:(id)arg1;

@end

