//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface T1ProcessedMediaSource : NSObject
{
    NSURL *_associatedAssetURL;
}

+ (id)mediaSourceWithAccount:(id)arg1 assetOrNil:(id)arg2 imageOrNil:(id)arg3 allowedTypes:(unsigned int)arg4;
@property(retain, nonatomic) NSURL *associatedAssetURL; // @synthesize associatedAssetURL=_associatedAssetURL;
- (void).cxx_destruct;
- (void)generateMediaAsset:(CDUnknownBlockType)arg1;
- (id)init;

@end

