//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TCCardBuilder : NSObject
{
    id <TCBuildableDocument> _document;
}

@property(readonly, nonatomic) id <TCBuildableDocument> document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)parseForm:(id)arg1;
- (id)parseForms:(id)arg1;
- (int)parseBindingDestinationType:(id)arg1;
- (int)parseBindingControllerType:(id)arg1;
- (int)parseBindingSourceType:(id)arg1;
- (id)parseBinding:(id)arg1;
- (id)parseBindings:(id)arg1;
- (id)parseStyleApplication:(id)arg1;
- (id)parseStyleApplications:(id)arg1;
- (int)parseActionAPIRequestMethod:(id)arg1;
- (id)unpackPurchaseRequest:(id)arg1;
- (id)unpackAPIRequest:(id)arg1;
- (int)parseActionType:(id)arg1;
- (id)parseAction:(id)arg1;
- (id)parseActions:(id)arg1;
- (id)parseStyle:(id)arg1;
- (id)parseStyles:(id)arg1;
- (id)unpackTextToken:(id)arg1;
- (id)unpackTextTokenGroup:(id)arg1;
- (id)unpackTokenizedText:(id)arg1;
- (id)tokenizedTextsForCurrentLocaleFromDefs:(id)arg1;
- (id)rcsvCreateElement:(id)arg1;
- (void)unpackFollowButton:(id)arg1 elementDef:(id)arg2;
- (void)unpackFormSelect:(id)arg1 elementDef:(id)arg2;
- (void)unpackFormCheckbox:(id)arg1 elementDef:(id)arg2;
- (void)unpackFormText:(id)arg1 elementDef:(id)arg2;
- (int)parseFormTextInputMode:(id)arg1;
- (void)unpackFormField:(id)arg1 formFieldDef:(id)arg2 elementDef:(id)arg3;
- (void)unpackPlayer:(id)arg1 elementDef:(id)arg2;
- (id)unpackPlayerStream:(id)arg1;
- (void)unpackImage:(id)arg1 elementDef:(id)arg2;
- (void)unpackText:(id)arg1 elementDef:(id)arg2;
- (void)unpackBox:(id)arg1 elementDef:(id)arg2;
- (void)unpackContainer:(id)arg1 elementDef:(id)arg2;
- (void)unpackElement:(id)arg1 elementDef:(id)arg2;
- (id)unpackBorder:(id)arg1;
- (id)unpackShadow:(id)arg1;
- (id)unpackFill:(id)arg1;
- (int)parseFollowControlStyle:(id)arg1;
- (int)parseLoadingIndicator:(id)arg1;
- (id)parsePointToVector2:(id)arg1;
- (int)parseOverflowMode:(id)arg1;
- (CDStruct_1ef3fb1f)parseTextAlignments:(id)arg1;
- (int)parseTextAlignment:(id)arg1;
- (CDStruct_1ef3fb1f)parseAxisAlignments:(id)arg1;
- (int)parseAxisAlignment:(id)arg1;
- (int)parseLayoutMode:(id)arg1;
- (CDStruct_1ef3fb1f)parseMaxSizeModes:(id)arg1;
- (int)parseMaxSizeMode:(id)arg1;
- (CDStruct_1ef3fb1f)parseSizeModes:(id)arg1;
- (int)parseSizeMode:(id)arg1;
- (int)parsePositionMode:(id)arg1;
- (int)parseElementType:(id)arg1;
- (int)parseFillType:(id)arg1;
- (int)errorCheckedIntegerValueFromMap:(id)arg1 string:(id)arg2 allowingNil:(BOOL)arg3;
- (id)spacingToVector4:(id)arg1;
- (id)colorToVector4:(id)arg1;
- (void)checkForWarnings;
- (id)warnings;
- (id)buildFromCompiledCard:(id)arg1;
- (id)initWithBuildableDocument:(id)arg1;

@end

