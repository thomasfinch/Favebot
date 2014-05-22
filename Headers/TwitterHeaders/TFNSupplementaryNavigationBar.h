//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNNavigationBar.h"

#import "TFNCustomTabBarDelegate.h"

@class NSArray, TFNCustomTabBar;

@interface TFNSupplementaryNavigationBar : TFNNavigationBar <TFNCustomTabBarDelegate>
{
    TFNCustomTabBar *_tabBar;
    BOOL _dividersEnabled;
    NSArray *_itemViews;
}

@property(nonatomic, getter=isDividersEnabled) BOOL dividersEnabled; // @synthesize dividersEnabled=_dividersEnabled;
@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
- (void).cxx_destruct;
- (int)customTabBar:(id)arg1 contentModeForTabAtIndex:(int)arg2 withView:(id)arg3;
- (struct CGSize)customTabBar:(id)arg1 sizeForTabAtIndex:(int)arg2 withView:(id)arg3;
- (void)_updateSupplementaryBarButtonItems;
- (void)setItemViews:(id)arg1 withDividers:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <TFNSupplementaryNavigationBarDelegate> delegate;

@end
