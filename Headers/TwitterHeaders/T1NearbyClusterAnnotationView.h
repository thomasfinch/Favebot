//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

@class T1NearbyClusterAnnotation, TFNDownload;

__attribute__((visibility("hidden")))
@interface T1NearbyClusterAnnotationView : MKAnnotationView
{
    T1NearbyClusterAnnotation *_clusterAnnotation;
    TFNDownload *_imageDownloader;
}

@property(retain, nonatomic) TFNDownload *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) T1NearbyClusterAnnotation *clusterAnnotation; // @synthesize clusterAnnotation=_clusterAnnotation;
- (void).cxx_destruct;
- (id)_mergeImages:(id)arg1 topImage:(id)arg2;
- (void)_imageStatusChanged:(id)arg1;
- (void)_updateImage;
- (void)prepareForReuse;
- (void)dealloc;
- (void)_downloadImage:(id)arg1;

@end

