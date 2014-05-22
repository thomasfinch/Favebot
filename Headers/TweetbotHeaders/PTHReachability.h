/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface PTHReachability : XXUnknownSuperclass {
	NSString* _hostName;
	SCNetworkReachabilityRef _reachabilityRef;
	unsigned _flags;
}
@property(readonly, assign) BOOL isWWAN;
@property(readonly, assign) BOOL isConnectionRequired;
@property(readonly, assign) BOOL isReachable;
@property(assign) unsigned flags;
+(void)checkReachabilityForHostName:(id)hostName completion:(id)completion;
-(void).cxx_destruct;
-(void)dealloc;
-(void)_updateForActive;
-(id)initWithAddress:(const sockaddr_in*)address;
-(id)initWithHostName:(id)hostName;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)reachabilityRef;
@end

