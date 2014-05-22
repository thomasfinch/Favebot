/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "PTHTweetbotEntityTextLabelDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, PTHTweetbotEntityTextLabel, PTHTweetbotAvatarView, PTHTweetbotDirectMessage, PTHTweetbotDirectMessagesController, PTHTweetbotPostDraft, _PTHMaskedImageView, PTHKeyValueObserver, UILabel, UIImageView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface PTHTweetbotDirectMessageCell : XXUnknownSuperclass <PTHTweetbotEntityTextLabelDelegate> {
	_PTHMaskedImageView* _textBackgroundView;
	PTHTweetbotEntityTextLabel* _entityTextLabel;
	PTHTweetbotAvatarView* _avatarView;
	UILabel* _dateLabel;
	BOOL _registeredForSecondNotification;
	BOOL _wasCurrentUser;
	NSMutableArray* _subviewConstraints;
	NSLayoutConstraint* _entityTextLabelWidthConstraint;
	NSLayoutConstraint* _entityTextLabelHeightConstraint;
	PTHKeyValueObserver* _draftObserver;
	int _directMessageState;
	float _lastTextSizeCellWidth;
	UIImageView* _imageView;
	PTHTweetbotDirectMessagesController* _viewController;
	PTHTweetbotDirectMessage* _directMessage;
	PTHTweetbotPostDraft* _draft;
}
@property(retain, nonatomic) PTHTweetbotPostDraft* draft;
@property(retain, nonatomic) PTHTweetbotDirectMessage* directMessage;
@property(assign, nonatomic) __weak PTHTweetbotDirectMessagesController* viewController;
+(float)cellHeightWithItem:(id)item forTableView:(id)tableView;
+(CGSize)textSizeForItem:(id)item forWidth:(float)width;
+(void)initialize;
-(void).cxx_destruct;
-(void)dealloc;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(void)longPressMedia:(id)media;
-(void)showMedia;
-(void)_updateDraft;
-(id)_mediaEntity;
-(void)_updateTextSizeIfNeeded;
-(void)_updateTextSize;
-(void)_updateDate;
-(void)_updateDateSecond;
-(id)absoluteDateFormatter;
-(id)timeDifferenceFormatter;
-(void)entityTextLabel:(id)label didLongPressEntity:(id)entity entityFrame:(CGRect)frame;
-(void)entityTextLabel:(id)label didTouchUpEntity:(id)entity entityFrame:(CGRect)frame;
-(void)_showPostDraftOptionsFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions postDraft:(id)draft completion:(id)completion;
-(void)_showUser;
-(void)_updateColors;
-(void)updateConstraints;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

