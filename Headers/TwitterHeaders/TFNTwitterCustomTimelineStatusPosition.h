//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFNTwitterCustomTimelineStatusPosition : NSObject
{
    long long _position;
    long long _statusID;
}

+ (id)sortedCustomTimelineStatusPositions:(id)arg1;
@property(nonatomic) long long statusID; // @synthesize statusID=_statusID;
@property(nonatomic) long long position; // @synthesize position=_position;
- (id)debugDescription;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

