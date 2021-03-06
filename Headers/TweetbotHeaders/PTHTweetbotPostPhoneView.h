/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "UITextViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PTHTweetbotPostThreadView, PTHTweetbotPostMediaView, PTHTweetbotAvatarView, NSArray, _PTHTweetbotPostPhoneScrollView, PTHTweetbotPostToolbarView, PTHTweetbotPostGeoView, PTHTweetbotPostDraft, UITextView, UIScrollView, PTHTweetbotPostDraftIndicatorView, NSLayoutConstraint;
@protocol PTHTweetbotPostViewDelegate;

__attribute__((visibility("hidden")))
@interface PTHTweetbotPostPhoneView : XXUnknownSuperclass <UITextViewDelegate> {
	_PTHTweetbotPostPhoneScrollView* _scrollView;
	NSLayoutConstraint* _textViewMediaDraftRightConstraint;
	NSLayoutConstraint* _textViewHeightConstraint;
	id _draftObserver;
	PTHTweetbotPostMediaView* _mediaView;
	NSArray* _mediaArray;
	PTHTweetbotPostThreadView* _threadView;
	PTHTweetbotPostGeoView* _geoView;
	PTHTweetbotPostDraftIndicatorView* _draftIndicatorView;
	BOOL _draftIndicatorVisible;
	BOOL _canShowDraftIndicator;
	BOOL _keyboardFirstTime;
	CGRect _keyboardFrame;
	BOOL _keyboardVisible;
	PTHTweetbotPostDraft* _draft;
	id<PTHTweetbotPostViewDelegate> _delegate;
	UITextView* _textView;
	PTHTweetbotPostToolbarView* _toolbarView;
	PTHTweetbotAvatarView* _avatarView;
}
@property(readonly, assign, nonatomic) PTHTweetbotAvatarView* avatarView;
@property(readonly, assign, nonatomic) PTHTweetbotPostToolbarView* toolbarView;
@property(readonly, assign, nonatomic) UITextView* textView;
@property(readonly, assign, nonatomic) CGRect keyboardFrame;
@property(readonly, assign, nonatomic) UIScrollView* scrollView;
@property(readonly, assign, nonatomic) float visibleHeight;
@property(assign, nonatomic) __weak id<PTHTweetbotPostViewDelegate> delegate;
@property(retain, nonatomic) PTHTweetbotPostDraft* draft;
-(void).cxx_destruct;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_showAccounts;
-(void)_updateDraftsIndicator;
-(void)showDraftsIndicatorIfNeeded;
-(unsigned)draftCount;
-(void)hideDraftsIndicatorIfNeeded;
-(void)keyboardDidChange:(id)keyboard;
-(void)_draftDidUpdate;
-(void)textViewDidChange:(id)textView;
-(BOOL)_updateTextConstraintIfNeeded;
-(void)_updateContentScroll;
-(void)textViewDidChangeSelection:(id)textView;
-(id)initWithFrame:(CGRect)frame;
@end

