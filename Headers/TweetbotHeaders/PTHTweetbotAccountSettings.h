/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class PTHTweetbotAccount, NSString, NSMutableDictionary, NSMutableArray, NSArray;

@interface PTHTweetbotAccountSettings : XXUnknownSuperclass <NSCoding> {
	NSMutableArray* _statusFilters;
	Class _syncClass;
	BOOL _showMarker;
	BOOL _syncEnabled;
	BOOL _mobilizerEnabled;
	BOOL _syncedStatusFilters;
	PTHTweetbotAccount* _account;
	int _geoType;
	Class _urlShortnerClass;
	Class _bookmarkerClass;
	Class _imageUploaderClass;
	Class _movieUploaderClass;
	Class _mobilizerClass;
	NSMutableDictionary* _dictionary;
	long long _lastSelectedListTID;
}
@property(readonly, copy, nonatomic) NSString* syncPrivateStatusFiltersKey;
@property(readonly, copy, nonatomic) NSString* syncPublicStatusFiltersKey;
@property(assign, nonatomic) BOOL syncedStatusFilters;
@property(retain, nonatomic) NSMutableDictionary* dictionary;
@property(readonly, assign, nonatomic) NSArray* statusFilters;
@property(assign, nonatomic) long long lastSelectedListTID;
@property(assign, nonatomic, getter=isMobilizerEnabled) BOOL mobilizerEnabled;
@property(readonly, assign, nonatomic, getter=isSyncEnabled) BOOL syncEnabled;
@property(assign, nonatomic) BOOL showMarker;
@property(assign, nonatomic) __weak Class mobilizerClass;
@property(assign, nonatomic) __weak Class syncClass;
@property(assign, nonatomic) __weak Class movieUploaderClass;
@property(assign, nonatomic) __weak Class imageUploaderClass;
@property(assign, nonatomic) __weak Class bookmarkerClass;
@property(assign, nonatomic, setter=setURLShortnerClass:) __weak Class urlShortnerClass;
@property(assign, nonatomic) int geoType;
@property(assign, nonatomic) __weak PTHTweetbotAccount* account;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)setURLShortnerServiceClass:(Class)aClass;
-(BOOL)hasSimilarStatusFilter:(id)filter;
-(void)removeSimilarStatusFilter:(id)filter;
-(void)removeStatusFilter:(id)filter;
-(void)addStatusFilter:(id)filter;
-(void)_storeDidChange:(id)_store;
-(void)_replaceStatusFilters:(id)filters;
-(void)_mergeStatusFilters:(id)filters;
-(void)_saveStatusFilters;
-(void)_setup;
-(id)initWithAccount:(id)account;
@end
