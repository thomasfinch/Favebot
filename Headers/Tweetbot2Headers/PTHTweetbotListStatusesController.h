//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotStatusCursorController.h"

@class PTHTweetbotList;

@interface PTHTweetbotListStatusesController : PTHTweetbotStatusCursorController
{
    PTHTweetbotList *_list;
}

- (void)dealloc;
- (void)_showOptions:(id)arg1;
- (void)didUpdate;
- (BOOL)needsToolbar;
- (id)searchTitle;
- (void)viewDidLoad;
- (id)initWithList:(id)arg1;

@end
