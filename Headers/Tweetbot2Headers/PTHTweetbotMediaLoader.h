//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAKeyframeAnimation, MPMoviePlayerController, NSString, NSURL, PTHImageLoader, PTHTweetbotAccount, PTHTweetbotEntity, PTHTweetbotPostDraftMedia, PTHURLRequest, UIImage;

@interface PTHTweetbotMediaLoader : NSObject
{
    PTHTweetbotEntity *_entity;
    PTHTweetbotPostDraftMedia *_draftMedia;
    NSURL *_mediaURL;
    BOOL _loading;
    BOOL _loaded;
    BOOL _cancelled;
    PTHURLRequest *_imageRequest;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _responseBlock;
    PTHImageLoader *_imageLoader;
    unsigned int _maxSize;
    UIImage *_image;
    MPMoviePlayerController *_moviePlayerController;
    CAKeyframeAnimation *_animation;
    int _mediaType;
    NSString *_mediaTitle;
    NSURL *_webURL;
    NSString *_imageFilename;
    PTHTweetbotAccount *_account;
}

@property(readonly, nonatomic) PTHTweetbotAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *imageFilename; // @synthesize imageFilename=_imageFilename;
@property(readonly, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(readonly, nonatomic) NSString *mediaTitle; // @synthesize mediaTitle=_mediaTitle;
@property(readonly, nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) CAKeyframeAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) MPMoviePlayerController *moviePlayerController; // @synthesize moviePlayerController=_moviePlayerController;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned int maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) PTHImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSURL *movieURL;
@property(readonly, nonatomic) BOOL hasLoadingProgress;
- (void)copyImageToPasteboard;
- (BOOL)canCopyImage;
- (void)saveImage:(CDUnknownBlockType)arg1;
- (BOOL)canSaveImage;
- (void)cancel;
- (void)loadWithProgress:(CDUnknownBlockType)arg1 response:(CDUnknownBlockType)arg2;
- (void)_loadUnknown;
- (void)_loadHTMLUnknown;
- (void)_loadMovie;
- (void)_movieStateDidChange:(id)arg1;
- (void)_loadImage;
- (void)_loadDraftImage;
- (void)_loadDraftMovie;
- (void)_processImage;
- (void)_processImageSource:(struct CGImageSource *)arg1;
- (void)_sendResponse:(id)arg1;
- (id)initWithPostDraftMedia:(id)arg1;
- (id)initWithAccount:(id)arg1 mediaTitle:(id)arg2 mediaURL:(id)arg3 mediaType:(int)arg4 webURL:(id)arg5;
- (id)initWithEntity:(id)arg1;
- (id)init;

@end
