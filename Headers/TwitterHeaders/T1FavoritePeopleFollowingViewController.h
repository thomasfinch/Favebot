//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1UsersViewController.h"

@class TFNTwitterUser, TFNTwitterUserFavoriteFollowingList;

__attribute__((visibility("hidden")))
@interface T1FavoritePeopleFollowingViewController : T1UsersViewController
{
    BOOL _shouldRefreshList;
    TFNTwitterUser *_user;
    TFNTwitterUserFavoriteFollowingList *_favoritePeopleFollowingList;
}

@property(nonatomic) BOOL shouldRefreshList; // @synthesize shouldRefreshList=_shouldRefreshList;
@property(retain, nonatomic) TFNTwitterUserFavoriteFollowingList *favoritePeopleFollowingList; // @synthesize favoritePeopleFollowingList=_favoritePeopleFollowingList;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)scribeContextForIndexPath:(id)arg1;
- (id)scribeAssociationID;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)requestUsers;
- (void)configureUserCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_favoritePeopleFollowingDidUpdate:(id)arg1;
- (void)_favoritePeopleFollowingScopeDidUpdate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
