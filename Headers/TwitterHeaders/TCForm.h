//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TCForm : NSObject
{
    int _identifier;
    int _apiRequestActionIdentifier;
    NSArray *_elementIDs;
}

@property(retain, nonatomic) NSArray *elementIDs; // @synthesize elementIDs=_elementIDs;
@property(nonatomic) int apiRequestActionIdentifier; // @synthesize apiRequestActionIdentifier=_apiRequestActionIdentifier;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end
