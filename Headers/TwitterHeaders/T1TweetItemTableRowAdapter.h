//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsTableRowAdapter.h"

@class T1StatusTableRowAdapter;

__attribute__((visibility("hidden")))
@interface T1TweetItemTableRowAdapter : TFNItemsTableRowAdapter
{
    T1StatusTableRowAdapter *_statusAdapter;
    unsigned int _cellOptions;
}

- (void).cxx_destruct;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (float)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;

@end
