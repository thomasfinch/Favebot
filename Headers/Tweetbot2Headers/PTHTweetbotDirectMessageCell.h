//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "PTHTweetbotEntityTextLabelDelegate.h"

@class PTHTweetbotAvatarFramedView, PTHTweetbotDirectMessage, PTHTweetbotDirectMessagesController, PTHTweetbotEntityTextLabel, PTHTweetbotPostDraft, UIImageView, UILabel;

@interface PTHTweetbotDirectMessageCell : UITableViewCell <PTHTweetbotEntityTextLabelDelegate>
{
    UIImageView *_textBackgroundView;
    PTHTweetbotEntityTextLabel *_entityTextLabel;
    PTHTweetbotAvatarFramedView *_avatarFrameView;
    UILabel *_dateLabel;
    BOOL _registeredForSecondNotification;
    PTHTweetbotDirectMessage *_directMessage;
    PTHTweetbotPostDraft *_draft;
    PTHTweetbotDirectMessagesController *_viewController;
    struct CGSize _textSize;
}

+ (float)heightForTextHeight:(float)arg1;
+ (struct CGSize)textSizeForDirectMessage:(id)arg1 forWidth:(float)arg2;
@property(nonatomic) PTHTweetbotDirectMessagesController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(retain, nonatomic) PTHTweetbotPostDraft *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) PTHTweetbotDirectMessage *directMessage; // @synthesize directMessage=_directMessage;
- (void)dealloc;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateDraft;
- (void)_updateDate;
- (void)_updateDateSecond;
- (id)absoluteDateFormatter;
- (id)timeDifferenceFormatter;
- (void)entityTextLabel:(id)arg1 didLongPressEntity:(id)arg2 entityFrame:(struct CGRect)arg3;
- (void)entityTextLabel:(id)arg1 didTouchUpEntity:(id)arg2 entityFrame:(struct CGRect)arg3;
- (void)_showPostDraftOptionsFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 postDraft:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_showUser;
- (void)_fontDidChange;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

