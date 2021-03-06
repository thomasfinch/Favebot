//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TFNMockMessageComposeViewDelegate.h"

@class NSArray, NSString, TFNMockMessageComposeView;

@interface TFNMockMessageComposeRootViewController : UIViewController <TFNMockMessageComposeViewDelegate>
{
    id <MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
}

@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) __weak id <MFMessageComposeViewControllerDelegate> messageComposeDelegate; // @synthesize messageComposeDelegate=_messageComposeDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNMockMessageComposeView *messageComposeView;
- (void)messageComposeViewSendButtonTapped:(id)arg1;
- (void)_cancelButtonTapped;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

