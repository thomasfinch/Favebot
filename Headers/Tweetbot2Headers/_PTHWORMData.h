//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface _PTHWORMData : NSData
{
    unsigned long _pageSize;
    unsigned int _length;
    unsigned int _currentOffset;
    unsigned int _writeBlockSize;
    struct _NSRange _writeRange;
    int _fd;
    void *_map;
}

@property(readonly, nonatomic) unsigned int currentOffset; // @synthesize currentOffset=_currentOffset;
- (void)dealloc;
- (void)sync;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (int)appendData:(id)arg1;
- (const void *)bytes;
- (unsigned int)length;
- (id)initWithPath:(id)arg1 length:(unsigned int)arg2 currentOffset:(unsigned int)arg3;

@end

