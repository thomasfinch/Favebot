//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1NewDirectMessageActivityEntryDisplayModel.h"

@class TFNNewDirectMessageParticipantsLeftEntry;

__attribute__((visibility("hidden")))
@interface T1NewDirectMessageParticipantsLeftEntryDisplayModel : T1NewDirectMessageActivityEntryDisplayModel
{
    TFNNewDirectMessageParticipantsLeftEntry *_entry;
}

@property(retain, nonatomic) TFNNewDirectMessageParticipantsLeftEntry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)_updateText;
- (id)initWithParticipantsLeftEntry:(id)arg1;

@end

