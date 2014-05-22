//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCDocument.h"

@class NSArray, NSString, TCElement, TCRootContainer;

@protocol TCBuildableDocument <TCDocument>
- (void)addWarningWithFormat:(NSString *)arg1;
- (void)addWarning:(NSString *)arg1;
- (NSArray *)warnings;
- (void)addErrorWithFormat:(NSString *)arg1;
- (void)addError:(NSString *)arg1;
- (NSArray *)errors;
- (void)finishedBuilding;
- (void)didUnpackForms:(NSArray *)arg1;
- (void)didUnpackBindings:(NSArray *)arg1;
- (void)didUnpackStyles:(NSArray *)arg1;
- (void)didBindString:(NSString *)arg1 toTextTokenID:(int)arg2 withInvalidation:(BOOL)arg3;
- (void)didBindBool:(BOOL)arg1 toTextTokenGroupID:(int)arg2 withInvalidation:(BOOL)arg3;
- (void)didUnpackTokenizedTexts:(NSArray *)arg1;
- (void)setOnLoadActionID:(int)arg1;
- (void)didUnpackActions:(NSArray *)arg1;
- (TCElement *)elementWithIdentifier:(int)arg1;
- (void)didUnpackRootContainer;
- (TCRootContainer *)rootContainer;
- (void)didUnpackCardName:(NSString *)arg1;
@end

