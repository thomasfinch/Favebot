//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNPagedGalleryCellView.h"

@class NSArray, NSMutableArray, NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface T1UserGalleryCellAvatarListView : TFNPagedGalleryCellView
{
    BOOL _highlighted;
    NSArray *_userRepresentations;
    CDUnknownBlockType _avatarTapBlock;
    CDUnknownBlockType _avatarLongPressBlock;
    CDUnknownBlockType _viewMoreTapBlock;
    NSString *_viewMoreButtonText;
    NSMutableArray *_avatarViews;
    NSMutableArray *_activeAvatarViews;
    UILabel *_usernamesLabel;
    UIButton *_viewMoreButton;
    NSString *_usernamesText;
}

+ (id)_viewMoreButtonImageWithText:(id)arg1 highlighted:(BOOL)arg2;
+ (id)viewMoreButtonImagesDictionary;
+ (float)heightShowingViewMoreButton:(BOOL)arg1;
+ (id)_viewMoreButtonFont;
+ (id)_usernameFont;
@property(copy, nonatomic) NSString *usernamesText; // @synthesize usernamesText=_usernamesText;
@property(retain, nonatomic) UIButton *viewMoreButton; // @synthesize viewMoreButton=_viewMoreButton;
@property(retain, nonatomic) UILabel *usernamesLabel; // @synthesize usernamesLabel=_usernamesLabel;
@property(retain, nonatomic) NSMutableArray *activeAvatarViews; // @synthesize activeAvatarViews=_activeAvatarViews;
@property(retain, nonatomic) NSMutableArray *avatarViews; // @synthesize avatarViews=_avatarViews;
@property(copy, nonatomic) NSString *viewMoreButtonText; // @synthesize viewMoreButtonText=_viewMoreButtonText;
@property(copy, nonatomic) CDUnknownBlockType viewMoreTapBlock; // @synthesize viewMoreTapBlock=_viewMoreTapBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarLongPressBlock; // @synthesize avatarLongPressBlock=_avatarLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType avatarTapBlock; // @synthesize avatarTapBlock=_avatarTapBlock;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSArray *userRepresentations; // @synthesize userRepresentations=_userRepresentations;
- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (int)accessibilityElementCount;
- (void)_viewMoreTapped;
- (void)_avatarLongPressAction:(id)arg1;
- (void)_avatarTapAction:(id)arg1;
- (void)cleanup;
- (void)willDisplay;
- (void)_layoutDrawings;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_update;
- (void)_addAvatarViewsIfNecessary;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
