//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterDateComparable.h"

@class NSArray, NSDate;

@interface TFNTwitterRecap : NSObject <TFNTwitterDateComparable>
{
    NSArray *_statuses;
    NSDate *_comparableDate;
}

- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)comparableDate;
- (id)description;
- (id)statuses;
- (id)initWithStatuses:(id)arg1 comparableDate:(id)arg2;
- (id)initWithStatuses:(id)arg1;
- (id)init;

@end

