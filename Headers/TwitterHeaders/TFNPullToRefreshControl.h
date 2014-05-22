//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "TFNPullToLoadTopControl.h"

@class UIActivityIndicatorView, UIImageView, UIScrollView;

@interface TFNPullToRefreshControl : UIControl <TFNPullToLoadTopControl>
{
    int _status;
    UIImageView *_arrowView;
    UIActivityIndicatorView *_activityView;
    UIScrollView *_savedScrollView;
    struct UIEdgeInsets _savedScrollInsets;
    BOOL _fromScrolling;
    BOOL _hideWhenNotInUse;
    struct CGSize _controlOffset;
}

@property(nonatomic) BOOL hideWhenNotInUse; // @synthesize hideWhenNotInUse=_hideWhenNotInUse;
@property(nonatomic) struct CGSize controlOffset; // @synthesize controlOffset=_controlOffset;
- (void).cxx_destruct;
- (void)_playSoundNamed:(id)arg1;
- (float)_hideWhenNotInUseAlphaForScrollView:(id)arg1;
- (void)_setStatus:(int)arg1 fromScrolling:(BOOL)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setLoading:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL loading;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

