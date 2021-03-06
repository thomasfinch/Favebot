//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, PTHAnimatedLabel, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface PTHControlCell : UIControl
{
    UILabel *_titleLabel;
    PTHAnimatedLabel *_valueLabel;
    UIImageView *_imageView;
    UILabel *_descriptionLabel;
    UIView *_accessoryView;
    UIImageView *_backgroundView;
    UIImageView *_highlightedBackgroundView;
    BOOL _disclosure;
    BOOL _autoPosition;
    BOOL _canSelect;
    int _position;
    UIImage *_backgroundImage;
    UIImage *_highlightedBackgroundImage;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    NSString *_backgroundImageNamePrefix;
    int _backgroundImageLeftCapWidth;
    int _backgroundImageTopCapHeight;
    UIImageView *_disclosureView;
    float _widthInset;
    id _representedObject;
    float _imageSideOffset;
    float _titleSideOffset;
    float _imageTitleOffset;
    float _disclosureSideOffset;
    float _disclosureTitleOffset;
    float _disclosureAccessoryOffset;
    float _accessoryTitleOffset;
    struct UIEdgeInsets _titleInsets;
}

+ (int)positionInArray:(id)arg1 ofObject:(id)arg2;
+ (int)positionInArray:(id)arg1 atIndex:(int)arg2;
+ (float)defaultHeight;
+ (void)deselectAllCells:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) float accessoryTitleOffset; // @synthesize accessoryTitleOffset=_accessoryTitleOffset;
@property(nonatomic) float disclosureAccessoryOffset; // @synthesize disclosureAccessoryOffset=_disclosureAccessoryOffset;
@property(nonatomic) float disclosureTitleOffset; // @synthesize disclosureTitleOffset=_disclosureTitleOffset;
@property(nonatomic) float disclosureSideOffset; // @synthesize disclosureSideOffset=_disclosureSideOffset;
@property(nonatomic) float imageTitleOffset; // @synthesize imageTitleOffset=_imageTitleOffset;
@property(nonatomic) float titleSideOffset; // @synthesize titleSideOffset=_titleSideOffset;
@property(nonatomic) float imageSideOffset; // @synthesize imageSideOffset=_imageSideOffset;
@property(readonly, retain, nonatomic) UIView *highlightedBackgroundView; // @synthesize highlightedBackgroundView=_highlightedBackgroundView;
@property(readonly, retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) BOOL canSelect; // @synthesize canSelect=_canSelect;
@property(nonatomic) BOOL autoPosition; // @synthesize autoPosition=_autoPosition;
@property(nonatomic) struct UIEdgeInsets titleInsets; // @synthesize titleInsets=_titleInsets;
@property(nonatomic, getter=hasDisclosure) BOOL disclosure; // @synthesize disclosure=_disclosure;
@property(nonatomic) float widthInset; // @synthesize widthInset=_widthInset;
@property(nonatomic) int backgroundImageTopCapHeight; // @synthesize backgroundImageTopCapHeight=_backgroundImageTopCapHeight;
@property(nonatomic) int backgroundImageLeftCapWidth; // @synthesize backgroundImageLeftCapWidth=_backgroundImageLeftCapWidth;
@property(copy, nonatomic) NSString *backgroundImageNamePrefix; // @synthesize backgroundImageNamePrefix=_backgroundImageNamePrefix;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *highlightedBackgroundImage; // @synthesize highlightedBackgroundImage=_highlightedBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) int position; // @synthesize position=_position;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIImageView *disclosureView; // @synthesize disclosureView=_disclosureView;
@property(retain, nonatomic) UIImage *highlightedDisclosureImage;
@property(retain, nonatomic) UIImage *disclosureImage;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(copy, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *highlightedImage;
@property(retain, nonatomic) UIImage *image;
- (void)setValue:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSString *value;
@property(readonly, nonatomic) PTHAnimatedLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_updateBackgroundState;
- (BOOL)_isSelected;
- (void)_updateBackgroundViews;
- (id)_backgroundImageNameSuffix;
- (id)initWithPosition:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

