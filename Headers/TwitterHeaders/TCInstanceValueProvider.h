//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCCardValueProvider.h"

@class NSDictionary;

@interface TCInstanceValueProvider : NSObject <TCCardValueProvider>
{
    NSDictionary *_instanceData;
}

+ (id)parseRawBindings:(id)arg1 returningScribeDict:(id *)arg2 failingIfAnyMalformed:(BOOL)arg3;
@property(retain, nonatomic) NSDictionary *instanceData; // @synthesize instanceData=_instanceData;
- (void).cxx_destruct;
- (id)dataForCardWithType:(int)arg1 key:(id)arg2 error:(id *)arg3;
- (BOOL)providesDataOfType:(int)arg1;
- (void)incorporateNewInstanceData:(id)arg1;
- (id)initWithInstanceData:(id)arg1;

@end

