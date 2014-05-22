//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface Filter : NSObject
{
    NSMutableArray *_textures;
    NSString *_name;
    NSString *_identifier;
    unsigned int _program;
}

@property(readonly) unsigned int program; // @synthesize program=_program;
@property(readonly) NSArray *textures; // @synthesize textures=_textures;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)addTextureNamed:(id)arg1 texture:(unsigned int)arg2 wrap:(int)arg3 filter:(int)arg4;
- (void)addTextureNamed:(id)arg1 texture:(unsigned int)arg2;
- (void)addTextureNamed:(id)arg1 resource:(id)arg2 wrap:(int)arg3 filter:(int)arg4;
- (void)addTextureNamed:(id)arg1 resource:(id)arg2;
- (void)dealloc;
- (id)initWithShaderName:(id)arg1 name:(id)arg2 identifier:(id)arg3;
- (id)initWithProgram:(unsigned int)arg1 name:(id)arg2 identifier:(id)arg3;

@end

