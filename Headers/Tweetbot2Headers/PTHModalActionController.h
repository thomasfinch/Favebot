//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTHViewController.h"

@class NSMutableArray, UIImageView, UILabel;

@interface PTHModalActionController : PTHViewController
{
    NSMutableArray *_actionButtons;
    UILabel *_titleLabel;
    UIImageView *_spinnerView;
    BOOL _phoneMode;
    BOOL _scroll;
    BOOL _dismissed;
    BOOL _activityIndicator;
    CDUnknownBlockType _modalSheetStopBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType modalSheetStopBlock; // @synthesize modalSheetStopBlock=_modalSheetStopBlock;
@property(nonatomic, getter=hasActivityIndicator) BOOL activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)dealloc;
- (void)showInView:(id)arg1 modalBlock:(CDUnknownBlockType)arg2;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)showInView:(id)arg1;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 modalBlock:(CDUnknownBlockType)arg3;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 modalBlock:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)_stop:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)replaceButton:(id)arg1 withButton:(id)arg2;
- (id)addDeleteButton:(id)arg1 selectBlock:(CDUnknownBlockType)arg2;
- (id)addActionButton:(id)arg1 selectBlock:(CDUnknownBlockType)arg2;
- (id)addActionButton:(id)arg1 withCode:(int)arg2 andButtonType:(int)arg3;
- (id)addActionButton:(id)arg1 withCode:(int)arg2 andButtonType:(int)arg3 selectBlock:(CDUnknownBlockType)arg4;
- (void)loadView;
- (void)loadViewiPad;
- (void)loadViewiPhone;
- (id)newButton:(id)arg1 withCode:(int)arg2 andButtonType:(int)arg3;
- (id)newButton:(id)arg1 withCode:(int)arg2 andButtonType:(int)arg3 selectBlock:(CDUnknownBlockType)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithButtonTitles:(id)arg1;

@end
