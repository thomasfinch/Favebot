//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNPagedGalleryCellView.h"

@class CAGradientLayer, TFNDownload, TFNExploreHeader, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface T1ExploreHeaderCardView : TFNPagedGalleryCellView
{
    BOOL _highlighted;
    TFNExploreHeader *_header;
    id <T1ExploreHeaderCardViewDelegate> _delegate;
    unsigned int _pageNumber;
    UIImageView *_imageView;
    UILabel *_tagline;
    TFNDownload *_imageDownload;
    UIView *_tapOverlay;
    CAGradientLayer *_contentGradient;
}

+ (float)heightForHeader;
@property(retain, nonatomic) CAGradientLayer *contentGradient; // @synthesize contentGradient=_contentGradient;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIView *tapOverlay; // @synthesize tapOverlay=_tapOverlay;
@property(retain, nonatomic) TFNDownload *imageDownload; // @synthesize imageDownload=_imageDownload;
@property(retain, nonatomic) UILabel *tagline; // @synthesize tagline=_tagline;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) __weak id <T1ExploreHeaderCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNExploreHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)_taglineFont;
- (void)_imageDownloadStatusDidChange;
- (void)willDisplay;
- (void)_setHighlighted:(BOOL)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

