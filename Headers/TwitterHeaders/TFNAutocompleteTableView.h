//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, TFNTwitterTailfeatherInstance;

@interface TFNAutocompleteTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *autocompleteItems;
    id <TFNAutocompleteTableViewDelegate> autocompleteDelegate;
    int _tailfeatherImpressionRowLimit;
    TFNTwitterTailfeatherInstance *_tailfeatherInstance;
}

@property(retain, nonatomic) TFNTwitterTailfeatherInstance *tailfeatherInstance; // @synthesize tailfeatherInstance=_tailfeatherInstance;
@property(nonatomic) __weak id <TFNAutocompleteTableViewDelegate> autocompleteDelegate; // @synthesize autocompleteDelegate;
@property(copy, nonatomic) NSArray *autocompleteItems; // @synthesize autocompleteItems;
- (void).cxx_destruct;
- (void)_scribeTailfeatherImpressionWithIndexPath:(id)arg1 item:(id)arg2 account:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end
