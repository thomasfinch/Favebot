//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterUserListList.h"

@interface TFNTwitterUserListListFollows : TFNTwitterUserListList
{
    struct {
        unsigned int isAtEndOwnerships:1;
        unsigned int isAtEndSubscriptions:1;
    } _listListFollowsFlags;
    BOOL _onlyOwnedLists;
}

@property(nonatomic) BOOL onlyOwnedLists; // @synthesize onlyOwnedLists=_onlyOwnedLists;
- (id)emptyStreamSubtext;
- (void)markAtEnd;
- (void)loadNextOnRequester:(id)arg1;

@end
