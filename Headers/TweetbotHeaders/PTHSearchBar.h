/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Tweetbot-Structs.h"
#import "UISearchBarDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface PTHSearchBar : XXUnknownSuperclass <UISearchBarDelegate> {
	NSString* _colorGroupName;
	id<UISearchBarDelegate> _realDelegate;
	BOOL _editing;
}
-(void).cxx_destruct;
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarBookmarkButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(void)setPlaceholder:(id)placeholder;
-(void)_updateColors;
-(void)setDelegate:(id)delegate;
-(id)initWithColorGroupName:(id)colorGroupName;
-(id)initWithFrame:(CGRect)frame;
@end

