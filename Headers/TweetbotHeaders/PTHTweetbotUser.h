/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

// #import "PTHTweetbotObject.h"
#import "NSCoding.h"

@class NSString, NSURL, PTHTweetbotCursor, NSDictionary, NSMutableArray, NSDate, PTHTweetbotListsCursor, NSAttributedString;

@interface PTHTweetbotUser : NSObject <NSCoding> {
	NSString* _screenName;
	NSDictionary* _userDescriptionEntityDictionary;
	BOOL _isRefreshing;
	NSMutableArray* _refreshBlocks;
	BOOL _protected;
	BOOL _verified;
	BOOL _geoEnabled;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	NSString* _name;
	NSString* _location;
	NSString* _userDescription;
	NSString* _profileImageURLString;
	NSString* _profileBannerImageURLString;
	NSString* _urlString;
	int _favoritesCount;
	int _followersCount;
	int _followingCount;
	int _statusesCount;
	int _listedCount;
	NSDate* _lastStatusCreatedAt;
}
@property(readonly, assign, nonatomic) BOOL isTapbot;
@property(readonly, assign, nonatomic) BOOL isCurrentUser;
@property(readonly, assign, nonatomic) NSURL* twitterURL;
@property(readonly, assign, nonatomic) NSURL* favstarURL;
@property(readonly, assign, nonatomic) PTHTweetbotCursor* currentUserListMembershipsCursor;
@property(readonly, assign, nonatomic) PTHTweetbotCursor* listMembershipsCursor;
@property(readonly, assign, nonatomic) PTHTweetbotListsCursor* listsCursor;
@property(readonly, assign, nonatomic) PTHTweetbotCursor* followersCursor;
@property(readonly, assign, nonatomic) PTHTweetbotCursor* followingCursor;
@property(readonly, assign, nonatomic) PTHTweetbotCursor* favoritesCursor;
@property(readonly, assign, nonatomic) PTHTweetbotCursor* mentionsCursor;
@property(readonly, assign, nonatomic) PTHTweetbotCursor* userTimelineCursor;
@property(retain, nonatomic) NSDate* lastStatusCreatedAt;
// @property(assign, nonatomic, getter=isGeoEnabled) BOOL geoEnabled;
// @property(assign, nonatomic, getter=isVerified) BOOL verified;
// @property(assign, nonatomic, getter=isProtected) BOOL protected;
@property(assign, nonatomic) int listedCount;
@property(assign, nonatomic) int statusesCount;
@property(assign, nonatomic) int followingCount;
@property(assign, nonatomic) int followersCount;
@property(assign, nonatomic) int favoritesCount;
@property(copy, nonatomic) NSString* urlString;
@property(copy, nonatomic) NSString* profileBannerImageURLString;
@property(copy, nonatomic) NSString* profileImageURLString;
@property(readonly, assign, nonatomic) NSString* decodedUserDescription;
@property(readonly, assign, nonatomic) NSAttributedString* attributedUserDescription;
@property(copy, nonatomic) NSString* userDescription;
@property(copy, nonatomic) NSString* location;
@property(readonly, assign, nonatomic) NSString* formattedName;
@property(readonly, assign, nonatomic) NSString* displayName;
@property(copy, nonatomic) NSString* screenName;
@property(copy, nonatomic) NSString* name;
@property(retain, nonatomic) NSDate* updatedAt;
@property(retain, nonatomic) NSDate* createdAt;
+(id)profileImageURLFromString:(id)string forSize:(unsigned)size;
+(BOOL)isValidScreenName:(id)name;
+(id)newWithAccount:(id)account dictionary:(id)dictionary;
+(id)newWithAccount:(id)account tid:(long long)tid;
// -(void).cxx_destruct;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(int)compare:(id)compare;
-(BOOL)hasString:(id)string;
-(id)profileBannerURLForWidth:(unsigned)width;
-(id)profileImageURLForSize:(unsigned)size;
-(void)refresh:(id)refresh;
-(void)addUserQueryKey:(id)key;
-(void)updateFromDictionary:(id)dictionary;
@end

