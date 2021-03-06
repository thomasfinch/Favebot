/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PTHTweetbotAccount, NSDictionary;

@interface PTHTweetbotService : XXUnknownSuperclass {
	PTHTweetbotAccount* _account;
	NSDictionary* _authenticationInfo;
}
+(BOOL)isAvailable;
+(BOOL)verifyWithAccount:(id)account;
+(BOOL)needsAuthentication;
+(id)title;
+(id)busyServiceFailureTweetbotError;
+(id)genericServiceFailureTweetbotError;
+(id)authenticationFailureTweetbotError;
+(void)setCustomInfo:(id)info forAccount:(id)account;
+(id)customInfoForAccount:(id)account;
+(id)_customInfoKeyForAccount:(id)account;
+(void)authenticate:(id)authenticate completion:(id)completion;
+(void)saveAuthenticationInfo:(id)info forAccount:(id)account;
+(id)authenticationInfoForAccount:(id)account;
+(id)keychainItemForAccount:(id)account;
+(id)keychainAccountName;
+(id)defaultOptions;
+(id)serviceClasses;
-(void).cxx_destruct;
-(id)customInfo;
-(id)password;
-(id)username;
-(id)authenticationInfo;
-(id)initWithAccount:(id)account;
@end

