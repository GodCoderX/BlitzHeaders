/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface Tune : NSObject {
}
+(void)applicationDidOpenURL:(id)application sourceApplication:(id)application2;
+(void)startAppToAppMeasurement:(id)appMeasurement advertiserId:(id)anId offerId:(id)anId3 publisherId:(id)anId4 redirect:(BOOL)redirect;
+(void)setRedirectUrl:(id)url;
+(void)setUseCookieMeasurement:(BOOL)measurement;
+(void)measureActionWithEventId:(int)eventId eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code transactionState:(int)state receipt:(id)receipt;
+(void)measureActionWithEventId:(int)eventId eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code transactionState:(int)state;
+(void)measureActionWithEventId:(int)eventId eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureActionWithEventId:(int)eventId eventItems:(id)items revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureActionWithEventId:(int)eventId eventItems:(id)items referenceId:(id)anId;
+(void)measureActionWithEventId:(int)eventId eventItems:(id)items;
+(void)measureActionWithEventId:(int)eventId referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureActionWithEventId:(int)eventId revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureActionWithEventId:(int)eventId referenceId:(id)anId;
+(void)measureActionWithEventId:(int)eventId;
+(void)measureAction:(id)action eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code transactionState:(int)state receipt:(id)receipt;
+(void)measureAction:(id)action eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code transactionState:(int)state;
+(void)measureAction:(id)action eventItems:(id)items referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureAction:(id)action eventItems:(id)items revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureAction:(id)action eventItems:(id)items referenceId:(id)anId;
+(void)measureAction:(id)action eventItems:(id)items;
+(void)measureAction:(id)action referenceId:(id)anId revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureAction:(id)action revenueAmount:(float)amount currencyCode:(id)code;
+(void)measureAction:(id)action referenceId:(id)anId;
+(void)measureAction:(id)action;
+(void)measureEvent:(id)event;
+(void)measureEventId:(int)anId;
+(void)measureEventName:(id)name;
+(void)measureSession;
+(void)removeiAd;
+(void)displayiAdInView:(id)view;
+(BOOL)isPayingUser;
+(id)openLogId;
+(id)matId;
+(void)setPreloadData:(id)data;
+(void)setPayingUser:(BOOL)user;
+(void)setBluetoothState:(int)state;
+(void)setLocationAuthorizationStatus:(int)status;
+(void)setPluginName:(id)name;
+(void)setAppAdMeasurement:(BOOL)measurement;
+(void)setLocation:(id)location;
+(void)setGender:(int)gender;
+(void)setAge:(int)age;
+(void)setGoogleUserId:(id)anId;
+(void)setTwitterUserId:(id)anId;
+(void)setFacebookUserId:(id)anId;
+(void)setPhoneNumber:(id)number;
+(void)setUserName:(id)name;
+(void)setUserId:(id)anId;
+(void)setUserEmail:(id)email;
+(void)setTRUSTeId:(id)anId;
+(void)setSiteId:(id)anId;
+(void)setShouldAutoGenerateAppleVendorIdentifier:(BOOL)autoGenerateAppleVendorIdentifier;
+(void)setShouldAutoCollectAppleAdvertisingIdentifier:(BOOL)autoCollectAppleAdvertisingIdentifier;
+(void)setShouldAutoCollectDeviceLocation:(BOOL)autoCollectDeviceLocation;
+(void)setShouldAutoDetectJailbroken:(BOOL)autoDetectJailbroken;
+(void)setPackageName:(id)name;
+(void)setJailbroken:(BOOL)jailbroken;
+(void)setCurrencyCode:(id)code;
+(void)setAppleVendorIdentifier:(id)identifier;
+(void)setAppleAdvertisingIdentifier:(id)identifier advertisingTrackingEnabled:(BOOL)enabled;
+(void)setExistingUser:(BOOL)user;
+(void)setFacebookEventLogging:(BOOL)logging limitEventAndDataUsage:(BOOL)usage;
+(void)automateIapEventMeasurement:(BOOL)measurement;
+(void)checkForDeferredDeeplink:(id)deferredDeeplink;
+(void)setDelegate:(id)delegate;
+(void)setAllowDuplicateRequests:(BOOL)requests;
+(void)setDebugMode:(BOOL)mode;
+(void)initializeWithTuneAdvertiserId:(id)tuneAdvertiserId tuneConversionKey:(id)key tunePackageName:(id)name wearable:(BOOL)wearable;
+(void)initializeWithTuneAdvertiserId:(id)tuneAdvertiserId tuneConversionKey:(id)key;
+(id)sharedManager;
+(void)initialize;
@end

