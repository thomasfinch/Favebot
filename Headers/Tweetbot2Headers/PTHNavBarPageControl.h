//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIButton;

@interface PTHNavBarPageControl : UIControl
{
    unsigned int _currentPage;
    unsigned int _pageCount;
    UIButton *_upButton;
    UIButton *_downButton;
}

@property(nonatomic) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) unsigned int currentPage; // @synthesize currentPage=_currentPage;
- (void)dealloc;
- (void)_next;
- (void)_previous;
- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;

@end
