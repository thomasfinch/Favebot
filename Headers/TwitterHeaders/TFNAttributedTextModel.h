//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

@interface TFNAttributedTextModel : NSObject
{
    struct __CTFrame *_coreTextFrame;
    struct __CTLine *_truncatedLastLine;
    struct CGPoint _truncatedLastLineOrigin;
    struct CGSize _requestedSize;
    struct CGSize _actualSize;
    BOOL _needToAddExclusionSize;
    BOOL _singleLine;
    unsigned char _lineBreakMode;
    NSAttributedString *_attributedString;
    unsigned int _maxLines;
    unsigned int _exclusionType;
    struct CGSize _exclusionSize;
}

@property(nonatomic) struct CGSize exclusionSize; // @synthesize exclusionSize=_exclusionSize;
@property(nonatomic) unsigned int exclusionType; // @synthesize exclusionType=_exclusionType;
@property(readonly, nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) unsigned int maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) BOOL singleLine; // @synthesize singleLine=_singleLine;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (struct CGAffineTransform)coreTextTransform;
- (void)_buildCoreTextFrame;
- (id)_coreTextAttributedString;
- (struct __CTFrame *)_coreTextFrameCreatedWithAttributedString:(id)arg1;
- (BOOL)_sizeRequiresRelayout:(struct CGSize)arg1;
- (void)resetCoreTextFrame;
- (void)fitToSize:(struct CGSize)arg1;
- (void)fitToWidth:(float)arg1;
- (struct CGPoint)truncatedLastLineOrigin;
- (struct __CTLine *)truncatedLastLine;
- (struct __CTFrame *)coreTextFrame;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (id)init;

@end

