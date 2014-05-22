//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINavigationControllerDelegate.h"
#import "UIVideoEditorControllerDelegate.h"

@class NSURL, UIVideoEditorController, UIViewController;

__attribute__((visibility("hidden")))
@interface T1MediaEditor : NSObject <UIVideoEditorControllerDelegate, UINavigationControllerDelegate>
{
    UIVideoEditorController *videoEditorController;
    UIViewController *viewController;
    CDUnknownBlockType _block;
    NSURL *videoURL;
    id _holdInMemory;
}

+ (void)editVideo:(id)arg1 viewController:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) id holdInMemory; // @synthesize holdInMemory=_holdInMemory;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController;
- (void).cxx_destruct;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)_dismiss;
- (void)show;

@end

