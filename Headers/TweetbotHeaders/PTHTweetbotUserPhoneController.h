/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "PTHTweetbotEntityTextLabelDelegate.h"
#import "UIScrollViewDelegate.h"
#import "PTHViewController.h"

@class PTHTweetbotEntityTextLabel, PTHTweetbotAvatarView, PTHTweetbotRelationship, PTHStaticSectionView, PTHStaticSectionCell, UIScrollView, UIBarButtonItem, UIControl, UILabel, UIImageView, PTHTweetbotUser, NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface PTHTweetbotUserPhoneController : PTHViewController <PTHTweetbotEntityTextLabelDelegate, UIScrollViewDelegate> {
	PTHTweetbotUser* _user;
	UIScrollView* _scrollView;
	BOOL _hasAppeared;
	UIBarButtonItem* _rightBarButtonItem;
	UIControl* _descriptionView;
	UILabel* _descriptionUserNameLabel;
	UILabel* _descriptionScreenNameLabel;
	UIImageView* _descriptionCoverBlurImageView;
	UIImageView* _descriptionCoverImageView;
	PTHTweetbotEntityTextLabel* _descriptionEntityTextLabel;
	PTHTweetbotAvatarView* _descriptionAvatarView;
	UIImageView* _descriptionAvatarBadgeView;
	NSLayoutConstraint* _descriptionCoverBlurImageViewTopConstraint;
	NSLayoutConstraint* _descriptionCoverImageViewTopConstraint;
	PTHStaticSectionCell* _friendshipCell;
	PTHStaticSectionView* _locationSection;
	PTHStaticSectionCell* _locationPlaceCell;
	PTHStaticSectionCell* _locationURLCell;
	PTHStaticSectionCell* _detailTweetsCountCell;
	PTHStaticSectionCell* _detailFollowersCountCell;
	PTHStaticSectionCell* _detailFollowingCountCell;
	PTHStaticSectionCell* _detailListedCountCell;
	UILabel* _lastTweetLabel;
	UILabel* _userInfoLabel;
	PTHTweetbotRelationship* _relationship;
	BOOL _relationshipUpdating;
	UIView* _bottomView;
}
-(void).cxx_destruct;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)entityTextLabel:(id)label didLongPressEntity:(id)entity entityFrame:(CGRect)frame;
-(void)entityTextLabel:(id)label didTouchUpEntity:(id)entity entityFrame:(CGRect)frame;
-(void)_showBlockOptions:(id)options;
-(void)_showReplyOptions:(id)options;
-(void)_showListMemberships:(id)memberships;
-(void)_showFollowing:(id)following;
-(void)_showFollowers:(id)followers;
-(void)_showTweets:(id)tweets;
-(void)_showPlace:(id)place;
-(void)_showController:(id)controller cell:(id)cell;
-(void)_showURL:(id)url;
-(void)_showOptions:(id)options;
-(void)_showFavstar;
-(void)_showEdit;
-(void)_showCoverImage:(id)image;
-(void)_showAvatarImage:(id)image;
-(void)update:(BOOL)update;
-(void)_userWasUpdated;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)_createPhotosView;
-(id)_createUserInfoView;
-(id)_createDetailView;
-(id)_createLocationView;
-(id)_createFriendshipView;
-(void)scrollViewDidScroll:(id)scrollView;
-(id)_createDescription;
-(void)_updateDescription;
-(id)initWithTweetbotUser:(id)tweetbotUser;
@end
