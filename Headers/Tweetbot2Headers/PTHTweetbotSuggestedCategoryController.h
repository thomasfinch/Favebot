//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCursorController.h"

@class PTHTweetbotSuggestedCategory;

@interface PTHTweetbotSuggestedCategoryController : PTHTweetbotCursorController
{
    PTHTweetbotSuggestedCategory *_suggestedCategory;
    BOOL _userSelectMode;
}

@property BOOL userSelectMode; // @synthesize userSelectMode=_userSelectMode;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didUpdate;
- (BOOL)needsToolbar;
- (id)searchTitle;
- (Class)cellClass;
- (id)initWithSuggestedCategory:(id)arg1;

@end
