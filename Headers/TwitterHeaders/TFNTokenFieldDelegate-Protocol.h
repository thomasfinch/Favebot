//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNTokenControl, TFNTokenField;

@protocol TFNTokenFieldDelegate <NSObject>

@optional
- (void)tokenField:(TFNTokenField *)arg1 didReturnFromEditing:(NSString *)arg2;
- (BOOL)tokenField:(TFNTokenField *)arg1 shouldReturnFromEditing:(NSString *)arg2;
- (void)tokenField:(TFNTokenField *)arg1 didRemoveToken:(TFNTokenControl *)arg2 atIndex:(unsigned int)arg3;
- (BOOL)tokenField:(TFNTokenField *)arg1 shouldRemoveToken:(TFNTokenControl *)arg2 atIndex:(unsigned int)arg3;
- (void)tokenField:(TFNTokenField *)arg1 didAddToken:(TFNTokenControl *)arg2 atIndex:(unsigned int)arg3;
- (BOOL)tokenField:(TFNTokenField *)arg1 shouldAddToken:(TFNTokenControl *)arg2 atIndex:(unsigned int)arg3;
- (void)tokenField:(TFNTokenField *)arg1 didResize:(struct CGRect)arg2;
- (void)tokenField:(TFNTokenField *)arg1 willResize:(struct CGRect)arg2;
@end
