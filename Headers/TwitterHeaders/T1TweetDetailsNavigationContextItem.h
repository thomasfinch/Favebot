//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, T1AccountSettingsViewController, T1AppNavigationContext, TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface T1TweetDetailsNavigationContextItem : NSObject
{
    BOOL _showActiveAccount;
    TFNTwitterAccount *_account;
    T1AccountSettingsViewController *_accountSettingsViewController;
    NSString *_leftIcon;
    T1AppNavigationContext *_navigationContext;
    NSString *_text;
}

+ (id)tfn_defaultDataViewAdapter;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL showActiveAccount; // @synthesize showActiveAccount=_showActiveAccount;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext; // @synthesize navigationContext=_navigationContext;
@property(copy, nonatomic) NSString *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(retain, nonatomic) T1AccountSettingsViewController *accountSettingsViewController; // @synthesize accountSettingsViewController=_accountSettingsViewController;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithStatus:(id)arg1 navigationContext:(id)arg2 account:(id)arg3 showActiveAccount:(BOOL)arg4;

@end

