//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterNumberAbbreviation.h"

@class NSNumberFormatter;

@interface TFNTwitterStandardNumberAbbreviation : NSObject <TFNTwitterNumberAbbreviation>
{
    int _maximumLength;
    NSNumberFormatter *_formatter;
    id <TFNTwitterNumberAbbreviation> _fallback;
}

@property(retain, nonatomic) id <TFNTwitterNumberAbbreviation> fallback; // @synthesize fallback=_fallback;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) int maximumLength; // @synthesize maximumLength=_maximumLength;
- (void).cxx_destruct;
- (BOOL)_hasValidUnits;
- (id)_unitForOrder:(unsigned int)arg1;
- (id)shortUnitForMillions;
- (id)shortUnitForThousands;
- (id)abbreviatedStringForNumber:(id)arg1;
- (id)initWithMaximumLength:(int)arg1 fallback:(id)arg2;

@end

