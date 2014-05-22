/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHViewController.h"

@class UILabel, PTHShapeView, PTHStaticSectionCell, _PTHSteppedSlider;

__attribute__((visibility("hidden")))
@interface PTHTweetbotDisplaySettingsController : PTHViewController {
	_PTHSteppedSlider* _fontSlider;
	PTHStaticSectionCell* _defaultThemeCell;
	PTHStaticSectionCell* _nightThemeCell;
	PTHStaticSectionCell* _brightnessThemeCell;
	PTHShapeView* _brightnessIndicator;
	int _indicatorState;
	float _brightness;
	UILabel* _themeDescriptionLabel;
}
-(void).cxx_destruct;
-(unsigned)supportedInterfaceOrientations;
-(void)fontSizeChanged:(id)changed;
-(void)changeUseSystemFont:(id)font;
-(void)changeRoundAvatar:(id)avatar;
-(void)changeBadgesEnabled:(id)enabled;
-(void)changeThemeAutoChange:(id)change;
-(void)changeTheme:(id)theme;
-(void)_updateBrightnessIndicator;
-(void)_updateIndicatorColor;
-(void)_updateUI;
-(void)loadView;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
