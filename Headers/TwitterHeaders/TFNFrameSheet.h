//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface TFNFrameSheet : NSObject
{
    unsigned int _rows;
    unsigned int _columns;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    unsigned int _frameCount;
    UIImage *_frameSheet;
}

@property(readonly, nonatomic) UIImage *frameSheet; // @synthesize frameSheet=_frameSheet;
@property(readonly, nonatomic) unsigned int frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) unsigned int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) unsigned int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(readonly, nonatomic) unsigned int columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned int rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (id)frameArray;
- (id)initWithImage:(id)arg1 rows:(unsigned int)arg2 columns:(unsigned int)arg3 frameCount:(unsigned int)arg4 imageWidth:(unsigned int)arg5 imageHeight:(unsigned int)arg6;

@end
