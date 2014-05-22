//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewAdapter.h"

@class NSNumber, NSString, NSValue, UIColor, UIFont;

@interface TFNStringDataViewAdapter : TFNItemsDataViewAdapter
{
    NSNumber *_textAlignment;
    NSNumber *_multipleLines;
    NSValue *_size;
    int _style;
    int _cellStyle;
    NSString *_detailText;
    UIFont *_font;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) int cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (float)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct UIEdgeInsets)_contentPaddingForOptions:(id)arg1 defaultPadding:(struct UIEdgeInsets)arg2;
- (int)_defaultAccessoryTypeForOptions:(id)arg1;
- (int)_defaultSeparatorTypeForOptions:(id)arg1;
- (id)_sizeForOptions:(id)arg1;
- (BOOL)_multipleLinesForOptions:(id)arg1;
- (id)_textColorForOptions:(id)arg1;
- (id)_fontForOptions:(id)arg1;
- (int)_textAlignmentForOptions:(id)arg1 defaultAlignment:(int)arg2;
- (id)_detailTextForOptions:(id)arg1;
- (int)_cellStyleForOptions:(id)arg1;
- (int)_styleForOptions:(id)arg1;
@property(nonatomic) struct CGSize size;
@property(nonatomic) BOOL multipleLines;
@property(nonatomic) int textAlignment;

@end

