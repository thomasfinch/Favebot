//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterUsersStream.h"

@class NSString;

@interface TFNTwitterTopicUsersStream : TFNTwitterUsersStream
{
    NSString *_slug;
}

@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
- (void).cxx_destruct;
- (void)_didReceiveResponseObject:(id)arg1 top:(BOOL)arg2;
- (void)_loadBottomWithRequest:(id)arg1;
- (BOOL)canLoadTop;

@end
