//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TCActionAPIRequest, TCActionPurchaseRequest;

@interface TCAction : NSObject
{
    int _identifier;
    int _type;
    int _onSuccessActionID;
    int _onFailureActionID;
    NSString *_scribeAction;
    NSString *_scribeElement;
    int _tokenizedTextID;
    NSArray *_styleApplications;
    NSString *_url;
    NSString *_displayURL;
    NSString *_userID;
    NSString *_appID;
    NSString *_appURL;
    NSString *_appDisplayURL;
    NSString *_dialPhoneURL;
    NSString *_dialPhoneNumber;
    TCActionAPIRequest *_apiRequest;
    TCActionPurchaseRequest *_purchaseRequest;
    int _formID;
}

+ (id)displayURLForPhoneNumber:(id)arg1;
@property(nonatomic) int formID; // @synthesize formID=_formID;
@property(retain, nonatomic) TCActionPurchaseRequest *purchaseRequest; // @synthesize purchaseRequest=_purchaseRequest;
@property(retain, nonatomic) TCActionAPIRequest *apiRequest; // @synthesize apiRequest=_apiRequest;
@property(copy, nonatomic) NSString *dialPhoneNumber; // @synthesize dialPhoneNumber=_dialPhoneNumber;
@property(copy, nonatomic) NSString *dialPhoneURL; // @synthesize dialPhoneURL=_dialPhoneURL;
@property(copy, nonatomic) NSString *appDisplayURL; // @synthesize appDisplayURL=_appDisplayURL;
@property(copy, nonatomic) NSString *appURL; // @synthesize appURL=_appURL;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *displayURL; // @synthesize displayURL=_displayURL;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *styleApplications; // @synthesize styleApplications=_styleApplications;
@property(nonatomic) int tokenizedTextID; // @synthesize tokenizedTextID=_tokenizedTextID;
@property(copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(copy, nonatomic) NSString *scribeAction; // @synthesize scribeAction=_scribeAction;
@property(nonatomic) int onFailureActionID; // @synthesize onFailureActionID=_onFailureActionID;
@property(nonatomic) int onSuccessActionID; // @synthesize onSuccessActionID=_onSuccessActionID;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dialPhoneDisplayURL;
- (id)description;

@end

