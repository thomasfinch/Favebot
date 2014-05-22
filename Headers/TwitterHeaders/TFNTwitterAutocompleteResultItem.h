//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFNAutocompleteResultItem.h"

@class NSString, TFNTwitterTypeaheadUser;

@interface TFNTwitterAutocompleteResultItem : NSObject <TFNAutocompleteResultItem>
{
    NSString *autocompleteDisplayText;
    NSString *autocompleteSubtext;
    NSString *autocompleteImageName;
    NSString *autocompleteImageURL;
    id userInfo;
    int autocompleteAction;
    int autocompleteType;
    int priority;
    NSString *_derivedSearchableText;
    BOOL isNotSelectable;
    BOOL _isPrefetchUser;
    NSString *autocompleteDisplaySubtext;
    NSString *autocompleteReplacementText;
    NSString *itemID;
    TFNTwitterTypeaheadUser *typeaheadUser;
    NSString *notSelectableText;
}

@property(nonatomic) BOOL isPrefetchUser; // @synthesize isPrefetchUser=_isPrefetchUser;
@property(copy, nonatomic) NSString *notSelectableText; // @synthesize notSelectableText;
@property(nonatomic) BOOL isNotSelectable; // @synthesize isNotSelectable;
@property(retain, nonatomic) TFNTwitterTypeaheadUser *typeaheadUser; // @synthesize typeaheadUser;
@property(nonatomic) int priority; // @synthesize priority;
@property(nonatomic) int autocompleteType; // @synthesize autocompleteType;
@property(nonatomic) int autocompleteAction; // @synthesize autocompleteAction;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
@property(copy, nonatomic) NSString *autocompleteImageURL; // @synthesize autocompleteImageURL;
@property(copy, nonatomic) NSString *autocompleteImageName; // @synthesize autocompleteImageName;
@property(copy, nonatomic) NSString *autocompleteReplacementText; // @synthesize autocompleteReplacementText;
@property(copy, nonatomic) NSString *autocompleteDisplaySubtext; // @synthesize autocompleteDisplaySubtext;
@property(copy, nonatomic) NSString *autocompleteDisplayText; // @synthesize autocompleteDisplayText;
- (void).cxx_destruct;
- (BOOL)doesNotContainResult;
- (BOOL)verified;
- (id)searchableSortableText;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

