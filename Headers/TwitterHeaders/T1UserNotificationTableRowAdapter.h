//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1UserOrRecommendationTableRowAdapter.h"

#import "TFNTwitterAuthenticated.h"

@class T1UserNotificationViewController, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1UserNotificationTableRowAdapter : T1UserOrRecommendationTableRowAdapter <TFNTwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    T1UserNotificationViewController *parentController;
}

@property(nonatomic) __weak T1UserNotificationViewController *parentController; // @synthesize parentController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (float)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;

@end

