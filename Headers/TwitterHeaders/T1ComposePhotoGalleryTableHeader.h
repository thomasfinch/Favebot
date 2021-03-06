//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UINavigationBarDelegate.h"

@class NSString, TFNBarButtonItemButton, TFNNavigationBar, UIButton, UIColor, UIFont, UINavigationItem;

__attribute__((visibility("hidden")))
@interface T1ComposePhotoGalleryTableHeader : UIView <UINavigationBarDelegate>
{
    TFNNavigationBar *_navBar;
    UINavigationItem *_item;
    BOOL _viewDidSetup;
    UIButton *_backTitleButton;
    TFNBarButtonItemButton *_backItemButton;
    UIColor *_backgroundImageColor;
}

@property(retain, nonatomic) UIColor *backgroundImageColor; // @synthesize backgroundImageColor=_backgroundImageColor;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *navFont;
@property(retain, nonatomic) UIColor *navColor;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIColor *titleColor;
@property(retain, nonatomic) UIFont *titleFont;
- (void)_back:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

