//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"

@class NSArray, T1LabeledTextFieldCell, TFNHUD, TFNTwitterAccount, TFNTwitterUSPostalAddress, UIButton, UITableView, UITextField;

__attribute__((visibility("hidden")))
@interface T1AddUSPostalAddressController : NSObject <UITextFieldDelegate>
{
    TFNTwitterUSPostalAddress *_address;
    UITextField *_nameField;
    T1LabeledTextFieldCell *_nameTableCell;
    UITextField *_firstNameField;
    T1LabeledTextFieldCell *_firstNameTableCell;
    UITextField *_lastNameField;
    T1LabeledTextFieldCell *_lastNameTableCell;
    UITextField *_address1Field;
    T1LabeledTextFieldCell *_address1TableCell;
    UITextField *_address2Field;
    T1LabeledTextFieldCell *_address2TableCell;
    UITextField *_cityField;
    T1LabeledTextFieldCell *_cityTableCell;
    UITextField *_stateField;
    T1LabeledTextFieldCell *_stateTableCell;
    UITextField *_zipCodeField;
    T1LabeledTextFieldCell *_zipCodeTableCell;
    UIButton *_saveAddressButton;
    UITableView *_tableView;
    TFNHUD *_hud;
    TFNTwitterAccount *_account;
    NSArray *_addSections;
}

@property(readonly, nonatomic) NSArray *addSections; // @synthesize addSections=_addSections;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNHUD *hud; // @synthesize hud=_hud;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UIButton *saveAddressButton; // @synthesize saveAddressButton=_saveAddressButton;
@property(retain, nonatomic) T1LabeledTextFieldCell *zipCodeTableCell; // @synthesize zipCodeTableCell=_zipCodeTableCell;
@property(retain, nonatomic) UITextField *zipCodeField; // @synthesize zipCodeField=_zipCodeField;
@property(retain, nonatomic) T1LabeledTextFieldCell *stateTableCell; // @synthesize stateTableCell=_stateTableCell;
@property(retain, nonatomic) UITextField *stateField; // @synthesize stateField=_stateField;
@property(retain, nonatomic) T1LabeledTextFieldCell *cityTableCell; // @synthesize cityTableCell=_cityTableCell;
@property(retain, nonatomic) UITextField *cityField; // @synthesize cityField=_cityField;
@property(retain, nonatomic) T1LabeledTextFieldCell *address2TableCell; // @synthesize address2TableCell=_address2TableCell;
@property(retain, nonatomic) UITextField *address2Field; // @synthesize address2Field=_address2Field;
@property(retain, nonatomic) T1LabeledTextFieldCell *address1TableCell; // @synthesize address1TableCell=_address1TableCell;
@property(retain, nonatomic) UITextField *address1Field; // @synthesize address1Field=_address1Field;
@property(retain, nonatomic) T1LabeledTextFieldCell *lastNameTableCell; // @synthesize lastNameTableCell=_lastNameTableCell;
@property(retain, nonatomic) UITextField *lastNameField; // @synthesize lastNameField=_lastNameField;
@property(retain, nonatomic) T1LabeledTextFieldCell *firstNameTableCell; // @synthesize firstNameTableCell=_firstNameTableCell;
@property(retain, nonatomic) UITextField *firstNameField; // @synthesize firstNameField=_firstNameField;
@property(retain, nonatomic) T1LabeledTextFieldCell *nameTableCell; // @synthesize nameTableCell=_nameTableCell;
@property(retain, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
@property(readonly, nonatomic) TFNTwitterUSPostalAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (BOOL)_fieldsAreValid;
- (void)textDidChange:(id)arg1;
- (void)saveAddress:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
@property(readonly, nonatomic) NSArray *sections;
- (id)initWithAccount:(id)arg1 tableView:(id)arg2;

@end

