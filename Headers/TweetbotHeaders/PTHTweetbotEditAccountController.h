/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "PTHViewController.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "Tweetbot-Structs.h"

@class PTHTweetbotAccount, PTHStaticSectionCell, NSDictionary, UIScrollView;

__attribute__((visibility("hidden")))
@interface PTHTweetbotEditAccountController : PTHViewController <UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
	PTHTweetbotAccount* _account;
	UIScrollView* _scrollView;
	PTHStaticSectionCell* _avatarCell;
	PTHStaticSectionCell* _nameCell;
	PTHStaticSectionCell* _locationCell;
	PTHStaticSectionCell* _urlCell;
	PTHStaticSectionCell* _userDescriptionCell;
	BOOL _keyboardHidden;
	NSDictionary* _imageInfo;
}
-(void).cxx_destruct;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)updateAvatar:(id)avatar;
-(void)_showImagePicker:(int)picker avatarCell:(id)cell;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)updateUI;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_updateImage;
-(void)save;
-(void)_hideKeyboard;
-(void)keyboardWillBeHidden:(id)keyboard;
-(void)keyboardWasShown:(id)shown;
-(void)loadView;
-(id)initWithAccount:(id)account;
@end

