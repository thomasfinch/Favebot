//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHControlCell.h"

@interface PTHSettingsControlCell : PTHControlCell
{
    BOOL _checkboxSelected;
}

+ (float)defaultHeight;
@property(nonatomic) BOOL checkboxSelected; // @synthesize checkboxSelected=_checkboxSelected;
- (id)descriptionLabel;
- (id)valueLabel;
- (id)titleLabel;
@property(nonatomic, getter=hasCheckbox) BOOL checkbox;
- (id)initWithPosition:(int)arg1;

@end

