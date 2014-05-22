/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumberFormatter, NSString;

@interface PTHTimeDifferenceFormatter : XXUnknownSuperclass {
	NSNumberFormatter* _numberFormatter;
	NSString* _oneSecondLong;
	NSString* _secondsLong;
	NSString* _oneMinuteLong;
	NSString* _minutesLong;
	NSString* _oneHourLong;
	NSString* _hoursLong;
	NSString* _oneDayLong;
	NSString* _daysLong;
	NSString* _overOneYearLong;
	NSString* _secondsShort;
	NSString* _minutesShort;
	NSString* _hoursShort;
	NSString* _daysShort;
	NSString* _daysFormattedShort;
	BOOL _longFormat;
	BOOL _futureDate;
	NSString* _nowString;
}
@property(assign, nonatomic, getter=isFutureDate) BOOL futureDate;
@property(copy, nonatomic) NSString* nowString;
@property(assign, nonatomic) BOOL longFormat;
-(void).cxx_destruct;
-(id)stringForObjectValue:(id)objectValue;
-(id)init;
@end

