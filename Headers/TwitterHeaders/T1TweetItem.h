//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTwitterStatus;

__attribute__((visibility("hidden")))
@interface T1TweetItem : NSObject
{
    TFNTwitterStatus *_status;
    unsigned int _cellOptions;
}

+ (id)tfn_defaultDataViewAdapter;
@property(nonatomic) unsigned int cellOptions; // @synthesize cellOptions=_cellOptions;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

