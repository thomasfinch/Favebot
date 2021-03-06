//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

#import "NSCopying.h"

@interface TFNAccessibilityElement : UIAccessibilityElement <NSCopying>
{
    id <TFNAccessibilityElementDelegate> _delegate;
}

@property(nonatomic) __weak id <TFNAccessibilityElementDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isAccessibilityElement;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end

