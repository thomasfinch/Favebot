//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (TFNAdditions)
- (id)tfn_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)tfn_anyObject;
- (id)tfn_objectForAnyOfKeys:(id)arg1;
- (id)tfn_objectForPathElementKeys:(id)arg1;
- (id)_tfn_propertyListObjectForObject:(id)arg1;
- (id)tfn_dictionaryByRemovingInvalidPropertyListEntries;
- (id)tfn_normalizedParameterString;
- (id)tfn_URLParameterString;
- (id)tfn_mapBlock:(CDUnknownBlockType)arg1;
- (id)tfn_mapFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)tfn_httpLikeDateForKey:(id)arg1;
- (float)tfn_CGFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (float)tfn_CGFloatForKey:(id)arg1;
- (double)tfn_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (double)tfn_doubleForKey:(id)arg1;
- (float)tfn_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (float)tfn_floatForKey:(id)arg1;
- (long long)tfn_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)tfn_longLongForKey:(id)arg1;
- (int)tfn_integerForKey:(id)arg1 defaultValue:(int)arg2;
- (int)tfn_integerForKey:(id)arg1;
- (int)tfn_intForKey:(id)arg1 defaultValue:(int)arg2;
- (int)tfn_intForKey:(id)arg1;
- (BOOL)tfn_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (BOOL)tfn_boolForKey:(id)arg1;
- (id)tfn_boolNumberForKey:(id)arg1;
- (id)tfn_numberForKey:(id)arg1;
- (id)tfn_setForKey:(id)arg1;
- (id)tfn_dictionaryForKey:(id)arg1;
- (id)tfn_arrayOfDictionariesForKey:(id)arg1;
- (id)tfn_arrayForKey:(id)arg1;
- (id)tfn_stringForKey:(id)arg1;
@end
