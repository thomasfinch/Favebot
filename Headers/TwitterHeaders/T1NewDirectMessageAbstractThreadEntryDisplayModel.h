//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNNewDirectMessageAbstractThreadEntry;

__attribute__((visibility("hidden")))
@interface T1NewDirectMessageAbstractThreadEntryDisplayModel : NSObject
{
    BOOL _shouldShowNub;
    TFNNewDirectMessageAbstractThreadEntry *_entry;
}

+ (Class)cellClass;
+ (id)cellReuseIdentifier;
+ (id)entryDisplayModelForDirectMessageEntry:(id)arg1 account:(id)arg2;
@property(nonatomic) BOOL shouldShowNub; // @synthesize shouldShowNub=_shouldShowNub;
@property(readonly, nonatomic) TFNNewDirectMessageAbstractThreadEntry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
