//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1NewDirectMessageAbstractThreadEntryDisplayModel.h"

@class NSArray, NSString, TFNAttributedTextModel, TFNNewDirectMessageEntry;

__attribute__((visibility("hidden")))
@interface T1NewDirectMessageEntryDisplayModel : T1NewDirectMessageAbstractThreadEntryDisplayModel
{
    BOOL _isSentMessage;
    TFNNewDirectMessageEntry *_entry;
    TFNAttributedTextModel *_attributedTextModel;
    NSArray *_displayRanges;
    unsigned int _style;
    int _mediaContentMode;
    float _statusLabelMargin;
    float _statusLabelHeight;
    NSString *_statusLabelText;
    struct CGSize _bubbleSize;
    struct CGRect _mediaFrame;
    struct CGRect _mediaActivityFrame;
    struct CGRect _mediaBorderFrame;
    struct CGRect _textFrame;
}

+ (float)_maxSize;
+ (Class)cellClass;
+ (id)cellReuseIdentifier;
+ (void)initialize;
@property(copy, nonatomic) NSString *statusLabelText; // @synthesize statusLabelText=_statusLabelText;
@property(nonatomic) float statusLabelHeight; // @synthesize statusLabelHeight=_statusLabelHeight;
@property(nonatomic) float statusLabelMargin; // @synthesize statusLabelMargin=_statusLabelMargin;
@property(nonatomic) struct CGSize bubbleSize; // @synthesize bubbleSize=_bubbleSize;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(nonatomic) struct CGRect mediaBorderFrame; // @synthesize mediaBorderFrame=_mediaBorderFrame;
@property(nonatomic) int mediaContentMode; // @synthesize mediaContentMode=_mediaContentMode;
@property(nonatomic) struct CGRect mediaActivityFrame; // @synthesize mediaActivityFrame=_mediaActivityFrame;
@property(nonatomic) struct CGRect mediaFrame; // @synthesize mediaFrame=_mediaFrame;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *displayRanges; // @synthesize displayRanges=_displayRanges;
@property(retain, nonatomic) TFNAttributedTextModel *attributedTextModel; // @synthesize attributedTextModel=_attributedTextModel;
@property(nonatomic) BOOL isSentMessage; // @synthesize isSentMessage=_isSentMessage;
@property(retain, nonatomic) TFNNewDirectMessageEntry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (id)_phoneNumberTextRangesInMessageText:(id)arg1;
- (void)_initializeWithMessage:(id)arg1 account:(id)arg2 constrainedToWidth:(float)arg3;
- (struct CGSize)_sizeForMessageText:(id)arg1 constrainedToWidth:(float)arg2 asSender:(BOOL)arg3 textModel:(id *)arg4 displayRanges:(id *)arg5;
- (id)_attributedTextModelForMessage:(id)arg1 asSender:(BOOL)arg2 displayRanges:(id *)arg3;
@property(readonly, nonatomic) TFNNewDirectMessageEntry *messageEntry;
@property(readonly, nonatomic) BOOL shouldShowAvatarImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMessageEntry:(id)arg1 account:(id)arg2;

@end

