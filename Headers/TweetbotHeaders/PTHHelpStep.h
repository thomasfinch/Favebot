/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIImageView, NSString, UIImage;

@interface PTHHelpStep : XXUnknownSuperclass {
	NSString* _imageName;
	BOOL _firstTime;
	NSString* _title;
	NSString* _description;
	NSString* _action;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _actionLabel;
	UIImageView* _imageView;
}
@property(assign, nonatomic) __weak UIImageView* imageView;
@property(assign, nonatomic) __weak UILabel* actionLabel;
@property(assign, nonatomic) __weak UILabel* descriptionLabel;
@property(assign, nonatomic) __weak UILabel* titleLabel;
@property(readonly, assign, nonatomic) UIImage* image;
@property(readonly, assign, nonatomic, getter=isFirstTime) BOOL firstTime;
@property(readonly, assign, nonatomic) NSString* action;
@property(readonly, assign, nonatomic) NSString* description;
@property(readonly, assign, nonatomic) NSString* title;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)dictionary;
@end

