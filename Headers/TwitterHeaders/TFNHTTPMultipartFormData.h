//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface TFNHTTPMultipartFormData : NSObject <NSCoding>
{
    NSMutableArray *_parts;
    NSString *_dataFile;
    int _dataLength;
}

- (void).cxx_destruct;
- (void)cleanup;
- (int)dataInputLength;
- (id)dataInputStream;
- (id)dataFile;
- (void)_writeData:(id)arg1 toFileHandle:(id)arg2;
- (id)contentTypeHeader;
- (id)boundary;
- (void)addJSONData:(id)arg1 name:(id)arg2;
- (void)addVideoFile:(id)arg1 name:(id)arg2;
- (void)addImageFile:(id)arg1 name:(id)arg2;
- (void)addTextPart:(id)arg1 name:(id)arg2;
- (void)addDataPart:(id)arg1 name:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
