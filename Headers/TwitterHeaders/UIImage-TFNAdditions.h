//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (TFNAdditions)
+ (id)tfn_imageForColor:(id)arg1;
+ (id)tfn_imageForRectWithSize:(struct CGSize)arg1 color:(id)arg2;
+ (struct CGRect)tfn_frameForImageWithSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2 withContentMode:(int)arg3;
+ (struct CGRect)tfn_frameForImageWithSize:(struct CGSize)arg1 inRectWithSize:(struct CGSize)arg2 contentMode:(int)arg3;
+ (struct CGSize)tfn_sizeForImageWithSize:(struct CGSize)arg1 inRectWithSize:(struct CGSize)arg2 contentMode:(int)arg3;
+ (id)tfn_roundRectImageWithCornerRadius:(float)arg1 backgroundColor:(id)arg2;
+ (id)tfn_transparentImage;
+ (id)_tfn_imageWithSize:(struct CGSize)arg1 drawing:(CDUnknownBlockType)arg2;
- (void)tfn_decompressImage;
- (id)tfn_resizableImageWithDefaultInsets;
- (id)tfn_imageForRectWithSize:(struct CGSize)arg1 contentMode:(int)arg2;
- (struct CGRect)tfn_frameInRect:(struct CGRect)arg1 withContentMode:(int)arg2;
- (struct CGRect)tfn_frameInRectWithSize:(struct CGSize)arg1 contentMode:(int)arg2;
- (struct CGSize)tfn_sizeInRectWithSize:(struct CGSize)arg1 contentMode:(int)arg2;
- (struct CGRect)_tfn_rectForBestFit:(struct CGRect)arg1;
- (id)_tfn_fixOrientationConstrainToSize:(int)arg1 compress:(float)arg2;
- (id)_tfn_fixOrientationConstrainToSize:(int)arg1;
- (id)_tfn_proportionalImageWithWidth:(int)arg1;
- (id)tfn_horizontallyFlippedImage;
- (id)tfn_imageWithAlphaComponent:(float)arg1;
- (id)tfn_imageWithTintColor:(id)arg1;
- (id)tfn_stretchableImageWithLeftCapWidth:(float)arg1 topCapHeight:(float)arg2;
- (id)tfn_resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(int)arg2;
- (id)tfn_resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;
@end

