//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "TFNRevealableDeleteButtonHost.h"
#import "TFNTwitterAuthenticated.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CALayer, T1PresentedAccountCellScrollView, TFNRevealableDeleteButton, TFNTwitterAccount, UIButton, UIColor, UIImageView, UIPanGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface T1PresentedAccountCell : UICollectionViewCell <UIGestureRecognizerDelegate, UIScrollViewDelegate, TFNTwitterAuthenticated, TFNRevealableDeleteButtonHost>
{
    BOOL _canRevealDeleteButton;
    UIButton *_resetButtonTop;
    UIButton *_resetButtonBottom;
    BOOL _showingDeleteButton;
    BOOL _shouldUseLegacySummaryView;
    TFNTwitterAccount *_account;
    float _topContentOffset;
    float _clipContentOffset;
    UIColor *_backgroundPlaceholderColor;
    UIView *_summaryView;
    UIImageView *_backgroundImageView;
    UIImageView *_iconView;
    UIView *_highlightView;
    T1PresentedAccountCellScrollView *_scrollView;
    CALayer *_separatorLayer;
    TFNRevealableDeleteButton *_deleteButton;
    UIPanGestureRecognizer *_deleteGestureRecognizer;
}

+ (float)defaultHeight;
@property(readonly, nonatomic) UIPanGestureRecognizer *deleteGestureRecognizer; // @synthesize deleteGestureRecognizer=_deleteGestureRecognizer;
@property(readonly, nonatomic) TFNRevealableDeleteButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
@property(readonly, nonatomic) T1PresentedAccountCellScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *summaryView; // @synthesize summaryView=_summaryView;
@property(nonatomic) BOOL shouldUseLegacySummaryView; // @synthesize shouldUseLegacySummaryView=_shouldUseLegacySummaryView;
@property(retain, nonatomic) UIColor *backgroundPlaceholderColor; // @synthesize backgroundPlaceholderColor=_backgroundPlaceholderColor;
@property(nonatomic) float clipContentOffset; // @synthesize clipContentOffset=_clipContentOffset;
@property(nonatomic) float topContentOffset; // @synthesize topContentOffset=_topContentOffset;
@property(nonatomic, getter=isShowingDeleteButton) BOOL showingDeleteButton; // @synthesize showingDeleteButton=_showingDeleteButton;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
@property(nonatomic, getter=isDeleteButtonEnabled) BOOL deleteButtonEnabled;
@property(nonatomic) BOOL canRevealDeleteButton;
- (void)setDeleteButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_resetDeleteButton;
- (void)_handlePan:(id)arg1;
- (void)_layoutContent;
- (void)_accountDidUpdate:(id)arg1;
@property(nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
- (void)setSeparatorHidden:(BOOL)arg1 withDuration:(double)arg2;
- (void)setBackground:(id)arg1 withSize:(struct CGSize)arg2 animated:(BOOL)arg3;
- (id)_layerForAnimationType:(unsigned int)arg1;
- (void)removeAnimationsOfType:(unsigned int)arg1;
- (void)applyAnimation:(id)arg1;
- (float)baseForAnimation:(id)arg1;

@end

