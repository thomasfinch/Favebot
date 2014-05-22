//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIColor;

@interface TFNPageControl : UIControl
{
    BOOL _hidesForSinglePage;
    BOOL _presenting;
    unsigned int _currentPage;
    unsigned int _numberOfPages;
    UIColor *_indicatorColorActivePage;
    UIColor *_indicatorColorInactivePage;
    UIColor *_shadowColor;
    float _indicatorDiameter;
    float _indicatorGap;
    id <TFNPageControlDelegate> _delegate;
    struct CGSize _shadowOffset;
}

@property(nonatomic) __weak id <TFNPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float indicatorGap; // @synthesize indicatorGap=_indicatorGap;
@property(nonatomic) float indicatorDiameter; // @synthesize indicatorDiameter=_indicatorDiameter;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *indicatorColorInactivePage; // @synthesize indicatorColorInactivePage=_indicatorColorInactivePage;
@property(retain, nonatomic) UIColor *indicatorColorActivePage; // @synthesize indicatorColorActivePage=_indicatorColorActivePage;
@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property(nonatomic) BOOL hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) unsigned int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) unsigned int currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sizeToFit;
@property(readonly, nonatomic) float indicatorsTotalWidth;
- (void)setindicatorColorInactivePage:(id)arg1;
- (void)setindicatorColorActivePage:(id)arg1;
- (void)presentFromBelow;

@end

