//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHTweetbotObject.h"

#import "NSCoding.h"

@class NSAttributedString, NSDate, NSDictionary, NSString, NSURL, PTHTweetbotCursor, PTHTweetbotListsCursor;

@interface PTHTweetbotUser : PTHTweetbotObject <NSCoding>
{
    NSString *_screenName;
    NSDictionary *_userDescriptionEntityDictionary;
    BOOL _protected;
    BOOL _verified;
    BOOL _geoEnabled;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    NSString *_name;
    NSString *_location;
    NSString *_userDescription;
    NSString *_profileImageURLString;
    NSString *_urlString;
    int _favoritesCount;
    int _followersCount;
    int _followingCount;
    int _statusesCount;
    int _listedCount;
    NSDate *_lastStatusCreatedAt;
    NSString *_profileBannerImageURLString;
}

+ (id)profileImageURLFromString:(id)arg1 forSize:(unsigned int)arg2;
+ (BOOL)isValidScreenName:(id)arg1;
+ (id)newWithAccount:(id)arg1 dictionary:(id)arg2;
+ (id)newWithAccount:(id)arg1 tid:(long long)arg2;
@property(copy, nonatomic) NSString *profileBannerImageURLString; // @synthesize profileBannerImageURLString=_profileBannerImageURLString;
@property(nonatomic, getter=isGeoEnabled) BOOL geoEnabled; // @synthesize geoEnabled=_geoEnabled;
@property(retain, nonatomic) NSDate *lastStatusCreatedAt; // @synthesize lastStatusCreatedAt=_lastStatusCreatedAt;
@property(nonatomic, getter=isVerified) BOOL verified; // @synthesize verified=_verified;
@property(nonatomic, getter=isProtected) BOOL protected; // @synthesize protected=_protected;
@property(nonatomic) int listedCount; // @synthesize listedCount=_listedCount;
@property(nonatomic) int statusesCount; // @synthesize statusesCount=_statusesCount;
@property(nonatomic) int followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) int followersCount; // @synthesize followersCount=_followersCount;
@property(nonatomic) int favoritesCount; // @synthesize favoritesCount=_favoritesCount;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *profileImageURLString; // @synthesize profileImageURLString=_profileImageURLString;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (BOOL)hasString:(id)arg1;
@property(readonly, nonatomic) NSURL *twitterURL;
@property(readonly, nonatomic) NSURL *favstarURL;
- (id)profileBannerURLForWidth:(unsigned int)arg1;
- (id)profileImageURLForSize:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL isCurrentUser;
- (void)refresh:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) PTHTweetbotCursor *currentUserListMembershipsCursor;
@property(readonly, retain, nonatomic) PTHTweetbotCursor *listMembershipsCursor;
@property(readonly, retain, nonatomic) PTHTweetbotListsCursor *listsCursor;
@property(readonly, retain, nonatomic) PTHTweetbotCursor *followersCursor;
@property(readonly, retain, nonatomic) PTHTweetbotCursor *followingCursor;
@property(readonly, retain, nonatomic) PTHTweetbotCursor *favoritesCursor;
@property(readonly, retain, nonatomic) PTHTweetbotCursor *mentionsCursor;
@property(readonly, retain, nonatomic) PTHTweetbotCursor *userTimelineCursor;
@property(readonly, retain, nonatomic) NSString *formattedName;
@property(readonly, retain, nonatomic) NSString *displayName;
- (void)addUserQueryKey:(id)arg1;
@property(readonly, retain, nonatomic) NSString *decodedUserDescription;
@property(readonly, retain, nonatomic) NSAttributedString *attributedUserDescription;
- (void)updateFromDictionary:(id)arg1;

@end

