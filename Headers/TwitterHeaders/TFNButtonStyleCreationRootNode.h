//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNButtonStyleCreation.h"

@class NSMutableArray, NSMutableDictionary;

@interface TFNButtonStyleCreationRootNode : TFNButtonStyleCreation
{
    NSMutableArray *_chronologicalSubnodes;
    NSMutableDictionary *_subnodes;
}

@property(retain, nonatomic) NSMutableDictionary *subnodes; // @synthesize subnodes=_subnodes;
@property(retain, nonatomic) NSMutableArray *chronologicalSubnodes; // @synthesize chronologicalSubnodes=_chronologicalSubnodes;
- (void).cxx_destruct;
- (id)aggregatedStyleForPresentationKey:(unsigned int)arg1 variantKey:(unsigned int)arg2 sizeKey:(unsigned int)arg3 weightKey:(unsigned int)arg4 stateKey:(unsigned int)arg5;
- (id)subnodeWithKey:(unsigned int)arg1 parentNode:(id)arg2;
- (id)init;

@end

