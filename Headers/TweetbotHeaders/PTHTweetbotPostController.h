/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotPostViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "Tweetbot-Structs.h"
#import "PTHViewController.h"

@class PTHTweetbotPostPhoneView, PTHTweetbotPostDraft, PTHTweetbotPostDraftMedia, PTHTweetbotAccount;

__attribute__((visibility("hidden")))
@interface PTHTweetbotPostController : PTHViewController <PTHTweetbotPostViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
	PTHTweetbotAccount* _account;
	PTHTweetbotPostDraft* _draft;
	PTHTweetbotPostPhoneView* _postView;
	BOOL _firstTime;
	PTHTweetbotPostDraftMedia* _pickedMedia;
	NSRange _selectedRange;
}
@property(assign, nonatomic) NSRange selectedRange;
@property(retain, nonatomic) PTHTweetbotPostDraft* draft;
-(void).cxx_destruct;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(unsigned)supportedInterfaceOrientations;
-(void)post:(id)post;
-(void)showLocationOptions:(id)options;
-(void)toggleLocation:(id)location;
-(void)showCameraOptions:(id)options;
-(void)_showImagePicker:(int)picker inView:(id)view completion:(id)completion;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)showAccounts:(id)accounts;
-(void)showDrafts:(id)drafts;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidChangeSelection:(id)textView;
-(void)viewDidLayoutSubviews;
-(void)_updateSelectedEntity;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)searchEntity:(id)entity control:(id)control;
-(void)replaceEntity:(id)entity withText:(id)text;
-(void)addHashtag:(id)hashtag;
-(void)addUser:(id)user;
-(void)_addUserOrHashtag:(id)hashtag;
-(id)selectedEntity;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
-(void)setAccount:(id)account;
-(void)selectedMedia:(id)media inView:(id)view;
-(void)loadView;
-(void)ok:(id)ok;
-(id)modalCancelButtonTitle;
-(void)_updatePostButton;
-(id)initWithDraft:(id)draft;
@end

