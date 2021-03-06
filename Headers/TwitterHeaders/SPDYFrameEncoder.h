//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPDYHeaderBlockCompressor;

@interface SPDYFrameEncoder : NSObject
{
    SPDYHeaderBlockCompressor *_compressor;
    unsigned int _encodedHeadersLength;
    unsigned int _compressedLength;
    char *_encodedHeaders;
    char *_compressed;
    id <SPDYFrameEncoderDelegate> _delegate;
}

@property(nonatomic) __weak id <SPDYFrameEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_encodeHeaders:(id)arg1;
- (_Bool)encodeWindowUpdateFrame:(id)arg1;
- (_Bool)encodeHeadersFrame:(id)arg1;
- (_Bool)encodeGoAwayFrame:(id)arg1;
- (_Bool)encodePingFrame:(id)arg1;
- (_Bool)encodeSettingsFrame:(id)arg1;
- (_Bool)encodeRstStreamFrame:(id)arg1;
- (_Bool)encodeSynReplyFrame:(id)arg1;
- (_Bool)encodeSynStreamFrame:(id)arg1;
- (_Bool)encodeDataFrame:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 headerCompressionLevel:(unsigned int)arg2;

@end

