//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

#import "T1DirectMessageBubbleViewDelegate.h"

@class NSDateFormatter, T1AvatarImageView, T1DirectMessageBubbleView, TFNDownload, TFNTwitterAccount, TFNTwitterDirectMessage, UIButton, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface T1DirectMessageConversationThreadCell : TFNTableViewCell <T1DirectMessageBubbleViewDelegate>
{
    BOOL _sentMessage;
    T1AvatarImageView *_profileImageButton;
    UILabel *_timestampText;
    UIButton *_errorButton;
    NSDateFormatter *_dateFormatter;
    TFNTwitterAccount *_account;
    BOOL _showOwnAvatar;
    id <T1DirectMessageConversationThreadCellDelegate> _delegate;
    TFNTwitterDirectMessage *_message;
    TFNDownload *_previewImageDownload;
    T1DirectMessageBubbleView *_bubbleView;
}

+ (id)_timestampFont;
+ (id)_nameFont;
+ (id)_messageFont;
+ (float)heightForMessage:(id)arg1 account:(id)arg2 inTableView:(id)arg3;
@property(retain, nonatomic) T1DirectMessageBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) TFNDownload *previewImageDownload; // @synthesize previewImageDownload=_previewImageDownload;
@property(readonly, nonatomic) TFNTwitterDirectMessage *message; // @synthesize message=_message;
@property(nonatomic) BOOL showOwnAvatar; // @synthesize showOwnAvatar=_showOwnAvatar;
@property(nonatomic) __weak id <T1DirectMessageConversationThreadCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_retrySend:(id)arg1;
- (void)_handleActiveRangeTapped:(id)arg1;
- (void)_didUpdate:(id)arg1;
- (void)_profileImageTapped;
- (void)directMessageBubbleTextLongPressed:(id)arg1;
- (void)directMessageBubbleMediaPreviewImageLongPressed:(id)arg1;
- (void)directMessageBubble:(id)arg1 activeTextRangeLongPressed:(id)arg2 rect:(struct CGRect)arg3;
- (void)directMessageBubble:(id)arg1 activeTextRangeTapped:(id)arg2;
- (void)directMessageBubbleMediaPreviewImageTapped:(id)arg1;
- (void)directMessageBubble:(id)arg1 actionSelected:(unsigned int)arg2 menuContext:(unsigned int)arg3;
- (void)_addUserToAddressBook;
- (id)_timestampString;
- (void)_updateErrorButton;
- (float)_timestampHeight;
- (void)_updateTimestamp;
- (BOOL)_isMessageSent;
- (void)_updateProfileImage;
- (void)_reportMessage;
- (void)_deleteMessage;
- (void)_copyText;
- (void)_saveMedia;
@property(readonly, nonatomic) struct CGRect avatarRect;
@property(nonatomic) BOOL mediaPreviewHidden;
@property(readonly, nonatomic) UIImage *mediaPreviewImage;
- (struct CGRect)mediaPreviewRect;
@property(readonly, nonatomic) struct CGRect bubbleRect;
@property(readonly, nonatomic) struct CGRect errorButtonRect;
- (void)setMessage:(id)arg1 withAccount:(id)arg2;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

