//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotCursor.h"

@class CLRegion, NSString;

@interface PTHTweetbotStatusSearchCursor : PTHTweetbotCursor
{
    NSString *_query;
    NSString *_resultType;
    CLRegion *_region;
}

+ (Class)itemClass;
@property(retain, nonatomic) CLRegion *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void)dealloc;
- (id)itemsArrayFromResponse:(id)arg1;
- (id)requestURLString;
- (id)queryDictionary;
- (BOOL)usesTIDPagination;
- (BOOL)hasReadStatus;
- (id)uniqueID;
- (id)initWithAccount:(id)arg1 query:(id)arg2 resultType:(id)arg3;

@end

