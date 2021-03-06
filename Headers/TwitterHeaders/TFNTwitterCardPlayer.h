//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TFNTwitterPlistSerialization.h"

@class NSString;

@interface TFNTwitterCardPlayer : NSObject <NSCoding, TFNTwitterPlistSerialization>
{
    NSString *_sourceURL;
    NSString *_sourceType;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int playbackPerferenceWeight;
@property(readonly, nonatomic) BOOL isVideo;
@property(readonly, nonatomic) BOOL isCodecAAC;
@property(readonly, nonatomic) BOOL isCodecH264AndAAC;
@property(readonly, nonatomic) BOOL isAudio;
@property(readonly, nonatomic) BOOL isHTML;
- (id)description;
- (id)sourceTypeMIME;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

