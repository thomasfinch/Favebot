//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterEntityURL.h"

@class NSString, TFNTwitterEntityMediaFeatureSet, TFNTwitterTagSet;

@interface TFNTwitterEntityMedia : TFNTwitterEntityURL
{
    int _mediaType;
    NSString *_mediaURL;
    NSString *_mediaID;
    NSString *_sourceStatusID;
    TFNTwitterEntityMediaFeatureSet *_smallSizeFeatures;
    TFNTwitterEntityMediaFeatureSet *_mediumSizeFeatures;
    TFNTwitterEntityMediaFeatureSet *_largeSizeFeatures;
    TFNTwitterEntityMediaFeatureSet *_originalSizeFeatures;
    TFNTwitterTagSet *_tagSet;
    struct CGSize _thumbSize;
    struct CGSize _smallSize;
    struct CGSize _mediumSize;
    struct CGSize _largeSize;
    struct CGSize _originalSize;
}

@property(retain, nonatomic) TFNTwitterTagSet *tagSet; // @synthesize tagSet=_tagSet;
@property(retain, nonatomic) TFNTwitterEntityMediaFeatureSet *originalSizeFeatures; // @synthesize originalSizeFeatures=_originalSizeFeatures;
@property(retain, nonatomic) TFNTwitterEntityMediaFeatureSet *largeSizeFeatures; // @synthesize largeSizeFeatures=_largeSizeFeatures;
@property(retain, nonatomic) TFNTwitterEntityMediaFeatureSet *mediumSizeFeatures; // @synthesize mediumSizeFeatures=_mediumSizeFeatures;
@property(retain, nonatomic) TFNTwitterEntityMediaFeatureSet *smallSizeFeatures; // @synthesize smallSizeFeatures=_smallSizeFeatures;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(nonatomic) struct CGSize largeSize; // @synthesize largeSize=_largeSize;
@property(nonatomic) struct CGSize mediumSize; // @synthesize mediumSize=_mediumSize;
@property(nonatomic) struct CGSize smallSize; // @synthesize smallSize=_smallSize;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(copy, nonatomic) NSString *sourceStatusID; // @synthesize sourceStatusID=_sourceStatusID;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (struct CGSize)_mediaSizeWithDictionary:(id)arg1;
- (BOOL)representsURL:(id)arg1;
- (id)fullSizeImageFeatures;
- (id)previewImageFeatures;
- (id)fullSizeImageURL;
- (struct CGSize)fullImageSize;
- (id)previewImageURLMatchingSize:(struct CGSize)arg1 returningSize:(out struct CGSize *)arg2;
- (id)previewImageURL;
- (struct CGSize)previewImageSize;
- (BOOL)isMedia;
- (BOOL)isVideo;
- (BOOL)isImage;
- (id)largeURL;
- (id)mediumURL;
- (id)smallURL;
- (id)thumbURL;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)_setCGSizeToDict:(id)arg1 cgSize:(struct CGSize)arg2 widthKey:(id)arg3 heightKey:(id)arg4;
- (struct CGSize)_CGSizeWithDict:(id)arg1 widthKey:(id)arg2 heightKey:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 strict:(BOOL)arg2;

@end
