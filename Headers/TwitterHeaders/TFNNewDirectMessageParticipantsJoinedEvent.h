//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNNewDirectMessageAbstractEvent.h"

@class TFNNewDirectMessageParticipantsJoinedEntry;

@interface TFNNewDirectMessageParticipantsJoinedEvent : TFNNewDirectMessageAbstractEvent
{
    TFNNewDirectMessageParticipantsJoinedEntry *_entry;
}

@property(retain, nonatomic) TFNNewDirectMessageParticipantsJoinedEntry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)performUpdatesWithModel:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (int)eventType;
- (id)initWithJSONDictionary:(id)arg1;

@end
