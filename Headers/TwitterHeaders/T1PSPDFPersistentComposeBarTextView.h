//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNPSPDFPlaceholderTextView.h"

#import "T1PersistentComposeBarTextViewProvider.h"

@class NSString, UIColor, UIResponder;

__attribute__((visibility("hidden")))
@interface T1PSPDFPersistentComposeBarTextView : TFNPSPDFPlaceholderTextView <T1PersistentComposeBarTextViewProvider>
{
    UIResponder *_forwardingResponder;
}

@property(retain, nonatomic) UIResponder *forwardingResponder; // @synthesize forwardingResponder=_forwardingResponder;
- (void).cxx_destruct;
- (id)nextResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;

// Remaining properties
@property(nonatomic) BOOL acceptScrolls;
@property(copy, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) UIColor *placeholderTextColor;
@property(readonly, nonatomic) BOOL showingPlaceholder;

@end

