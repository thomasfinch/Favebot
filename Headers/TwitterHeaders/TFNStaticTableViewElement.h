//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNStaticTableViewController;

@interface TFNStaticTableViewElement : NSObject
{
    id userInfo;
    NSString *title;
    NSString *subtitle;
    id target;
    SEL action;
    TFNStaticTableViewController *associatedViewController;
    CDUnknownBlockType _actionBlock;
    float height;
}

+ (id)element;
@property(nonatomic) float height; // @synthesize height;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) __weak TFNStaticTableViewController *associatedViewController; // @synthesize associatedViewController;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
@property(nonatomic) SEL action; // @synthesize action;
@property(nonatomic) __weak id target; // @synthesize target;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)didTapAccessoryInTableView:(id)arg1;
- (void)willSelectInTableView:(id)arg1;
- (void)didSelectInTableView:(id)arg1;
- (id)cellForTableView:(id)arg1;
- (float)heightInTableView:(id)arg1;
@property(readonly, nonatomic) BOOL isSelectable;
- (void)performActionBlock:(id)arg1;

@end

