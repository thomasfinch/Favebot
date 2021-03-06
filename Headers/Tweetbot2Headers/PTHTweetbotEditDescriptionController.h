//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UIImageView, UILabel, UITextView;

@interface PTHTweetbotEditDescriptionController : PTHViewController <UITextViewDelegate>
{
    UIImageView *_descriptionBackgroundView;
    UITextView *_descriptionTextView;
    UILabel *_counterLabel;
    BOOL _firstTime;
    unsigned int _maxDescriptionLength;
}

@property(nonatomic) unsigned int maxDescriptionLength; // @synthesize maxDescriptionLength=_maxDescriptionLength;
- (void)dealloc;
- (void)viewDidUnload;
- (void)unload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardDidChange:(id)arg1;
@property(copy, nonatomic) NSString *editDescription;
- (void)loadView;

@end

