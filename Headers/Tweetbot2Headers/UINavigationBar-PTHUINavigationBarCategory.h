//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

@class NSArray;

@interface UINavigationBar (PTHUINavigationBarCategory)
+ (id)spinnerImages;
+ (void)setSpinnerImages:(id)arg1;
+ (void)configureNavigationBar:(id)arg1;
+ (CDUnknownBlockType)configureNavigationBarBlock;
+ (void)setConfigureNavigationBarBlock:(CDUnknownBlockType)arg1;
+ (void)setConfigureNavbarButtonBlock:(CDUnknownBlockType)arg1;
+ (void)configureNavbarButton:(id)arg1 withStyle:(int)arg2 forPrefix:(id)arg3;
+ (void)configureNavbarButton:(id)arg1 withStyle:(int)arg2;
@property(copy, nonatomic) NSArray *spinnerImages;
- (void)customConfigure;
@property(copy, nonatomic) CDUnknownBlockType configureNavigationBarBlock;
@property(copy, nonatomic) CDUnknownBlockType configureNavbarButtonBlock;
- (void)configureNavbarButton:(id)arg1 withStyle:(int)arg2;
@end

