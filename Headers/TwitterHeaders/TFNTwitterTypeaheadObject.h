//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray;

@interface TFNTwitterTypeaheadObject : NSObject <NSCoding>
{
    int _score;
    NSArray *_tokens;
    unsigned int _priority;
}

+ (unsigned int)filterTypeForString:(id)arg1;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(nonatomic) int score; // @synthesize score=_score;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)socialText;

@end

