//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFNTwitterUSPostalAddress : NSObject
{
    NSString *_state;
    NSString *_zipCode;
    BOOL _isDefault;
    NSString *_addressId;
    NSString *_name;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_addressLine1;
    NSString *_addressLine2;
    NSString *_city;
    NSString *_country;
}

@property(nonatomic) BOOL isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *zipCode; // @synthesize zipCode=_zipCode;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *addressLine2; // @synthesize addressLine2=_addressLine2;
@property(retain, nonatomic) NSString *addressLine1; // @synthesize addressLine1=_addressLine1;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *addressId; // @synthesize addressId=_addressId;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL valid;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAddressId:(id)arg1 name:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 address1:(id)arg5 address2:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 isDefault:(BOOL)arg10;
- (id)initWithName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 address1:(id)arg4 address2:(id)arg5 city:(id)arg6 state:(id)arg7 zip:(id)arg8 isDefault:(BOOL)arg9;

@end
