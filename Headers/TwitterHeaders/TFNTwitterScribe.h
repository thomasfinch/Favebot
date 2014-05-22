//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNTwitterAuthenticatedScribeDelegate.h"

@class TFNTwitterAccount;

@interface TFNTwitterScribe : NSObject <TFNTwitterAuthenticatedScribeDelegate>
{
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)logCrashWithID:(id)arg1 crashName:(id)arg2 crashDetails:(id)arg3 crashTimestamp:(id)arg4 crashClientVersion:(id)arg5;
- (void)logErrorWithType:(id)arg1 filename:(id)arg2 lineNumber:(int)arg3 functionName:(id)arg4 description:(id)arg5;
- (void)logItemImpression:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 parameters:(id)arg6 deduplicate:(BOOL)arg7;
- (void)logItemImpression:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 parameters:(id)arg6;
- (void)logItemImpression:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4;
- (void)logPerformanceEvent:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (void)logEvent:(id)arg1 parameters:(id)arg2;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 parameters:(id)arg6;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 parameters:(id)arg5;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3;
- (void)flush;
- (void)clearScribeDisabledPages;
- (void)addScribeDisabledPage:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (void)logCardAppAction:(id)arg1 appId:(id)arg2 category:(id)arg3 page:(id)arg4 section:(id)arg5 component:(id)arg6 element:(id)arg7 parameters:(id)arg8;
- (void)logLifelineAlertTweetDetailsImpression;
- (id)_simCardInformationScribeDictionary;
- (id)_advertisingInformationScribeDictionary;
- (void)logApplicationDidLaunch;
- (void)logApplicationDidEnterForeground;
- (void)logAccountSwitch;
- (void)logApplicationStateDeserializationFailures:(int)arg1;
- (void)logImageEditingGridImpressionWithSection:(id)arg1;
- (void)logImageEditingRotatedWithSection:(id)arg1;
- (void)logImageEditingCroppedWithCropShape:(id)arg1 section:(id)arg2;
- (void)logImageEditingCroppedWithOriginalAspectRatio:(BOOL)arg1 section:(id)arg2;
- (void)logImageEditingDoneWithFilter:(id)arg1 enhanced:(BOOL)arg2 uniqueFiltersSeenCount:(unsigned int)arg3 sizeInMB:(id)arg4 section:(id)arg5;
- (void)logCompositionAutocompleteHashtagSelect:(id)arg1 section:(id)arg2;
- (void)logCompositionAutocompleteUserSelect:(id)arg1 section:(id)arg2;
- (void)logCompositionAutocompleteHashtagResults:(id)arg1 section:(id)arg2;
- (void)logCompositionAutocompleteUserResults:(id)arg1 section:(id)arg2;
- (void)logMovieAttachmentWithSource:(id)arg1 section:(id)arg2;
- (void)logImageAttachmentWithSource:(id)arg1 section:(id)arg2;
- (void)logCompositionAlertClickedCancelWithSection:(id)arg1;
- (void)logCompositionAlertClickedSendWithSection:(id)arg1;
- (void)logCompositionAlertClickedTweetWithSection:(id)arg1;
- (void)logCompositionAlertClickedAlertWithSection:(id)arg1;
- (void)logIntroPageImpression:(id)arg1;
- (void)logLoggedOutHomepageEvent:(id)arg1 afterTimeWatching:(float)arg2;
- (void)logLoggedOutHomepageImpression;
- (void)logMessageSend;
- (void)logSignUpSuccess;
- (void)logSignUpFailure:(id)arg1;
- (void)logSignUpServerError;
- (void)logSignUpCaptchaShow;
- (void)logSignUpTokenFailure;
- (void)logSignUpPasswordFieldDone;
- (void)logSignUpScreenNameFieldDone;
- (void)logSignUpEmailFieldDone;
- (void)logSignupFullNameFieldDone;
- (void)logSignUpPasswordFailure;
- (void)logSignUpEmailFailure;
- (void)logSignUpScreenNameFailure;
- (void)logSignUpFullNameFailure;
- (void)logSignUpPrefillScreenNameChange;
- (void)logSignUpPrefillEmailChange;
- (void)logSignUpPrefillEmailSuccess;
- (void)logSignUpPrefillEmailDeny;
- (void)logSignUpPrefillEmailAttempt;
- (void)logSignUpPrefillFullNameChange;
- (void)logSignUpPrefillFullNameSuccess;
- (void)logSignUpPrefillFullNameAttempt;
- (void)logSignUpPrefillButtonClick;
- (void)logSignUpImpression;
- (id)_imageSizeBucketForPixelCount:(int)arg1;
- (void)logImageDownloadFromHost:(id)arg1 withNetworkStatus:(int)arg2 pixelCount:(int)arg3 startTime:(double)arg4 endTime:(double)arg5;
- (void)logSentinelAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 parameters:(id)arg5;
- (void)logHangDuration:(double)arg1 sectionName:(id)arg2;
- (void)logMediaUploadRequestResponse:(id)arg1;
- (void)logDirectMessageRequestResponse:(id)arg1 isRetry:(BOOL)arg2 hasMedia:(BOOL)arg3;
- (void)logSendStatusRequestResponse:(id)arg1 isDraft:(BOOL)arg2 hasMedia:(BOOL)arg3;
- (void)logReverseAuthRequestResponse:(id)arg1 userID:(long long)arg2 userName:(id)arg3 success:(BOOL)arg4 errorCode:(int)arg5 authMigrationErrorCount:(unsigned int)arg6;
- (void)logCardRequestResponse:(id)arg1 duration:(double)arg2;
- (void)logRequestResponse:(id)arg1 duration:(double)arg2 transactionID:(id)arg3;
- (void)_logRequestResponse:(id)arg1 duration:(double)arg2 transactionID:(id)arg3 context:(id)arg4 event:(id)arg5;
- (void)logAction:(id)arg1 page:(id)arg2 section:(id)arg3 component:(id)arg4 element:(id)arg5 baseParameters:(id)arg6 amplifyParameters:(id)arg7;

@end

