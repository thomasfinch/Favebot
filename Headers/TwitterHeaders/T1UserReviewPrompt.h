//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

__attribute__((visibility("hidden")))
@interface T1UserReviewPrompt : NSObject <UIAlertViewDelegate>
{
    BOOL _showing;
}

+ (void)_updateConsecutiveUsageCount;
+ (BOOL)_userInDisabledCountry;
+ (void)promptUserToRateAppConditionally;
+ (BOOL)_userMeetsConditionsForPrompt;
+ (void)_showPromptAfterDelay:(double)arg1;
+ (void)_showPrompt;
+ (id)_sharedPrompt;
@property(nonatomic) BOOL showing; // @synthesize showing=_showing;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end

