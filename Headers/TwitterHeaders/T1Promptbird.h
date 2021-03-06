//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, T1PromptbirdCell, TFNTwitterAccount, TFNTwitterPrompt;

__attribute__((visibility("hidden")))
@interface T1Promptbird : NSObject
{
    BOOL _promptLoading;
    T1PromptbirdCell *_cell;
    TFNTwitterAccount *_account;
    id <T1PromptbirdDelegate> _delegate;
    TFNTwitterPrompt *_prompt;
    NSString *_format;
}

@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) TFNTwitterPrompt *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) __weak id <T1PromptbirdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearPrompt;
- (BOOL)hasPrompt;
- (void)loadPromptForAccount:(id)arg1;
@property(readonly, nonatomic) BOOL acceptsNewPrompt;
- (id)promptItem;
- (id)setupPromptCell;
- (id)currentPromptCell;

@end

