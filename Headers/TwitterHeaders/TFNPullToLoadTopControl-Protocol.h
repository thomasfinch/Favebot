//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@protocol TFNPullToLoadTopControl <NSObject>
@property(nonatomic) BOOL hideWhenNotInUse;
@property(nonatomic) struct CGSize controlOffset;
@property(nonatomic) BOOL loading;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)setLoading:(BOOL)arg1 completion:(void (^)(BOOL))arg2;
@end

