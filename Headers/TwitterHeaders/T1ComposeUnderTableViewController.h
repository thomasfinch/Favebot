//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

__attribute__((visibility("hidden")))
@interface T1ComposeUnderTableViewController : TFNItemsDataViewController
{
    BOOL _showHeader;
    BOOL _scrollingEnabled;
    BOOL _locked;
    float _headerHeight;
    float _offsetWhenLocked;
}

@property(nonatomic) float offsetWhenLocked; // @synthesize offsetWhenLocked=_offsetWhenLocked;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled; // @synthesize scrollingEnabled=_scrollingEnabled;
@property(nonatomic) float headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) BOOL showHeader; // @synthesize showHeader=_showHeader;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stopScrolling;
- (void)enableScrolling:(BOOL)arg1;
- (void)viewDidLoad;

@end

