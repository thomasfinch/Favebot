//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPDYLogger.h"
#import "TFNBugReportAttachmentProvider.h"

__attribute__((visibility("hidden")))
@interface T1SPDYLogAttachmentProvider : NSObject <TFNBugReportAttachmentProvider, SPDYLogger>
{
    int _logLevel;
    unsigned int _bufferLength;
}

@property(nonatomic) unsigned int bufferLength; // @synthesize bufferLength=_bufferLength;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
- (void)log:(id)arg1 atLevel:(int)arg2;
- (id)attachment;
- (void)clearLog;
- (id)init;

@end
