/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PTHKeyValueObserver, PTHTweetbotUser, NSString, UIImage, UIColor;

__attribute__((visibility("hidden")))
@interface PTHTweetbotAvatarView : XXUnknownSuperclass {
	PTHKeyValueObserver* _userObserver;
	PTHTweetbotUser* _user;
	UIImage* _userImage;
	float _avatarInset;
	float _cornerRadius;
	int _avatarType;
	NSString* _overlayColorName;
	UIColor* _overlayColor;
	NSString* _strokeColorName;
	UIColor* _strokeColor;
	NSString* _fillColorName;
	UIColor* _fillColor;
}
@property(retain, nonatomic) UIColor* fillColor;
@property(copy, nonatomic) NSString* fillColorName;
@property(retain, nonatomic) UIColor* strokeColor;
@property(copy, nonatomic) NSString* strokeColorName;
@property(retain, nonatomic) UIColor* overlayColor;
@property(copy, nonatomic) NSString* overlayColorName;
@property(readonly, assign, nonatomic) int currentAvatarType;
@property(assign, nonatomic) int avatarType;
@property(assign, nonatomic) float cornerRadius;
@property(assign, nonatomic) float avatarInset;
@property(retain, nonatomic) UIImage* userImage;
@property(retain, nonatomic) PTHTweetbotUser* user;
-(void).cxx_destruct;
-(void)dealloc;
-(id)accessibilityValue;
-(void)drawRect:(CGRect)rect;
-(CGSize)intrinsicContentSize;
-(void)colorThemeDidChange;
-(void)_update;
-(id)initWithFrame:(CGRect)frame;
@end
