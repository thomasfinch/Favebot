//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "T1EventContainerHeaderViewDelegate.h"
#import "TFNTwitterAuthenticated.h"

@class T1EventContainerHeaderView, TFNDownload, TFNTwitterAccount, TFNTwitterEvent;

__attribute__((visibility("hidden")))
@interface T1EventContainerHeaderViewController : UIViewController <T1EventContainerHeaderViewDelegate, TFNTwitterAuthenticated>
{
    BOOL _imageFailed;
    TFNTwitterAccount *_account;
    T1EventContainerHeaderView *_headerView;
    TFNTwitterEvent *_event;
    id <T1EventHeaderViewControllerDelegate> _delegate;
    TFNDownload *_imageDownload;
}

@property(nonatomic) BOOL imageFailed; // @synthesize imageFailed=_imageFailed;
@property(retain, nonatomic) TFNDownload *imageDownload; // @synthesize imageDownload=_imageDownload;
@property(nonatomic) __weak id <T1EventHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) T1EventContainerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_imageDownloadStatusDidChange;
- (void)_update;
- (void)eventContainerHeaderViewDidTapComposeButton:(id)arg1;
- (void)eventContainerHeaderViewDidTapBackButton:(id)arg1;
- (void)eventContainerHeaderViewDidUpdatePreferredSize:(id)arg1;
- (void)viewWillLayoutSubviews;
- (int)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)dealloc;

@end

