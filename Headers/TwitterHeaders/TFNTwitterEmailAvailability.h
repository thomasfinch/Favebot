//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFNTwitterEmailAvailability : NSObject
{
    BOOL _isValid;
    NSString *_message;
}

+ (id)availabilityWithJSONData:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

