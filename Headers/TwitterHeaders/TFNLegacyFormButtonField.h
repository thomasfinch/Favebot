//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNLegacyFormField.h"

@class NSString, UIColor;

@interface TFNLegacyFormButtonField : TFNLegacyFormField
{
    BOOL enabled;
    NSString *title;
    CDUnknownBlockType handler;
    int accessoryType;
    UIColor *textColor;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(nonatomic) int accessoryType; // @synthesize accessoryType;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)tableViewCell;
- (void)_updateEnabledState;

@end

