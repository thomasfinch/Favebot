//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHFramedImageView.h"

@class PTHTweetbotPostDraftMedia, UIImage, UIImageView;

@interface PTHTweetbotPostMediaFramedImageView : PTHFramedImageView
{
    UIImage *_progressImage;
    BOOL _isProgress;
    UIImageView *_completedImageView;
    float _minWidth;
    float _progress;
    PTHTweetbotPostDraftMedia *_media;
}

@property(retain, nonatomic) PTHTweetbotPostDraftMedia *media; // @synthesize media=_media;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)dealloc;
- (void)setFailed;
- (void)_updateThumbnail;
- (void)setCompleted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

