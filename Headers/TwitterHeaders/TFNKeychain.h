//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFNKeychain : NSObject
{
}

+ (id)migratePasswordForUsername:(id)arg1 serviceName:(id)arg2 fromUserDefaultsKey:(id)arg3 error:(id *)arg4;
+ (id)passwordForUsername:(id)arg1 serviceName:(id)arg2 error:(id *)arg3;
+ (id)deletePasswordForUsername:(id)arg1 serviceName:(id)arg2;
+ (id)setPassword:(id)arg1 forUsername:(id)arg2 serviceName:(id)arg3;

@end

