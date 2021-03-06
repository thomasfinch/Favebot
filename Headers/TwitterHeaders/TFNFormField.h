//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString, TFNForm, TFNFormAppearance, TFNFormFieldValidity;

@interface TFNFormField : NSObject
{
    BOOL _errorMessageHidden;
    BOOL _secure;
    BOOL _autocorrect;
    BOOL _requiresImmediateInput;
    NSString *_userInput;
    NSString *_title;
    NSString *_hintText;
    NSString *_prefix;
    NSMutableSet *_dependencies;
    TFNFormAppearance *_appearance;
    TFNFormFieldValidity *_validity;
    unsigned int _type;
    int _keyboardType;
    int _capitalizationType;
    TFNForm *_form;
    CDUnknownBlockType _validationBlock;
}

+ (id)_formFieldWithType:(unsigned int)arg1 title:(id)arg2 hintText:(id)arg3;
+ (id)titledFullFormFieldWithTitle:(id)arg1 hintText:(id)arg2;
+ (id)titledFormFieldWithTitle:(id)arg1 hintText:(id)arg2;
+ (id)untitledFormFieldWithHintText:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
@property(nonatomic) __weak TFNForm *form; // @synthesize form=_form;
@property(readonly, nonatomic) BOOL requiresImmediateInput; // @synthesize requiresImmediateInput=_requiresImmediateInput;
@property(readonly, nonatomic) int capitalizationType; // @synthesize capitalizationType=_capitalizationType;
@property(readonly, nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) BOOL autocorrect; // @synthesize autocorrect=_autocorrect;
@property(readonly, nonatomic) BOOL secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) TFNFormFieldValidity *validity; // @synthesize validity=_validity;
@property(readonly, nonatomic) TFNFormAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic, getter=isErrorMessageHidden) BOOL errorMessageHidden; // @synthesize errorMessageHidden=_errorMessageHidden;
@property(readonly, copy, nonatomic) NSMutableSet *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
- (void).cxx_destruct;
- (id)init;
- (void)_prepareWithExistingUserInput:(id)arg1 prefix:(id)arg2 secure:(BOOL)arg3 autocorrect:(BOOL)arg4 keyboardType:(int)arg5 capitalizationType:(int)arg6 validationBlock:(CDUnknownBlockType)arg7;
- (void)setValidity:(id)arg1;
@property(readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property(readonly, nonatomic) BOOL requiresExtraInput;
@property(readonly, nonatomic) NSString *errorMessage;
- (void)validateEditing:(BOOL)arg1 began:(BOOL)arg2;
- (void)registerWithFormViewController:(id)arg1 form:(id)arg2 appearance:(id)arg3 requiringImmediateInput:(BOOL)arg4;
- (void)addFormFieldDependency:(id)arg1;
- (void)prepareWithExistingUserInput:(id)arg1 autocorrect:(BOOL)arg2 keyboardType:(int)arg3 capitalizationType:(int)arg4 validationBlock:(CDUnknownBlockType)arg5;
- (void)prepareWithExistingUserInput:(id)arg1 secure:(BOOL)arg2 validationBlock:(CDUnknownBlockType)arg3;
- (void)prepareWithExistingUserInput:(id)arg1 prefix:(id)arg2 validationBlock:(CDUnknownBlockType)arg3;
- (void)prepareWithExistingUserInput:(id)arg1 validationBlock:(CDUnknownBlockType)arg2;
- (void)prepareWithExistingUserInput:(id)arg1;

@end

