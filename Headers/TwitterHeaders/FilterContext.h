//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext;

@interface FilterContext : NSObject
{
    EAGLContext *_glContext;
}

+ (void)willEnterForeground;
+ (void)didEnterBackground;
+ (void)initialize;
- (void).cxx_destruct;
- (id)glContext;
- (void)dealloc;
- (BOOL)releaseContextIfBlocked:(CDStruct_183601bc *)arg1;
- (void)releaseContext:(CDStruct_183601bc *)arg1;
- (CDStruct_183601bc *)acquireContext;
- (id)init;

@end

