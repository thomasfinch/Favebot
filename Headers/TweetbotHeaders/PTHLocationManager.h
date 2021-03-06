/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocationManager, CLLocation;

@interface PTHLocationManager : XXUnknownSuperclass <CLLocationManagerDelegate> {
	CLLocationManager* _locationManager;
	id _block;
	unsigned _locationUpdates;
	double _cachedInterval;
	int _searchType;
	unsigned _maxLocationUpdates;
	CLLocation* _location;
	double _desiredAccuracy;
	double _searchTimeout;
}
@property(retain, nonatomic) CLLocation* location;
@property(readonly, assign, nonatomic, getter=isBusy) BOOL busy;
@property(assign, nonatomic) unsigned maxLocationUpdates;
@property(assign, nonatomic) double searchTimeout;
@property(assign, nonatomic) double desiredAccuracy;
@property(assign, nonatomic) int searchType;
+(id)busyError;
-(void).cxx_destruct;
-(void)dealloc;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
-(void)_foundBestLocation;
-(void)cancel;
-(void)search:(id)search;
-(id)init;
@end

