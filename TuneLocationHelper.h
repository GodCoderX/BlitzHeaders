/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface TuneLocationHelper : NSObject {
}
+(void)startLocationUpdates;
+(BOOL)createLocationManager;
+(BOOL)isLocationEnabled;
+(id)getOrRequestDeviceLocation;
+(void)initialize;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)startLocationUpdates;
@end
