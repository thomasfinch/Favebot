/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "PTHTweetbotAvatarDetailCell.h"

@class PTHTweetbotList;

__attribute__((visibility("hidden")))
@interface PTHTweetbotListedCell : PTHTweetbotAvatarDetailCell {
}
@property(readonly, assign, nonatomic) PTHTweetbotList* list;
+(float)textHeight;
+(void)initialize;
-(void)setItem:(id)item;
-(void)showDetail:(id)detail;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
