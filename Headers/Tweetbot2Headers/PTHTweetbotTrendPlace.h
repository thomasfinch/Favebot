//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface PTHTweetbotTrendPlace : NSObject <NSCoding>
{
    unsigned int _woeID;
    unsigned int _parentWOEID;
    NSString *_name;
    PTHTweetbotTrendPlace *_parent;
    NSArray *_children;
}

@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) PTHTweetbotTrendPlace *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int parentWOEID; // @synthesize parentWOEID=_parentWOEID;
@property(nonatomic) unsigned int woeID; // @synthesize woeID=_woeID;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) BOOL isWorld;
- (void)updateFromDictionary:(id)arg1;

@end

