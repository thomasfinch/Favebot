//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, T1DirectMessageReportSpamController, TFNActionSheetController, TFNTwitterDirectMessage;

@protocol T1DirectMessageReportSpamControllerDelegate <NSObject>
- (void)reportController:(T1DirectMessageReportSpamController *)arg1 presentReportActionSheetController:(TFNActionSheetController *)arg2;

@optional
- (void)reportController:(T1DirectMessageReportSpamController *)arg1 didFailReportingMessage:(TFNTwitterDirectMessage *)arg2 error:(NSError *)arg3 spamType:(unsigned int)arg4;
- (void)reportController:(T1DirectMessageReportSpamController *)arg1 didReportMessage:(TFNTwitterDirectMessage *)arg2 spamType:(unsigned int)arg3;
- (void)reportController:(T1DirectMessageReportSpamController *)arg1 willReportMessage:(TFNTwitterDirectMessage *)arg2 spamType:(unsigned int)arg3;
@end
