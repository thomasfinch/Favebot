//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"

@class NSMutableArray, NSMutableDictionary;

@interface TFNMutableAttributedArray : NSObject <NSCoding, NSCopying, NSMutableCopying, NSFastEnumeration>
{
    NSMutableArray *_array;
    NSMutableDictionary *userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) NSMutableArray *_array; // @synthesize _array;
- (void).cxx_destruct;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)subarrayWithAtMost:(int)arg1;
- (id)mapFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)map:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)map:(SEL)arg1 withObject:(id)arg2;
- (id)map:(SEL)arg1;

@end
