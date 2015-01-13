//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface PTHKeychainItem : NSObject
{
    NSString *_serviceName;
    NSString *_accountName;
}

+ (void)deleteItemsWithAccountName:(id)arg1;
+ (void)deleteItemsWithServiceName:(id)arg1;
+ (id)itemWithServiceName:(id)arg1 accountName:(id)arg2;
+ (id)itemsWithServiceName:(id)arg1;
+ (id)itemsWithAccountName:(id)arg1;
+ (id)items;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)dealloc;
- (id)description;
- (void)delete;
@property(readonly, nonatomic) BOOL exists;
@property(copy, nonatomic) NSData *passwordData;
@property(copy, nonatomic) id <NSCoding><NSObject> passwordValue;
@property(copy, nonatomic) NSString *password;
- (id)itemAttributes;
- (id)initWithServiceName:(id)arg1 accountName:(id)arg2;

@end
