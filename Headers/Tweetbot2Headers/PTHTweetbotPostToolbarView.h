//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHGradientView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, PTHHitInsetButton, PTHTweetbotEntity, PTHTweetbotPostDraft, PTHTweetbotPostGeoButton, UILabel, UIScrollView, UIView;

@interface PTHTweetbotPostToolbarView : PTHGradientView <UIScrollViewDelegate>
{
    UIView *_holderView;
    NSMutableArray *_framedImageViews;
    PTHHitInsetButton *_optionsButton;
    PTHHitInsetButton *_userButton;
    PTHHitInsetButton *_hashtagButton;
    PTHHitInsetButton *_cameraButton;
    UILabel *_counterLabel;
    UILabel *_startTypingLabel;
    UIScrollView *_searchScrollView;
    NSArray *_loadedHashtags;
    NSMutableArray *_searchCells;
    NSMutableDictionary *_stringWidths;
    NSMutableArray *_searchItemRanges;
    int _searchVisibleStart;
    int _searchVisibleStop;
    PTHTweetbotPostGeoButton *_geoButton;
    BOOL _animating;
    BOOL _geoButtonHidden;
    PTHTweetbotPostDraft *_draft;
    id <PTHTweetbotPostToolbarViewDelegate> _delegate;
    PTHTweetbotEntity *_selectedEntity;
    NSArray *_searchItems;
    NSArray *_visibleSearchItems;
}

@property(readonly, retain, nonatomic) PTHHitInsetButton *optionsButton; // @synthesize optionsButton=_optionsButton;
@property(retain, nonatomic) NSArray *visibleSearchItems; // @synthesize visibleSearchItems=_visibleSearchItems;
@property(retain, nonatomic) NSArray *searchItems; // @synthesize searchItems=_searchItems;
@property(retain, nonatomic) PTHTweetbotEntity *selectedEntity; // @synthesize selectedEntity=_selectedEntity;
@property(nonatomic) id <PTHTweetbotPostToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PTHTweetbotPostDraft *draft; // @synthesize draft=_draft;
- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchedCell:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUploadFailed:(id)arg1 animated:(BOOL)arg2;
- (void)setUploadCompleted:(id)arg1 animated:(BOOL)arg2;
- (void)setUploadProgress:(float)arg1 forMedia:(id)arg2;
- (void)deleteMedia:(id)arg1;
- (void)addMedia:(id)arg1;
- (void)setDraft:(id)arg1 animated:(BOOL)arg2;
- (void)_layoutMediaViews;
- (void)_touchedFramedImageView:(id)arg1;
- (id)_mediaFromFramedImageView:(id)arg1;
- (id)_framedImageViewForMedia:(id)arg1;
- (id)_addFramedImageView;
- (struct CGPoint)_originForIndex:(int)arg1;
- (void)_updateView;
- (void)addHashtag:(id)arg1;
- (void)addUser:(id)arg1;
- (void)showCameraOptions:(id)arg1;
- (void)showOptions:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

