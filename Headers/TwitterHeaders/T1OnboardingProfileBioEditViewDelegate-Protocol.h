//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterAuthenticated.h"
#import "UITextViewDelegate.h"

@class T1OnboardingProfileBioEditView;

@protocol T1OnboardingProfileBioEditViewDelegate <UITextViewDelegate, TFNTwitterAuthenticated>

@optional
- (void)bioEditView:(T1OnboardingProfileBioEditView *)arg1 characterCountChangedTo:(unsigned int)arg2;
- (void)bioEditView:(T1OnboardingProfileBioEditView *)arg1 didChangeStateTo:(int)arg2;
@end

