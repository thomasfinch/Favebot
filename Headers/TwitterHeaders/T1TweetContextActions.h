//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface T1TweetContextActions : NSObject
{
}

+ (BOOL)_isInline;
+ (void)_cardLogAppDownloadWithStatus:(id)arg1 account:(id)arg2 scribeAction:(id)arg3 page:(id)arg4 section:(id)arg5 component:(id)arg6 parameters:(id)arg7;
+ (BOOL)_userShouldSeeReportTweetOption:(id)arg1;
+ (id)dismissActionSheetForStatus:(id)arg1 account:(id)arg2 viewController:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
+ (id)mediaActionSheetForStatus:(id)arg1 image:(id)arg2 account:(id)arg3 viewController:(id)arg4 doneBlock:(CDUnknownBlockType)arg5;
+ (id)moreActionSheetForStatus:(id)arg1 account:(id)arg2 entityURL:(id)arg3 supportsDismiss:(BOOL)arg4 viewController:(id)arg5 willPresentControllerBlock:(CDUnknownBlockType)arg6 doneBlock:(CDUnknownBlockType)arg7 fullscreenEngagement:(BOOL)arg8;
+ (id)moreActionSheetForStatus:(id)arg1 account:(id)arg2 entityURL:(id)arg3 supportsDismiss:(BOOL)arg4 viewController:(id)arg5 doneBlock:(CDUnknownBlockType)arg6;
+ (id)moreActionSheetForStatus:(id)arg1 account:(id)arg2 entityURL:(id)arg3 viewController:(id)arg4 doneBlock:(CDUnknownBlockType)arg5;
+ (id)moreActionSheetForStatus:(id)arg1 account:(id)arg2 viewController:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
+ (id)moreActionSheetForStatus:(id)arg1 account:(id)arg2 viewController:(id)arg3 willPresentControllerBlock:(CDUnknownBlockType)arg4 fullscreenEngagement:(BOOL)arg5;
+ (void)_chooseLinkFromEntityURL:(id)arg1 status:(id)arg2 forAction:(CDUnknownBlockType)arg3 viewController:(id)arg4;
+ (id)undoRetweetActionSheetForStatus:(id)arg1 account:(id)arg2 viewController:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;
+ (id)scribeComponentForStatus:(id)arg1 page:(id)arg2;
+ (id)retweetActionSheetForStatus:(id)arg1 account:(id)arg2 viewController:(id)arg3 doneBlock:(CDUnknownBlockType)arg4 willQuoteRetweetBlock:(CDUnknownBlockType)arg5;
+ (id)retweetActionSheetForStatus:(id)arg1 account:(id)arg2 viewController:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;

@end

