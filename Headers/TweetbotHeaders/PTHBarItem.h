/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Tweetbot-Structs.h"

@class UIView, NSString, UIFont, UIImage, NSMutableArray, NSArray, UIColor;

@interface PTHBarItem : XXUnknownSuperclass {
	NSMutableArray* _gestureRecognizers;
	BOOL _enabled;
	NSString* _title;
	UIImage* _image;
	int _tag;
	UIImage* _selectedImage;
	UIImage* _highlightedImage;
	UIImage* _disabledImage;
	UIImage* _backgroundImage;
	UIImage* _selectedBackgroundImage;
	UIImage* _highlightedBackgroundImage;
	UIImage* _disabledBackgroundImage;
	UIColor* _titleColor;
	UIColor* _selectedTitleColor;
	UIColor* _highlightedTitleColor;
	UIColor* _disabledTitleColor;
	UIFont* _titleFont;
	NSString* _badgeValue;
	Class _viewClass;
	UIView* _view;
	UIEdgeInsets _imageInsets;
}
@property(retain, nonatomic) UIView* view;
@property(copy, nonatomic) NSArray* gestureRecognizers;
@property(assign, nonatomic) __weak Class viewClass;
@property(copy, nonatomic) NSString* badgeValue;
@property(retain, nonatomic) UIFont* titleFont;
@property(retain, nonatomic) UIColor* disabledTitleColor;
@property(retain, nonatomic) UIColor* highlightedTitleColor;
@property(retain, nonatomic) UIColor* selectedTitleColor;
@property(retain, nonatomic) UIColor* titleColor;
@property(retain, nonatomic) UIImage* disabledBackgroundImage;
@property(retain, nonatomic) UIImage* highlightedBackgroundImage;
@property(retain, nonatomic) UIImage* selectedBackgroundImage;
@property(retain, nonatomic) UIImage* backgroundImage;
@property(retain, nonatomic) UIImage* disabledImage;
@property(retain, nonatomic) UIImage* highlightedImage;
@property(retain, nonatomic) UIImage* selectedImage;
@property(assign, nonatomic) int tag;
@property(assign, nonatomic) UIEdgeInsets imageInsets;
@property(retain, nonatomic) UIImage* image;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
-(void).cxx_destruct;
-(void)setBarItem:(id)item;
-(void)addTapGestureRecognizerWithTarget:(id)target action:(SEL)action;
-(id)init;
@end

