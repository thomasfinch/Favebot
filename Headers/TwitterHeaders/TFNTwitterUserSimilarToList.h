//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterUserRelationshipUserList.h"

@class NSArray;

@interface TFNTwitterUserSimilarToList : TFNTwitterUserRelationshipUserList
{
    NSArray *_exclusions;
}

@property(retain, nonatomic) NSArray *exclusions; // @synthesize exclusions=_exclusions;
- (void).cxx_destruct;
- (void)didAddUsers:(id)arg1;
- (id)emptyStreamMessage;
- (void)_loadMore;

@end

