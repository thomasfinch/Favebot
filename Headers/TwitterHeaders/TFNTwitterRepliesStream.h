//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterConcreteStatusesStream.h"

@interface TFNTwitterRepliesStream : TFNTwitterConcreteStatusesStream
{
}

- (id)emptyStreamSubtext;
- (id)emptyStreamMessage;
- (int)minStatusesToConsiderBeingGap;
- (id)autosaveName;
- (void)_loadOlder;
- (void)_loadBeforeGap:(id)arg1;
- (void)_loadNewerFromPolling:(BOOL)arg1;
- (BOOL)shouldIndexUsersInAutocomplete;

@end

