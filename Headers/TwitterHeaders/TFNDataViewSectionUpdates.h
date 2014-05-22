//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableIndexSet;

@interface TFNDataViewSectionUpdates : NSObject
{
    int _itemCount;
    NSMutableIndexSet *_inserts;
    NSMutableIndexSet *_deletes;
    NSMutableIndexSet *_reloads;
    BOOL _insertingAtBegin;
    BOOL _insertingAtEnd;
    int _section;
}

@property(readonly, nonatomic) int section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)applyCellLayoutUpdates:(id)arg1;
- (id)sectionBreakIndexPathsToReload;
- (void)reloadingIndex:(int)arg1;
- (void)deletingIndex:(int)arg1;
- (void)insertingIndex:(int)arg1;
- (id)initWithSection:(int)arg1 numberOfItems:(int)arg2;

@end
