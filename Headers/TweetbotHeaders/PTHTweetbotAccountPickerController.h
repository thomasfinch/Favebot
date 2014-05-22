/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "PTHBlurBackgroundTransitioningController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "Tweetbot-Structs.h"

@class PTHTweetbotAccount, NSMutableArray, PTHTweetbotAvatarView, UICollectionViewFlowLayout, UICollectionView, UIDynamicAnimator, NSIndexPath, PTHShapeView, PTHBlurBackgroundTransitioningDelegate, UILabel, _PTHTweetbotAccountPickerCollectionHolder, UIView;

__attribute__((visibility("hidden")))
@interface PTHTweetbotAccountPickerController : XXUnknownSuperclass <PTHBlurBackgroundTransitioningController, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
	NSMutableArray* _accounts;
	UIView* _contentView;
	PTHBlurBackgroundTransitioningDelegate* _transitioningDelegate;
	UICollectionViewFlowLayout* _layout;
	_PTHTweetbotAccountPickerCollectionHolder* _collectionHolder;
	UICollectionView* _collectionView;
	UILabel* _titleLabel;
	UIView* _controlsView;
	PTHShapeView* _settingsButton;
	PTHShapeView* _addButton;
	UIDynamicAnimator* _animator;
	PTHTweetbotAvatarView* _movingAvatarView;
	CGPoint _movingStartPoint;
	NSIndexPath* _movingIndexPath;
	PTHTweetbotAccount* _selectedAccount;
}
@property(retain, nonatomic) PTHTweetbotAccount* selectedAccount;
-(void).cxx_destruct;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_showSettings:(id)settings;
-(void)_addAccount:(id)account;
-(void)dismissTransition:(id)transition;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)indexPath;
-(void)presentTransition:(id)transition;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)swipe:(id)swipe;
-(void)longPress:(id)press;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)_deleteAccount:(id)account;
-(void)_reloadData;
-(void)ok:(id)ok;
-(void)loadView;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

