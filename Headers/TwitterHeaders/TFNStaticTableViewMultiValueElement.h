//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNStaticTableViewElement.h"

@class NSArray, NSString;

@interface TFNStaticTableViewMultiValueElement : TFNStaticTableViewElement
{
    NSString *key;
    NSArray *titles;
    NSArray *values;
    id defaultValue;
    CDUnknownBlockType _additionalOptionsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType additionalOptionsBlock; // @synthesize additionalOptionsBlock=_additionalOptionsBlock;
@property(copy, nonatomic) id defaultValue; // @synthesize defaultValue;
@property(copy, nonatomic) NSArray *values; // @synthesize values;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles;
@property(copy, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (void)didSelectInTableView:(id)arg1;
- (id)cellForTableView:(id)arg1;
- (BOOL)isSelectedValue:(id)arg1;
- (id)selectedTitle;
- (id)currentValue;

@end

