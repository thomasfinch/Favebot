//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsTableRowAdapter.h"

#import "TFNScrollBumpCellDataSource.h"
#import "TFNScrollBumpCellDelegate.h"

@class NSMutableDictionary;

@interface TFNItemsScrollBumpTableRowAdapter : TFNItemsTableRowAdapter <TFNScrollBumpCellDataSource, TFNScrollBumpCellDelegate>
{
    NSMutableDictionary *_scrollBumpCellStates;
}

- (void).cxx_destruct;
- (void)scrollBumpCell:(id)arg1 didScrollToPageAtIndex:(unsigned int)arg2;
- (id)scrollBumpCell:(id)arg1 viewForPageAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPagesForScrollBumpCell:(id)arg1;
- (id)_keyForScrollBumpCell:(id)arg1;
- (id)scrollBumpCellWithClass:(Class)arg1 tableView:(id)arg2 reuseIdentifier:(id)arg3 initialization:(CDUnknownBlockType)arg4;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)init;

@end

