//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFNStaticTableViewElement.h"

@class NSMutableArray, NSString, TFNStaticTableViewExpandDisclosureElement;

@interface TFNStaticTableViewSectionElement : TFNStaticTableViewElement
{
    NSMutableArray *elements;
    NSString *footerText;
    BOOL collapsed;
    TFNStaticTableViewExpandDisclosureElement *collapsedDisclosureElement;
}

@property(retain, nonatomic) TFNStaticTableViewExpandDisclosureElement *collapsedDisclosureElement; // @synthesize collapsedDisclosureElement;
@property(nonatomic) BOOL collapsed; // @synthesize collapsed;
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText;
- (void).cxx_destruct;
- (void)collapseSection:(id)arg1;
- (void)expandSection:(id)arg1;
- (void)removeAllElements;
- (id)elements;
- (int)replaceElement:(id)arg1 withElement:(id)arg2;
- (void)addElement:(id)arg1;

@end

