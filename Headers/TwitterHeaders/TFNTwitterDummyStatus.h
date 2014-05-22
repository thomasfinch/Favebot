//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNTwitterStatus.h"

#import "TFNTwitterDummyObject.h"

@class NSString;

@interface TFNTwitterDummyStatus : TFNTwitterStatus <TFNTwitterDummyObject>
{
    BOOL _loading;
    int _dummyObjectType;
    NSString *_messageText;
    NSString *_messageSubtext;
    CDUnknownBlockType _actionBlock;
}

+ (id)dummyStatusOfType:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *messageSubtext; // @synthesize messageSubtext=_messageSubtext;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(nonatomic) int dummyObjectType; // @synthesize dummyObjectType=_dummyObjectType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isNotADummyStatus;

@end

