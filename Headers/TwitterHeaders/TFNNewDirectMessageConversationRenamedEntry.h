//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNNewDirectMessageAbstractThreadEntry.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, TFNTwitterUser;

@interface TFNNewDirectMessageConversationRenamedEntry : TFNNewDirectMessageAbstractThreadEntry <NSCopying, NSCoding>
{
    TFNTwitterUser *_author;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TFNTwitterUser *author; // @synthesize author=_author;
- (void).cxx_destruct;
- (void)assimilateThreadEntry:(id)arg1;
- (int)entryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToThreadEntry:(id)arg1;

@end

