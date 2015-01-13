//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView, UIView;

@interface PTHTweetbotPostPhoneAccountController : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_listView;
    UIView *_header;
    UITableView *_accountView;
    id <PTHTweetbotPostAccountControllerDelegate> _delegate;
}

@property(nonatomic) id <PTHTweetbotPostAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITableView *accountView; // @synthesize accountView=_accountView;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_accountAtIndexPath:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)init;

@end

