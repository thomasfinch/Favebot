//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TCActionAPIRequestParameter : NSObject
{
    int _identifier;
    NSString *_key;
    NSString *_value;
}

@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;

@end

