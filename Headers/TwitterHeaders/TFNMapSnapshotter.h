//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKMapSnapshotter.h"

@class UIImage;

@interface TFNMapSnapshotter : MKMapSnapshotter
{
    UIImage *_mapPinImage;
    id <TFNMapSnapshotterDelegate> _delegate;
}

+ (id)snapshotterForMapView:(id)arg1;
@property(nonatomic) __weak id <TFNMapSnapshotterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *mapPinImage; // @synthesize mapPinImage=_mapPinImage;
- (void).cxx_destruct;
- (void)_takeSnapshot:(id)arg1 withError:(id)arg2;
- (void)takeSnapshot;
- (id)initWithOptions:(id)arg1;

@end

