//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFNNewDirectMessagePermission : NSObject
{
    BOOL _canDM;
    BOOL _hasFullPermission;
    int _canDMFailure;
    int _fullPermissionFailure;
}

+ (int)_permissionFailureForString:(id)arg1;
@property(readonly, nonatomic) int fullPermissionFailure; // @synthesize fullPermissionFailure=_fullPermissionFailure;
@property(readonly, nonatomic) int canDMFailure; // @synthesize canDMFailure=_canDMFailure;
@property(readonly, nonatomic) BOOL hasFullPermission; // @synthesize hasFullPermission=_hasFullPermission;
@property(readonly, nonatomic) BOOL canDM; // @synthesize canDM=_canDM;
- (id)initWithJSONDictionary:(id)arg1;

@end

