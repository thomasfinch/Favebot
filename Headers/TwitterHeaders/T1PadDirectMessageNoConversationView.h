//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TFNTwitterScribe;

__attribute__((visibility("hidden")))
@interface T1PadDirectMessageNoConversationView : UIView
{
    id <T1DirectMessageActions> _dmActionsResponder;
    TFNTwitterScribe *_scribe;
}

@property(retain, nonatomic) TFNTwitterScribe *scribe; // @synthesize scribe=_scribe;
@property(nonatomic) __weak id <T1DirectMessageActions> dmActionsResponder; // @synthesize dmActionsResponder=_dmActionsResponder;
- (void).cxx_destruct;
- (void)_composeNewMessage;
- (id)_wideNewMessageImageHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

