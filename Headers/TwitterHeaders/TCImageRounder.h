//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface TCImageRounder : NSObject
{
    UIImage *_image;
    float _cornerRadius;
    struct CGSize _layoutSize;
    struct CGRect _imageRect;
}

@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)performAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

