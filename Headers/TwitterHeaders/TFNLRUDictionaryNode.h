//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFNLRUDictionaryNode : NSObject
{
    id <NSCopying> _key;
    id _object;
    unsigned int _cost;
    TFNLRUDictionaryNode *_next;
    TFNLRUDictionaryNode *_previous;
}

@property(nonatomic) __weak TFNLRUDictionaryNode *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) TFNLRUDictionaryNode *next; // @synthesize next=_next;
@property(nonatomic) unsigned int cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) id <NSCopying> key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

