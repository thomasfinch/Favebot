//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTwitterAccount;

@protocol T1AccountChooser <NSObject>
@property(copy, nonatomic) CDUnknownBlockType didChooseAccountBlock;
@property(nonatomic) BOOL editable;
@property(retain, nonatomic) TFNTwitterAccount *currentAccount;
@end

