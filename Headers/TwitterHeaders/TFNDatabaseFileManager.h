//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString;

@interface TFNDatabaseFileManager : NSObject
{
    NSString *_databaseDirectory;
    NSBundle *_bundle;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)deleteAllDatabaseFiles;
- (void)deleteAllDatabaseFilesForInstance:(id)arg1;
- (BOOL)deployDatabaseInstance:(id)arg1 filename:(id)arg2 version:(int)arg3;
- (id)pathForDatabaseInstance:(id)arg1 filename:(id)arg2 version:(int)arg3;
- (id)_databaseDirectoryForInstance:(id)arg1 version:(int)arg2;
- (id)_databaseDirectoryForInstance:(id)arg1;
- (id)_databaseDirectory;
- (id)pathForBundledDatabaseInstanceWithFilename:(id)arg1;
- (void)setBundle:(id)arg1;
- (id)bundle;

@end
