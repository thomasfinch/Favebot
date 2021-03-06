//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNTwitterEntityURL, TFNTwitterStatus, UIImage;

__attribute__((visibility("hidden")))
@interface T1PrepopulatedSlideshowSlide : NSObject
{
    TFNTwitterStatus *_status;
    NSString *_imageURLString;
    UIImage *_image;
    UIImage *_previewImage;
    id _transitionObject;
    TFNTwitterEntityURL *_entityURL;
    struct CGSize _imageSize;
}

@property(retain, nonatomic) TFNTwitterEntityURL *entityURL; // @synthesize entityURL=_entityURL;
@property(retain, nonatomic) id transitionObject; // @synthesize transitionObject=_transitionObject;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

