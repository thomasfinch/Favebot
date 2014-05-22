//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1AmbientNotificationViewController.h"

@class T1UserNotificationTableRowAdapter, T1UserNotificationUsersViewController, TFNTwitterUser, UIActivityIndicatorView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface T1UserNotificationViewController : T1AmbientNotificationViewController
{
    BOOL _loaded;
    T1UserNotificationTableRowAdapter *_adapter;
    T1UserNotificationUsersViewController *_usersViewController;
    UIActivityIndicatorView *_activityIndicator;
    TFNTwitterUser *_user;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) T1UserNotificationUsersViewController *usersViewController; // @synthesize usersViewController=_usersViewController;
@property(retain, nonatomic) T1UserNotificationTableRowAdapter *adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (void)viewDidLoad;
- (void)_updateViewsForUser;
- (void)addTapRecognizerToUserCell:(id)arg1;
- (void)_tapAction:(id)arg1;
- (void)_userDidUpdate:(id)arg1;
- (void)_updateHeight;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 appNavigation:(id)arg2 message:(id)arg3 icon:(id)arg4 user:(id)arg5;
- (void)_fetchedRelationship:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)_loadRelationship;
- (void)_fetchedUser:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)_fetchPartialUser;
- (float)semiModalHeight;

@end
