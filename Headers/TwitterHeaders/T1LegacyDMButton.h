//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

__attribute__((visibility("hidden")))
@interface T1LegacyDMButton : UIButton
{
    unsigned int _unreadCount;
}

+ (id)_generateDMBackgroundImage:(BOOL)arg1 unreadCount:(unsigned int)arg2;
+ (id)_DMBackgroundImage:(BOOL)arg1 unreadCount:(unsigned int)arg2;
+ (void)initialize;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
- (id)initWithUnreadCount:(unsigned int)arg1;

@end
