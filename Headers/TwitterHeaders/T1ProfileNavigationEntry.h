//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface T1ProfileNavigationEntry : NSObject
{
    NSString *_title;
    NSNumber *_count;
    CDUnknownBlockType _viewControllerCreateBlock;
}

+ (id)entryWithTitle:(id)arg1 count:(id)arg2 viewControllerCreateBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType viewControllerCreateBlock; // @synthesize viewControllerCreateBlock=_viewControllerCreateBlock;
@property(copy, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

