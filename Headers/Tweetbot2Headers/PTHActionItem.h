//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PTHActionItem : NSObject
{
    BOOL _enabled;
    NSString *_title;
    CDUnknownBlockType _chosenBlock;
    int _buttonStyle;
    int _tag;
}

+ (id)actionItemWithTitle:(id)arg1 chosenBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(copy, nonatomic) CDUnknownBlockType chosenBlock; // @synthesize chosenBlock=_chosenBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (id)description;

@end

