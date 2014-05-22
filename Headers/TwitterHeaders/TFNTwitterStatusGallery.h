//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TFNTwitterPlistSerialization.h"

@class NSMutableArray;

@interface TFNTwitterStatusGallery : NSObject <NSCoding, TFNTwitterPlistSerialization>
{
    int _galleryType;
    NSMutableArray *_statuses;
}

@property(retain, nonatomic) NSMutableArray *statuses; // @synthesize statuses=_statuses;
@property(nonatomic) int galleryType; // @synthesize galleryType=_galleryType;
- (void).cxx_destruct;
- (id)description;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

