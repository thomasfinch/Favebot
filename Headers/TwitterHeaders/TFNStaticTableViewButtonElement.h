//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNStaticTableViewElement.h"

@interface TFNStaticTableViewButtonElement : TFNStaticTableViewElement
{
    id accessoryTarget;
    SEL accessoryAction;
}

@property(nonatomic) SEL accessoryAction; // @synthesize accessoryAction;
@property(nonatomic) __weak id accessoryTarget; // @synthesize accessoryTarget;
- (void).cxx_destruct;
- (void)didTapAccessoryInTableView:(id)arg1;
- (id)cellForTableView:(id)arg1;

@end

