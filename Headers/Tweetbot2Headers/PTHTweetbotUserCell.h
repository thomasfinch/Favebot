//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotStandardCell.h"

@class PTHTweetbotUser, UILabel;

@interface PTHTweetbotUserCell : PTHTweetbotStandardCell
{
    UILabel *_countsLabel;
    int _interfaceIdiom;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)fontDidChange;
- (void)setViewController:(id)arg1;
- (void)setItem:(id)arg1;
- (void)addUser:(id)arg1;
@property(readonly, retain, nonatomic) PTHTweetbotUser *user;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

