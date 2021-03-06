//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

#import "PTHPageViewDataSource.h"
#import "PTHPageViewDelegate.h"

@class NSArray, NSMutableArray, PTHPageView, UILabel;

@interface PTHNoticeViewController : PTHViewController <PTHPageViewDataSource, PTHPageViewDelegate>
{
    NSArray *_notices;
    NSMutableArray *_noticeViews;
    UILabel *_postedDateLabel;
    PTHPageView *_pageView;
}

- (void)dealloc;
- (void)ok:(id)arg1;
- (void)pageViewDidChangePage:(id)arg1;
- (void)pageViewDidScroll:(id)arg1;
- (id)pageView:(id)arg1 pageAtIndex:(int)arg2;
- (unsigned int)numberOfPagesInPageView:(id)arg1;
- (void)_updatePostedDateLabel;
- (void)openActionURL:(id)arg1;
- (void)loadView;
- (id)newViewForNotice:(id)arg1;
- (id)initWithNotices:(id)arg1;

@end

