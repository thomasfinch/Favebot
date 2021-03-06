//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFNTwitterTypeaheadUser;

@protocol TFNAutocompleteResultItem <NSObject>
@property(copy, nonatomic) NSString *notSelectableText;
@property(nonatomic) BOOL isNotSelectable;
@property(retain, nonatomic) TFNTwitterTypeaheadUser *typeaheadUser;
@property(nonatomic) BOOL isPrefetchUser;
@property(nonatomic) int priority;
@property(nonatomic) int autocompleteType;
@property(nonatomic) int autocompleteAction;
@property(copy, nonatomic) NSString *itemID;
@property(retain, nonatomic) id userInfo;
@property(copy, nonatomic) NSString *autocompleteImageURL;
@property(copy, nonatomic) NSString *autocompleteImageName;
@property(copy, nonatomic) NSString *autocompleteReplacementText;
@property(copy, nonatomic) NSString *autocompleteDisplaySubtext;
@property(copy, nonatomic) NSString *autocompleteDisplayText;
- (NSString *)searchableSortableText;
- (BOOL)verified;
- (BOOL)doesNotContainResult;
@end

