//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterTypeaheadObject.h"

@class NSString;

@interface TFNTwitterTypeaheadOneClick : TFNTwitterTypeaheadObject
{
    NSString *_topic;
    unsigned int _locationType;
    unsigned int _filterType;
    unsigned int _resultType;
}

@property(nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(nonatomic) unsigned int locationType; // @synthesize locationType=_locationType;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

