//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TuneDeviceUtils : NSObject
{
}

+ (_Bool)currentDeviceIsTestFlight;
+ (_Bool)currentDeviceIsSimulator;
+ (_Bool)currentDeviceIsIphoneSimulator;
+ (_Bool)currentDeviceIsIpadSimulator;
+ (id)artisanIOSVersionString;
+ (id)artisanInterfaceIdiomString;
+ (long long)artisanInterfaceIdiom;
+ (id)artisanHardwareIdentifier;
+ (_Bool)hasBackgroundNotificationEnabled;

@end
