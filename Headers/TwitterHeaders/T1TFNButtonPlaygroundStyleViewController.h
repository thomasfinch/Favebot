//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, UIImageView, UISwitch, UIView;

__attribute__((visibility("hidden")))
@interface T1TFNButtonPlaygroundStyleViewController : UIViewController
{
    BOOL _stateChangesAreAnimated;
    BOOL _showTapTargets;
    UISwitch *_enabledSwitch;
    UISwitch *_stateTransitionsAnimatedSwitch;
    UISwitch *_showTapTargetsSwitch;
    UIImageView *_backgroundImageView;
    UIView *_controlsView;
    UIView *_controlsDividerView;
    NSArray *_initialStates;
    unsigned int _variant;
    unsigned int _darkBackgroundIndex;
}

@property(nonatomic) unsigned int darkBackgroundIndex; // @synthesize darkBackgroundIndex=_darkBackgroundIndex;
@property(nonatomic) unsigned int variant; // @synthesize variant=_variant;
@property(nonatomic) BOOL showTapTargets; // @synthesize showTapTargets=_showTapTargets;
@property(nonatomic) BOOL stateChangesAreAnimated; // @synthesize stateChangesAreAnimated=_stateChangesAreAnimated;
@property(retain, nonatomic) NSArray *initialStates; // @synthesize initialStates=_initialStates;
@property(nonatomic) __weak UIView *controlsDividerView; // @synthesize controlsDividerView=_controlsDividerView;
@property(nonatomic) __weak UIView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UISwitch *showTapTargetsSwitch; // @synthesize showTapTargetsSwitch=_showTapTargetsSwitch;
@property(nonatomic) __weak UISwitch *stateTransitionsAnimatedSwitch; // @synthesize stateTransitionsAnimatedSwitch=_stateTransitionsAnimatedSwitch;
@property(nonatomic) __weak UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
- (void).cxx_destruct;
- (void)_updateBackgroundImage;
- (void)toggleDarkBackground:(id)arg1;
- (void)toggleBorderless:(id)arg1;
- (void)toggleTitle:(id)arg1;
- (void)toggleShowTapTargets:(id)arg1;
- (void)toggleStateChangesEnabled:(id)arg1;
- (void)toggleEnabled:(id)arg1;
- (void)resize:(id)arg1;
- (void)_rememberInitialStates;
- (id)buttons;
- (void)buttonWasTapped:(id)arg1;
- (void)configureButton:(id)arg1;
- (void)_removeButtons;
- (void)_createButtons;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
