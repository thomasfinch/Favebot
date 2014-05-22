//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableDictionary;

@interface TCResourceLoader : NSObject
{
    NSMapTable *_blockArraysByDownload;
    NSMutableDictionary *_avatarBlockArraysByUserIDNumber;
    NSMutableDictionary *_bannerBlockArraysByUserIDNumber;
    BOOL _cacheImage;
    id <TCResourceLoaderDelegate> _delegate;
}

@property(nonatomic) BOOL cacheImage; // @synthesize cacheImage=_cacheImage;
@property(nonatomic) __weak id <TCResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_bannerDidUpdate:(id)arg1;
- (BOOL)_loadPossibleUserBannerImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_userDidUpdate:(id)arg1;
- (BOOL)_loadPossibleUserProfileImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadImageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadDataForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_downloadStatusChanged:(id)arg1;
- (void)_loadDataForURL:(id)arg1 forImage:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

