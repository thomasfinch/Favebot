//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAsset, T1ComposePhotoGalleryCell;

@protocol T1ComposePhotoGalleryCellDelegate <NSObject>
- (void)photoGalleryCell:(T1ComposePhotoGalleryCell *)arg1 didSelectButton:(unsigned int)arg2;
- (void)photoGalleryCell:(T1ComposePhotoGalleryCell *)arg1 didSelectAsset:(ALAsset *)arg2;

@optional
- (int)photoGalleryCell:(T1ComposePhotoGalleryCell *)arg1 badgeIndexForButton:(unsigned int)arg2;
- (int)photoGalleryCell:(T1ComposePhotoGalleryCell *)arg1 badgeIndexForAsset:(ALAsset *)arg2;
- (void)photoGalleryCell:(T1ComposePhotoGalleryCell *)arg1 didSelectBadgeForAsset:(ALAsset *)arg2;
@end
