//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFNLegacyFormCell, TFNLegacyFormSection;

@interface TFNLegacyFormField : NSObject
{
    TFNLegacyFormCell *cell;
    TFNLegacyFormSection *section;
}

@property(nonatomic) __weak TFNLegacyFormSection *section; // @synthesize section;
@property(nonatomic) __weak TFNLegacyFormCell *cell; // @synthesize cell;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentIndexPath;
- (id)tableViewCell;
- (float)heightInTableView;
- (BOOL)isFullyVisible;
- (void)focus;
- (BOOL)isLastFieldInSection;

@end

