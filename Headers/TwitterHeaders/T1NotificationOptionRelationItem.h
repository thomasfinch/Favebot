//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1NotificationOptionItem.h"

__attribute__((visibility("hidden")))
@interface T1NotificationOptionRelationItem : T1NotificationOptionItem
{
    BOOL _mentionEnabled;
    int _type;
    CDUnknownBlockType _mentionEnableBlock;
}

@property(copy, nonatomic) CDUnknownBlockType mentionEnableBlock; // @synthesize mentionEnableBlock=_mentionEnableBlock;
@property(nonatomic) BOOL mentionEnabled; // @synthesize mentionEnabled=_mentionEnabled;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_viewControllerWithTitle:(id)arg1;
- (id)_summaryForEnabled:(int)arg1;
- (id)initWithTitle:(id)arg1 enabled:(int)arg2 mentionEnabled:(BOOL)arg3;

@end

