//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNItemsDataViewController.h"

@class T1AddUSPostalAddressController, TFNTwitterAccount, TFNTwitterUSPostalAddress, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface T1USPostalAddressManagementViewController : TFNItemsDataViewController
{
    TFNTwitterAccount *_account;
    BOOL _showNewAddressSection;
    BOOL _errorFetching;
    T1AddUSPostalAddressController *_addAddressController;
    CDUnknownBlockType _responseCallback;
    UIBarButtonItem *_cancelButton;
    TFNTwitterUSPostalAddress *_chosenAddress;
}

@property(readonly, nonatomic) TFNTwitterUSPostalAddress *chosenAddress; // @synthesize chosenAddress=_chosenAddress;
@property(nonatomic) BOOL errorFetching; // @synthesize errorFetching=_errorFetching;
@property(nonatomic) BOOL showNewAddressSection; // @synthesize showNewAddressSection=_showNewAddressSection;
@property(readonly, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
@property(readonly, nonatomic) T1AddUSPostalAddressController *addAddressController; // @synthesize addAddressController=_addAddressController;
- (void).cxx_destruct;
- (void)_updateSections;
- (void)done;
- (void)cancel:(id)arg1;
- (void)addAddress:(id)arg1;
- (void)selectAddress:(id)arg1;
- (void)profilesDidUpdate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

