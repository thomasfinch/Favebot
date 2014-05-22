//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsTableRowAdapter.h"

__attribute__((visibility("hidden")))
@interface T1CustomTimelineTableRowAdapter : TFNItemsTableRowAdapter
{
    BOOL _showsLongPressContextMenu;
    BOOL _showsAuthor;
    BOOL _showsDescription;
    BOOL _showsFollowButton;
    CDUnknownBlockType _tapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) BOOL showsFollowButton; // @synthesize showsFollowButton=_showsFollowButton;
@property(nonatomic) BOOL showsDescription; // @synthesize showsDescription=_showsDescription;
@property(nonatomic) BOOL showsAuthor; // @synthesize showsAuthor=_showsAuthor;
@property(nonatomic) BOOL showsLongPressContextMenu; // @synthesize showsLongPressContextMenu=_showsLongPressContextMenu;
- (void).cxx_destruct;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (float)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;

@end

