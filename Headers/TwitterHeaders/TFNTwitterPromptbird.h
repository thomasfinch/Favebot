//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFNTwitterPromptbird : NSObject
{
}

+ (void)sendConfirmationEmailForAccount:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
+ (void)recordDismissForPrompt:(id)arg1 account:(id)arg2;
+ (void)recordTapForPrompt:(id)arg1 account:(id)arg2;
+ (void)recordImpressionForPrompt:(id)arg1 account:(id)arg2;
+ (void)_invokeResponseBlock:(CDUnknownBlockType)arg1 prompt:(id)arg2 error:(id)arg3;
+ (void)_promptSuggestedForAccount:(id)arg1 withError:(id)arg2 data:(id)arg3 responseBlock:(CDUnknownBlockType)arg4;
+ (void)suggestPromptForAccount:(id)arg1 parameters:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
+ (void)suggestPromptForAccount:(id)arg1 format:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;

@end

