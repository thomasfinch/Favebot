//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

#import "TFNTwitterAuthenticated.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSDate, T1SearchBar, TFNTwitterAccount, TFNTwitterExploreStream, UIBarButtonItem, UIImage;

__attribute__((visibility("hidden")))
@interface T1ExploreV3DataViewController : TFNItemsDataViewController <UITextFieldDelegate, TFNTwitterAuthenticated>
{
    BOOL _hidesBackItem;
    TFNTwitterAccount *_account;
    TFNTwitterExploreStream *_stream;
    T1SearchBar *_searchBar;
    UIBarButtonItem *_composeTweetButton;
    NSArray *_savedLeftNavigationItems;
    NSArray *_savedRightNavigationItems;
    UIImage *_barBackgroundImage;
    UIImage *_barShadowImage;
    NSDate *_lastRefresh;
}

@property(retain, nonatomic) NSDate *lastRefresh; // @synthesize lastRefresh=_lastRefresh;
@property(retain, nonatomic) UIImage *barShadowImage; // @synthesize barShadowImage=_barShadowImage;
@property(retain, nonatomic) UIImage *barBackgroundImage; // @synthesize barBackgroundImage=_barBackgroundImage;
@property(nonatomic) BOOL hidesBackItem; // @synthesize hidesBackItem=_hidesBackItem;
@property(retain, nonatomic) NSArray *savedRightNavigationItems; // @synthesize savedRightNavigationItems=_savedRightNavigationItems;
@property(retain, nonatomic) NSArray *savedLeftNavigationItems; // @synthesize savedLeftNavigationItems=_savedLeftNavigationItems;
@property(retain, nonatomic) UIBarButtonItem *composeTweetButton; // @synthesize composeTweetButton=_composeTweetButton;
@property(retain, nonatomic) T1SearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) TFNTwitterExploreStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribe;
- (id)scribeContextForIndexPath:(id)arg1;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_composeTweet;
- (void)update;
- (void)loadTop;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)title;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

