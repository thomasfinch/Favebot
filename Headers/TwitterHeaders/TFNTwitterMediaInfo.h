//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNTwitterEntityMediaFeatureSet, TFNTwitterEntityURL, TFNTwitterTagSet;

@interface TFNTwitterMediaInfo : NSObject
{
    NSString *_imagePreviewURL;
    NSString *_imageThumbnailURL;
    NSString *_imageFullSizeURL;
    TFNTwitterEntityMediaFeatureSet *_imagePreviewFeatures;
    TFNTwitterEntityMediaFeatureSet *_imageFullSizeFeatures;
    TFNTwitterEntityURL *_entityURL;
    struct CGSize _imagePreviewSize;
    struct CGSize _imageFullSize;
}

@property(retain, nonatomic) TFNTwitterEntityURL *entityURL; // @synthesize entityURL=_entityURL;
@property(retain, nonatomic) TFNTwitterEntityMediaFeatureSet *imageFullSizeFeatures; // @synthesize imageFullSizeFeatures=_imageFullSizeFeatures;
@property(retain, nonatomic) TFNTwitterEntityMediaFeatureSet *imagePreviewFeatures; // @synthesize imagePreviewFeatures=_imagePreviewFeatures;
@property(nonatomic) struct CGSize imageFullSize; // @synthesize imageFullSize=_imageFullSize;
@property(nonatomic) struct CGSize imagePreviewSize; // @synthesize imagePreviewSize=_imagePreviewSize;
@property(copy, nonatomic) NSString *imageFullSizeURL; // @synthesize imageFullSizeURL=_imageFullSizeURL;
@property(copy, nonatomic) NSString *imageThumbnailURL; // @synthesize imageThumbnailURL=_imageThumbnailURL;
@property(copy, nonatomic) NSString *imagePreviewURL; // @synthesize imagePreviewURL=_imagePreviewURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterTagSet *tagSet;

@end
