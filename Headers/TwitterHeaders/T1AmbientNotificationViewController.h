//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNViewController.h"

#import "T1AmbientNotificationPresenting.h"
#import "TFNTwitterAuthenticated.h"

@class NSArray, NSString, T1AmbientNotificationTitleView, T1AmbientNotificationView, TFNTimer, TFNTwitterAccount, UIImage;

__attribute__((visibility("hidden")))
@interface T1AmbientNotificationViewController : TFNViewController <TFNTwitterAuthenticated, T1AmbientNotificationPresenting>
{
    BOOL _impressionScribed;
    TFNTwitterAccount *_account;
    id <T1AppNavigation> _appNavigation;
    NSString *_scribeElement;
    CDUnknownBlockType _titleTappedBlock;
    id <T1AmbientNotificationViewControllerDelegate> _hostDelegate;
    NSString *_message;
    UIImage *_icon;
    T1AmbientNotificationTitleView *_notificationTitleView;
    NSArray *_titleGestureRecognizers;
    TFNTimer *_contentLoadTimer;
}

@property(retain, nonatomic) TFNTimer *contentLoadTimer; // @synthesize contentLoadTimer=_contentLoadTimer;
@property(retain, nonatomic) NSArray *titleGestureRecognizers; // @synthesize titleGestureRecognizers=_titleGestureRecognizers;
@property(retain, nonatomic) T1AmbientNotificationTitleView *notificationTitleView; // @synthesize notificationTitleView=_notificationTitleView;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) BOOL impressionScribed; // @synthesize impressionScribed=_impressionScribed;
@property(nonatomic) __weak id <T1AmbientNotificationViewControllerDelegate> hostDelegate; // @synthesize hostDelegate=_hostDelegate;
@property(copy, nonatomic) CDUnknownBlockType titleTappedBlock; // @synthesize titleTappedBlock=_titleTappedBlock;
@property(copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(nonatomic) __weak id <T1AppNavigation> appNavigation; // @synthesize appNavigation=_appNavigation;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)scribeOpen;
- (void)scribeDismiss;
- (void)scribeImpression;
- (id)scribeSection;
- (id)scribePage;
- (void)scribeDismissForAmbientNotificationHost:(id)arg1;
- (void)scribeOpenForAmbientNotificationHost:(id)arg1;
- (void)titleTapActionFromAmbientNotificationHost:(id)arg1;
- (float)heightForAmbientNotificationHost:(id)arg1;
- (void)_removeRecognizers;
- (void)_addrecognizers;
- (void)_titleSwipeDown:(id)arg1;
- (void)_titleSwipeUp:(id)arg1;
- (void)titleTapped:(id)arg1;
- (void)viewDidFullyAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (void)_contentLoadingDidTimeout:(id)arg1;
- (void)cancelContentLoadTimeout;
- (void)startContentLoadTimeout;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 appNavigation:(id)arg2 message:(id)arg3 icon:(id)arg4;
- (void)setMessage:(id)arg1 icon:(id)arg2;
@property(readonly) float semiModalHeight;
@property(readonly, nonatomic) T1AmbientNotificationView *notificationView;

@end

