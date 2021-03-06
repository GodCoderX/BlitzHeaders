//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Tune : NSObject
{
}

+ (void)applicationDidOpenURL:(id)arg1 sourceApplication:(id)arg2;
+ (void)startAppToAppMeasurement:(id)arg1 advertiserId:(id)arg2 offerId:(id)arg3 publisherId:(id)arg4 redirect:(_Bool)arg5;
+ (void)setRedirectUrl:(id)arg1;
+ (void)setUseCookieMeasurement:(_Bool)arg1;
+ (void)waitUntilAllOperationsAreFinishedOnQueue;
+ (void)measureEvent:(id)arg1;
+ (void)measureEventId:(long long)arg1;
+ (void)measureEventName:(id)arg1;
+ (void)measureSession;
+ (_Bool)isUserInAnySegmentIds:(id)arg1;
+ (_Bool)isUserInSegmentId:(id)arg1;
+ (void)onFirstPlaylistDownloaded:(CDUnknownBlockType)arg1 withTimeout:(double)arg2;
+ (void)onFirstPlaylistDownloaded:(CDUnknownBlockType)arg1;
+ (id)getInAppMessageExperimentDetails;
+ (id)getPowerHookVariableExperimentDetails;
+ (_Bool)application:(id)arg1 tuneContinueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
+ (void)application:(id)arg1 tuneHandleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)application:(id)arg1 tuneHandleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)application:(id)arg1 tuneDidReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)application:(id)arg1 tuneDidFailToRegisterForRemoteNotificationsWithError:(id)arg2;
+ (void)application:(id)arg1 tuneDidRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
+ (id)getTunePushInfoForSession;
+ (_Bool)didSessionStartFromTunePush;
+ (void)registerDeepActionWithId:(id)arg1 friendlyName:(id)arg2 description:(id)arg3 data:(id)arg4 approvedValues:(id)arg5 andAction:(CDUnknownBlockType)arg6;
+ (void)registerDeepActionWithId:(id)arg1 friendlyName:(id)arg2 description:(id)arg3 data:(id)arg4 andAction:(CDUnknownBlockType)arg5;
+ (void)registerDeepActionWithId:(id)arg1 friendlyName:(id)arg2 data:(id)arg3 andAction:(CDUnknownBlockType)arg4;
+ (void)onPowerHooksChanged:(CDUnknownBlockType)arg1;
+ (void)setValueForHookById:(id)arg1 value:(id)arg2;
+ (id)getValueForHookById:(id)arg1;
+ (void)registerHookWithId:(id)arg1 friendlyName:(id)arg2 defaultValue:(id)arg3 description:(id)arg4 approvedValues:(id)arg5;
+ (void)registerHookWithId:(id)arg1 friendlyName:(id)arg2 defaultValue:(id)arg3 description:(id)arg4;
+ (void)registerHookWithId:(id)arg1 friendlyName:(id)arg2 defaultValue:(id)arg3;
+ (id)getPushToken;
+ (_Bool)isPayingUser;
+ (id)openLogId;
+ (id)tuneId;
+ (id)appleAdvertisingIdentifier;
+ (void)clearAllCustomProfileVariables;
+ (void)clearCustomProfileVariable:(id)arg1;
+ (id)getCustomProfileGeolocation:(id)arg1;
+ (id)getCustomProfileNumber:(id)arg1;
+ (id)getCustomProfileDateTime:(id)arg1;
+ (id)getCustomProfileString:(id)arg1;
+ (void)setCustomProfileVersionValue:(id)arg1 forVariable:(id)arg2;
+ (void)setCustomProfileGeolocationValue:(id)arg1 forVariable:(id)arg2;
+ (void)setCustomProfileNumberValue:(id)arg1 forVariable:(id)arg2;
+ (void)setCustomProfileDateTimeValue:(id)arg1 forVariable:(id)arg2;
+ (void)setCustomProfileBooleanValue:(id)arg1 forVariable:(id)arg2;
+ (void)setCustomProfileStringValue:(id)arg1 forVariable:(id)arg2;
+ (void)registerCustomProfileVersion:(id)arg1 withDefault:(id)arg2;
+ (void)registerCustomProfileGeolocation:(id)arg1 withDefault:(id)arg2;
+ (void)registerCustomProfileNumber:(id)arg1 withDefault:(id)arg2;
+ (void)registerCustomProfileDateTime:(id)arg1 withDefault:(id)arg2;
+ (void)registerCustomProfileBoolean:(id)arg1 withDefault:(id)arg2;
+ (void)registerCustomProfileString:(id)arg1 withDefault:(id)arg2 hashed:(_Bool)arg3;
+ (void)registerCustomProfileString:(id)arg1 withDefault:(id)arg2;
+ (void)registerCustomProfileVersion:(id)arg1;
+ (void)registerCustomProfileGeolocation:(id)arg1;
+ (void)registerCustomProfileNumber:(id)arg1;
+ (void)registerCustomProfileDateTime:(id)arg1;
+ (void)registerCustomProfileBoolean:(id)arg1;
+ (void)registerCustomProfileString:(id)arg1 hashed:(_Bool)arg2;
+ (void)registerCustomProfileString:(id)arg1;
+ (void)setPreloadData:(id)arg1;
+ (void)setPayingUser:(_Bool)arg1;
+ (void)setBluetoothState:(long long)arg1;
+ (void)setLocationAuthorizationStatus:(long long)arg1;
+ (void)setPluginName:(id)arg1;
+ (void)setAppAdMeasurement:(_Bool)arg1;
+ (void)setLocation:(id)arg1;
+ (void)setGender:(long long)arg1;
+ (void)setAge:(long long)arg1;
+ (void)setGoogleUserId:(id)arg1;
+ (void)setTwitterUserId:(id)arg1;
+ (void)setFacebookUserId:(id)arg1;
+ (void)setPhoneNumber:(id)arg1;
+ (void)setUserName:(id)arg1;
+ (void)setUserId:(id)arg1;
+ (void)setUserEmail:(id)arg1;
+ (void)setTRUSTeId:(id)arg1;
+ (void)setShouldAutoGenerateAppleVendorIdentifier:(_Bool)arg1;
+ (void)setShouldAutoCollectAppleAdvertisingIdentifier:(_Bool)arg1;
+ (void)setShouldAutoCollectDeviceLocation:(_Bool)arg1;
+ (void)setShouldAutoDetectJailbroken:(_Bool)arg1;
+ (void)setJailbroken:(_Bool)arg1;
+ (void)setAppleVendorIdentifier:(id)arg1;
+ (void)setAppleAdvertisingIdentifier:(id)arg1 advertisingTrackingEnabled:(_Bool)arg2;
+ (void)setPackageName:(id)arg1;
+ (void)setCurrencyCode:(id)arg1;
+ (void)setExistingUser:(_Bool)arg1;
+ (void)setFacebookEventLogging:(_Bool)arg1 limitEventAndDataUsage:(_Bool)arg2;
+ (void)automateIapEventMeasurement:(_Bool)arg1;
+ (void)checkForDeferredDeeplink:(id)arg1;
+ (void)setDelegate:(id)arg1;
+ (void)setDebugMode:(_Bool)arg1;
+ (void)initializeWithTuneAdvertiserId:(id)arg1 tuneConversionKey:(id)arg2 tunePackageName:(id)arg3 wearable:(_Bool)arg4 configuration:(id)arg5;
+ (void)initializeWithTuneAdvertiserId:(id)arg1 tuneConversionKey:(id)arg2 tunePackageName:(id)arg3 wearable:(_Bool)arg4;
+ (void)initializeWithTuneAdvertiserId:(id)arg1 tuneConversionKey:(id)arg2;
+ (id)sharedManager;
+ (void)initialize;

@end

