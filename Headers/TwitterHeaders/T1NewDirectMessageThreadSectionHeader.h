//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSDate, UILabel;

__attribute__((visibility("hidden")))
@interface T1NewDirectMessageThreadSectionHeader : UICollectionReusableView
{
    NSDate *_entryGroupDate;
    UILabel *_entryGroupHeaderLabel;
}

+ (float)sectionHeaderHeight;
@property(retain, nonatomic) UILabel *entryGroupHeaderLabel; // @synthesize entryGroupHeaderLabel=_entryGroupHeaderLabel;
@property(retain, nonatomic) NSDate *entryGroupDate; // @synthesize entryGroupDate=_entryGroupDate;
- (void).cxx_destruct;
- (id)_timestampString;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

