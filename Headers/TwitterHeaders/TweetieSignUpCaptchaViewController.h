//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNStaticTableViewController.h"

@class NSString, NSURL, UIImage, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface TweetieSignUpCaptchaViewController : TFNStaticTableViewController
{
    NSString *captchaToken;
    NSURL *captchaImageURL;
    UIImage *captchaImage;
    UIView *header;
    UITextField *_solutionField;
    struct {
        unsigned int loadingImage:1;
    } _flags;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIImage *captchaImage; // @synthesize captchaImage;
@property(retain, nonatomic) NSURL *captchaImageURL; // @synthesize captchaImageURL;
@property(copy, nonatomic) NSString *captchaToken; // @synthesize captchaToken;
- (void).cxx_destruct;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)loadTableView;
- (void)dealloc;

@end

