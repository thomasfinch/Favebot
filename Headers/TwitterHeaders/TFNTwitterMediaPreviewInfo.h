//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNTwitterStatus;

@interface TFNTwitterMediaPreviewInfo : NSObject
{
    TFNTwitterStatus *_status;
    unsigned int _mediaIndex;
}

+ (id)mediaPreviewInfoListWithStatuses:(id)arg1 includeDummyStatuses:(BOOL)arg2 onlyPhotos:(BOOL)arg3;
+ (id)mediaPreviewInfoListWithStatuses:(id)arg1 onlyPhotos:(BOOL)arg2;
+ (id)mediaPreviewInfoListWithStatuses:(id)arg1;
+ (id)mediaPreviewInfoListWithStatus:(id)arg1;
@property(nonatomic) unsigned int mediaIndex; // @synthesize mediaIndex=_mediaIndex;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)entityURL;
- (struct CGSize)imageFullSize;
- (id)imageFullSizeURL;
- (id)imageThumbnailURL;
- (id)_mediaInfo;

@end

