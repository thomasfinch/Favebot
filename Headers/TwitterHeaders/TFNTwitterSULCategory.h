//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TFNTwitterAccount;

@interface TFNTwitterSULCategory : NSObject
{
    BOOL _clusterFollowEnabled;
    BOOL _isLoadingUsers;
    NSArray *_users;
    NSString *_slug;
    NSString *_name;
    TFNTwitterAccount *_account;
}

+ (id)categoriesWithJSONData:(id)arg1 account:(id)arg2 error:(id *)arg3;
@property(nonatomic) BOOL isLoadingUsers; // @synthesize isLoadingUsers=_isLoadingUsers;
@property(nonatomic, getter=isClusterFollowEnabled) BOOL clusterFollowEnabled; // @synthesize clusterFollowEnabled=_clusterFollowEnabled;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
- (void).cxx_destruct;
- (void)_userDidUpdate:(id)arg1;
- (void)_updateUsers;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (void)dealloc;
- (id)initWithJSONDictionary:(id)arg1;

@end

