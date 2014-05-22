/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, NSURL, NSMutableArray, NSArray;

@interface PTHTapbotsInfoController : XXUnknownSuperclass {
	NSDictionary* _tapbotsDictionary;
	NSMutableArray* _apps;
	NSMutableArray* _faqs;
	NSMutableArray* _credits;
	NSURL* _detailURL;
	NSURL* _reviewURL;
	NSURL* _giftURL;
	unsigned _appID;
}
@property(readonly, assign, nonatomic) NSString* updatedFilePath;
@property(readonly, assign, nonatomic) unsigned appID;
@property(readonly, assign, nonatomic) NSURL* giftURL;
@property(readonly, assign, nonatomic) NSURL* reviewURL;
@property(readonly, assign, nonatomic) NSURL* detailURL;
@property(readonly, copy, nonatomic) NSArray* credits;
@property(readonly, copy, nonatomic) NSArray* faqs;
@property(readonly, copy, nonatomic) NSArray* apps;
+(void)loadImage:(id)image completion:(id)completion;
+(id)sharedController;
-(void).cxx_destruct;
-(unsigned)supportedInterfaceOrientations;
-(id)init;
-(void)_loadFromDictionary:(id)dictionary;
@end
