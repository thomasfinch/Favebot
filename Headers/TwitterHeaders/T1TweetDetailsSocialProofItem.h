//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNTwitterStatus;

__attribute__((visibility("hidden")))
@interface T1TweetDetailsSocialProofItem : NSObject
{
    TFNTwitterStatus *_status;
    NSString *_text;
}

+ (id)tfn_defaultDataViewAdapter;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

