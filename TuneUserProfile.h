//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuneModule.h"

@class NSMutableDictionary, NSMutableSet, NSObject;

@interface TuneUserProfile : TuneModule
{
    NSMutableDictionary *_userVariables;
    NSMutableSet *_userCustomVariables;
    NSObject *userVariablesLock;
    NSObject *userCustomVariablesLock;
    NSMutableSet *currentVariations;
    NSObject *currentVariationsLock;
    id <TuneUserProfileDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) id <TuneUserProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)toQueryDictionary;
- (id)toArrayOfDictionaries;
- (void)loadSavedProfile;
- (void)setPreloadData:(id)arg1;
- (id)isTestFlightBuild;
- (void)setIsTestFlightBuild:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)phoneNumberSha256;
- (id)phoneNumberSha1;
- (id)phoneNumberMd5;
- (void)setPhoneNumber:(id)arg1;
- (id)userNameSha256;
- (id)userNameSha1;
- (id)userNameMd5;
- (void)setUserName:(id)arg1;
- (id)userEmailSha256;
- (id)userEmailSha1;
- (id)userEmailMd5;
- (void)setUserEmail:(id)arg1;
- (id)sdkVersion;
- (void)setSDKVersion:(id)arg1;
- (id)minutesFromGMT;
- (void)setMinutesFromGMT:(id)arg1;
- (id)hardwareType;
- (void)setHardwareType:(id)arg1;
- (id)interfaceIdiom;
- (void)setInterfaceIdiom:(id)arg1;
- (id)publisherSub5;
- (void)setPublisherSub5:(id)arg1;
- (id)publisherSub4;
- (void)setPublisherSub4:(id)arg1;
- (id)publisherSub3;
- (void)setPublisherSub3:(id)arg1;
- (id)publisherSub2;
- (void)setPublisherSub2:(id)arg1;
- (id)publisherSub1;
- (void)setPublisherSub1:(id)arg1;
- (id)publisherSubSite;
- (void)setPublisherSubSite:(id)arg1;
- (id)publisherSubPublisherRef;
- (void)setPublisherSubPublisherRef:(id)arg1;
- (id)publisherSubPublisher;
- (void)setPublisherSubPublisher:(id)arg1;
- (id)publisherSubPlacementRef;
- (void)setPublisherSubPlacementRef:(id)arg1;
- (id)publisherSubPlacementName;
- (void)setPublisherSubPlacementName:(id)arg1;
- (id)publisherSubKeywordRef;
- (void)setPublisherSubKeywordRef:(id)arg1;
- (id)publisherSubKeyword;
- (void)setPublisherSubKeyword:(id)arg1;
- (id)publisherSubCampaignRef;
- (void)setPublisherSubCampaignRef:(id)arg1;
- (id)publisherSubCampaignName;
- (void)setPublisherSubCampaignName:(id)arg1;
- (id)publisherSubCampaign;
- (void)setPublisherSubCampaign:(id)arg1;
- (id)publisherSubAdRef;
- (void)setPublisherSubAdRef:(id)arg1;
- (id)publisherSubAdName;
- (void)setPublisherSubAdName:(id)arg1;
- (id)publisherSubAdgroup;
- (void)setPublisherSubAdgroup:(id)arg1;
- (id)publisherSubAd;
- (void)setPublisherSubAd:(id)arg1;
- (id)publisherReferenceId;
- (void)setPublisherReferenceId:(id)arg1;
- (id)publisherId;
- (void)setPublisherId:(id)arg1;
- (id)offerId;
- (void)setOfferId:(id)arg1;
- (id)agencyId;
- (void)setAgencyId:(id)arg1;
- (id)advertiserSubSite;
- (void)setAdvertiserSubSite:(id)arg1;
- (id)advertiserSubPublisher;
- (void)setAdvertiserSubPublisher:(id)arg1;
- (id)advertiserSubKeyword;
- (void)setAdvertiserSubKeyword:(id)arg1;
- (id)advertiserSubCampaign;
- (void)setAdvertiserSubCampaign:(id)arg1;
- (id)advertiserSubAdgroup;
- (void)setAdvertiserSubAdgroup:(id)arg1;
- (id)advertiserSubAd;
- (void)setAdvertiserSubAd:(id)arg1;
- (id)iadConversionDate;
- (void)setIadConversionDate:(id)arg1;
- (id)iadClickDate;
- (void)setIadClickDate:(id)arg1;
- (id)iadImpressionDate;
- (void)setIadImpressionDate:(id)arg1;
- (id)iadAttribution;
- (void)setIadAttribution:(id)arg1;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg1;
- (id)referralSource;
- (void)setReferralSource:(id)arg1;
- (id)referralUrl;
- (void)setReferralUrl:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)osVersion;
- (void)setOsVersion:(id)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (id)mobileNetworkCode;
- (void)setMobileNetworkCode:(id)arg1;
- (id)mobileCountryCodeISO;
- (void)setMobileCountryCodeISO:(id)arg1;
- (id)mobileCountryCode;
- (void)setMobileCountryCode:(id)arg1;
- (id)screenDensity;
- (void)setScreenDensity:(id)arg1;
- (id)screenSize;
- (void)setScreenSize:(id)arg1;
- (id)screenWidth;
- (void)setScreenWidth:(id)arg1;
- (id)screenHeight;
- (void)setScreenHeight:(id)arg1;
- (id)deviceBrand;
- (void)setDeviceBrand:(id)arg1;
- (id)deviceCarrier;
- (void)setDeviceCarrier:(id)arg1;
- (id)deviceCpuSubtype;
- (void)setDeviceCpuSubtype:(id)arg1;
- (id)deviceCpuType;
- (void)setDeviceCpuType:(id)arg1;
- (id)deviceModel;
- (void)setDeviceModel:(id)arg1;
- (id)osType;
- (void)setOsType:(id)arg1;
- (id)payingUser;
- (void)setPayingUser:(id)arg1;
- (id)bluetoothState;
- (void)setBluetoothState:(id)arg1;
- (id)locationAuthorizationStatus;
- (void)setLocationAuthorizationStatus:(id)arg1;
- (id)appAdTracking;
- (void)setAppAdTracking:(id)arg1;
- (id)gender;
- (void)setGender:(id)arg1;
- (id)age;
- (void)setAge:(id)arg1;
- (id)googleUserId;
- (void)setGoogleUserId:(id)arg1;
- (id)twitterUserId;
- (void)setTwitterUserId:(id)arg1;
- (id)facebookCookieId;
- (void)setFacebookCookieId:(id)arg1;
- (id)facebookUserId;
- (void)setFacebookUserId:(id)arg1;
- (id)trackingId;
- (void)setTrackingId:(id)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)trusteTPID;
- (void)setTRUSTeId:(id)arg1;
- (id)packageName;
- (void)setPackageName:(id)arg1;
- (id)jailbroken;
- (void)setJailbroken:(id)arg1;
- (id)currencyCode;
- (void)setCurrencyCode:(id)arg1;
- (id)appleVendorIdentifier;
- (void)setAppleVendorIdentifier:(id)arg1;
- (id)appleAdvertisingTrackingEnabled;
- (void)setAppleAdvertisingTrackingEnabled:(id)arg1;
- (id)appleAdvertisingIdentifier;
- (void)setAppleAdvertisingIdentifier:(id)arg1;
- (id)existingUser;
- (void)setExistingUser:(id)arg1;
- (id)wearable;
- (void)setWearable:(id)arg1;
- (id)appVersionName;
- (void)setAppVersionName:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appBundleId;
- (void)setAppBundleId:(id)arg1;
- (id)conversionKey;
- (void)setConversionKey:(id)arg1;
- (id)advertiserId;
- (void)setAdvertiserId:(id)arg1;
- (id)lastOpenLogId;
- (void)setLastOpenLogId:(id)arg1;
- (id)openLogId;
- (void)setOpenLogId:(id)arg1;
- (id)updateLogId;
- (void)setUpdateLogId:(id)arg1;
- (id)installLogId;
- (void)setInstallLogId:(id)arg1;
- (id)isFirstSession;
- (void)setIsFirstSession:(id)arg1;
- (id)tuneId;
- (void)setTuneId:(id)arg1;
- (id)systemDate;
- (void)setSystemDate:(id)arg1;
- (id)sessionDate;
- (void)setSessionDate:(id)arg1;
- (id)installDate;
- (void)setInstallDate:(id)arg1;
- (id)sessionCount;
- (void)setSessionCount:(id)arg1;
- (id)currentSessionDate;
- (void)setCurrentSessionDate:(id)arg1;
- (id)lastSessionDate;
- (void)setLastSessionDate:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)installReceipt;
- (void)storeProfileVar:(id)arg1;
- (void)storeProfileKey:(id)arg1 value:(id)arg2 type:(int)arg3 hashType:(int)arg4 shouldAutoHash:(_Bool)arg5;
- (void)storeProfileKey:(id)arg1 value:(id)arg2 type:(int)arg3;
- (void)storeProfileKey:(id)arg1 value:(id)arg2 hashType:(int)arg3;
- (void)storeProfileKey:(id)arg1 value:(id)arg2;
- (id)getProfileVariables;
- (id)getProfileVariable:(id)arg1;
- (id)getProfileValue:(id)arg1;
- (id)getCustomProfileVariables;
- (void)addCustomProfileVariable:(id)arg1;
- (void)clearCustomProfile;
- (void)clearCustomVariables:(id)arg1;
- (void)clearVariable:(id)arg1;
- (id)getCustomProfileVariable:(id)arg1;
- (id)getCustomProfileGeolocation:(id)arg1;
- (id)getCustomProfileDateTime:(id)arg1;
- (id)getCustomProfileNumber:(id)arg1;
- (id)getCustomProfileString:(id)arg1;
- (void)setCustomVariable:(id)arg1 value:(id)arg2 type:(int)arg3;
- (void)setVersionValue:(id)arg1 forVariable:(id)arg2;
- (void)setGeolocationValue:(id)arg1 forVariable:(id)arg2;
- (void)setNumberValue:(id)arg1 forVariable:(id)arg2;
- (void)setDateTimeValue:(id)arg1 forVariable:(id)arg2;
- (void)setBooleanValue:(id)arg1 forVariable:(id)arg2;
- (void)setStringValue:(id)arg1 forVariable:(id)arg2;
- (void)registerVariable:(id)arg1 value:(id)arg2 type:(int)arg3 hashed:(_Bool)arg4;
- (void)registerVersion:(id)arg1 withDefault:(id)arg2;
- (void)registerGeolocation:(id)arg1 withDefault:(id)arg2;
- (void)registerNumber:(id)arg1 withDefault:(id)arg2;
- (void)registerDateTime:(id)arg1 withDefault:(id)arg2;
- (void)registerBoolean:(id)arg1 withDefault:(id)arg2;
- (void)registerString:(id)arg1 withDefault:(id)arg2 hashed:(_Bool)arg3;
- (void)registerString:(id)arg1 withDefault:(id)arg2;
- (void)registerVersion:(id)arg1;
- (void)registerGeolocation:(id)arg1;
- (void)registerNumber:(id)arg1;
- (void)registerDateTime:(id)arg1;
- (void)registerBoolean:(id)arg1;
- (void)registerString:(id)arg1 hashed:(_Bool)arg2;
- (void)registerString:(id)arg1;
- (void)setHardwareSpecs;
- (void)setReceiptData;
- (void)setAppParams;
- (id)deviceId;
- (id)hashedAppId;
- (id)pushEnabled;
- (void)setPushEnabled:(id)arg1;
- (void)checkIfPushIsEnabled;
- (_Bool)tooYoungForTargetedAds;
- (id)deviceToken;
- (void)setDeviceToken:(id)arg1;
- (void)clearIFA;
- (void)updateIFA;
- (void)loadFacebookCookieId;
- (void)handleRegisteredForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)registerProfileVariable:(id)arg1 withValue:(id)arg2;
- (void)handleAddSessionProfileVariable:(id)arg1;
- (void)endSession:(id)arg1;
- (void)initiateSession:(id)arg1;
- (void)registerSkyhooks;
- (void)bringDown;
- (void)bringUp;
- (id)initWithTuneManager:(id)arg1;

@end

