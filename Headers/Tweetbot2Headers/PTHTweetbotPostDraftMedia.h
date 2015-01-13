//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, NSURL;

@interface PTHTweetbotPostDraftMedia : NSObject <NSCoding>
{
    NSURL *_sourceURL;
    NSURL *_mediaURL;
    int _type;
    NSString *_text;
    struct dispatch_queue_s *_queue;
    NSString *_uuid;
}

@property(readonly, retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)loadThumbnailWithSize:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithImagePickerDictionary:(id)arg1;
- (id)initWithALRepresentation:(id)arg1 alLibrary:(id)arg2;
- (void)saveRepresentation:(id)arg1 toURL:(id)arg2;
- (void)saveImage:(id)arg1 type:(id)arg2 toURL:(id)arg3;
- (id)newSourceURLForType:(int)arg1;
- (void)delete;
- (void)loadSourceURL:(CDUnknownBlockType)arg1;
- (void)updateSourceData:(id)arg1;
- (void)loadSourceData:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
- (id)initWithData:(id)arg1 type:(int)arg2;
- (id)initWithText:(id)arg1;
- (id)init;

@end
