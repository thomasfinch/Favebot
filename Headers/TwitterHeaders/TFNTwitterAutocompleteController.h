//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNAutocompleteTableViewDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class TFNAutocompletePopover, TFNAutocompleteView, TFNTwitterAccount, TFNTwitterAutocompleteResultsController, TFNTwitterComposition, TFNTwitterTailfeatherInstance, UITextView;

@interface TFNTwitterAutocompleteController : NSObject <TFNAutocompleteTableViewDelegate, UIPopoverControllerDelegate>
{
    id <TFNAutocompleteControllerDelegate> delegate;
    UITextView *_textView;
    TFNTwitterComposition *_composition;
    TFNTwitterAccount *_account;
    BOOL isMatchingWord;
    int savedAutocorrectionType;
    int savedAutocapitalizationType;
    TFNAutocompletePopover *autocompletePopover;
    TFNAutocompleteView *autocompleteView;
    TFNTwitterAutocompleteResultsController *resultsController;
    BOOL forcedNameAutocomplete;
    BOOL forcedHashtagAutocomplete;
    unsigned int autocompleteStartIndex;
    int autocompleteType;
    TFNTwitterTailfeatherInstance *_tailfeatherInstance;
}

+ (struct _NSRange)wordRangeExpandRight:(struct _NSRange)arg1 text:(id)arg2;
+ (struct _NSRange)wordRangeExpandLeft:(struct _NSRange)arg1 text:(id)arg2;
+ (struct _NSRange)wordRangeIncludingUnderscore:(id)arg1 forIndex:(int)arg2;
+ (struct _NSRange)wordRange:(id)arg1 forIndex:(int)arg2;
@property(retain, nonatomic) TFNTwitterTailfeatherInstance *tailfeatherInstance; // @synthesize tailfeatherInstance=_tailfeatherInstance;
@property(readonly, nonatomic) int autocompleteType; // @synthesize autocompleteType;
@property(readonly, nonatomic) TFNAutocompletePopover *autocompletePopover; // @synthesize autocompletePopover;
@property(readonly, nonatomic) TFNAutocompleteView *autocompleteView; // @synthesize autocompleteView;
@property(nonatomic) __weak id <TFNAutocompleteControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)wordAtIndex:(int)arg1;
- (int)_autocompleteWordTypeForRange:(struct _NSRange)arg1 text:(id)arg2;
- (int)_autocompleteTypeForRange:(struct _NSRange)arg1 text:(id)arg2;
- (id)account;
- (void)didSelectAutocompleteItem:(id)arg1;
- (struct _NSRange)insertAutocompleteItem:(id)arg1 atRange:(struct _NSRange)arg2;
- (id)_insertAutocompleteContextualizedItemText:(id)arg1 itemType:(int)arg2 itemRange:(struct _NSRange)arg3 text:(id)arg4;
- (void)textViewDidChange:(id)arg1;
- (void)_updateAutocompleter:(id)arg1;
- (void)forceEnableHashtagAutocomplete;
- (void)forceEnableNameAutocomplete;
- (void)_forceAutoComplete;
- (void)_startOrUpdate;
- (void)didChangeSelection;
- (void)_updateResults:(id)arg1;
- (void)_end;
- (void)_receiveAutocompleteResults:(id)arg1;
- (id)resultsTableView;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textView:(id)arg2 composition:(id)arg3 account:(id)arg4;
- (id)initWithTextView:(id)arg1 composition:(id)arg2 account:(id)arg3;
- (id)init;

@end
