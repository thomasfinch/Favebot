//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFNScribeLog : NSObject
{
    NSString *_category;
    NSString *_eventName;
    id _data;
    int _type;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;

@end
