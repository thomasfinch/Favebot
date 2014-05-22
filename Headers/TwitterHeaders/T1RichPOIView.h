//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKMapViewDelegate.h"
#import "TFNMapSnapshotterDelegate.h"

@class TFNMapView, TFNTwitterPlace, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface T1RichPOIView : UIView <TFNMapSnapshotterDelegate, MKMapViewDelegate>
{
    TFNTwitterPlace *_place;
    id <T1RichPOIViewDelegate> _delegate;
    UILabel *_nameLabel;
    UILabel *_detailsLabel;
    TFNMapView *_mapView;
    UIImage *_cachedMapImage;
    UIImageView *_cachedMapImageView;
    UIButton *_cancelButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)_mapPinImage;
+ (id)_detailsLabelFont;
+ (id)_nameLabelFont;
+ (float)heightForPlace:(id)arg1 constrainedToWidth:(float)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *cachedMapImageView; // @synthesize cachedMapImageView=_cachedMapImageView;
@property(retain, nonatomic) UIImage *cachedMapImage; // @synthesize cachedMapImage=_cachedMapImage;
@property(retain, nonatomic) TFNMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <T1RichPOIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterPlace *place; // @synthesize place=_place;
- (void).cxx_destruct;
- (void)_richPOIViewTapped;
- (BOOL)_isDifferentCoordinate;
- (void)mapSnapshotterDidSnapshotMapImage:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
