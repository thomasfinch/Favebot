//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "T1TypeaheadTableViewController.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface T1DirectMessagePeopleTypeaheadViewController : T1TypeaheadTableViewController
{
    BOOL _requireCanDM;
    NSString *_typeaheadString;
    NSMutableDictionary *_resultsCache;
}

@property(retain, nonatomic) NSMutableDictionary *resultsCache; // @synthesize resultsCache=_resultsCache;
@property(nonatomic) BOOL requireCanDM; // @synthesize requireCanDM=_requireCanDM;
- (id)typeaheadString;
- (void).cxx_destruct;
- (void)_didSelectUsernameItem;
- (void)_updateSections;
- (id)_visibleResultsForTypeaheadResults:(id)arg1 prefetchResults:(id)arg2;
- (void)setTypeaheadString:(id)arg1;
- (id)init;

@end

