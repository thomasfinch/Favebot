//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSRunLoop, NSString, SPDYSocket;

@protocol SPDYSocketDelegate <NSObject>

@optional
- (_Bool)socket:(SPDYSocket *)arg1 securedWithTrust:(struct __SecTrust *)arg2;
- (double)socket:(SPDYSocket *)arg1 willTimeoutWriteWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned int)arg4;
- (double)socket:(SPDYSocket *)arg1 willTimeoutReadWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned int)arg4;
- (void)socket:(SPDYSocket *)arg1 didWritePartialDataOfLength:(unsigned int)arg2 tag:(long)arg3;
- (void)socket:(SPDYSocket *)arg1 didWriteDataWithTag:(long)arg2;
- (void)socket:(SPDYSocket *)arg1 didReadPartialDataOfLength:(unsigned int)arg2 tag:(long)arg3;
- (void)socket:(SPDYSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long)arg3;
- (void)socket:(SPDYSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (_Bool)socketWillConnect:(SPDYSocket *)arg1;
- (NSRunLoop *)socket:(SPDYSocket *)arg1 wantsRunLoopForNewSocket:(SPDYSocket *)arg2;
- (void)socket:(SPDYSocket *)arg1 didAcceptNewSocket:(SPDYSocket *)arg2;
- (void)socketDidDisconnect:(SPDYSocket *)arg1;
- (void)socket:(SPDYSocket *)arg1 willDisconnectWithError:(NSError *)arg2;
@end

