//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTableViewCell.h"

@class TCCardInstance;

__attribute__((visibility("hidden")))
@interface T1PlusCardCell : TFNTableViewCell
{
    TCCardInstance *_cardInstance;
}

+ (struct UIEdgeInsets)defaultContentPadding;
@property(retain, nonatomic) TCCardInstance *cardInstance; // @synthesize cardInstance=_cardInstance;
- (void).cxx_destruct;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (void)cleanup;
- (void)layoutSubviews;

@end

