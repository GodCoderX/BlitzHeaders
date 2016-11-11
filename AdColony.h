/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface AdColony : NSObject {
}
+(void)setOption:(id)option value:(BOOL)value;
+(void)notifyIAPComplete:(id)complete productID:(id)anId quantity:(int)quantity price:(id)price currencyCode:(id)code;
+(int)getVideoCreditBalance:(id)balance;
+(int)getVideosPerReward:(id)reward;
+(int)getVirtualCurrencyRewardsAvailableTodayForZone:(id)zone;
+(BOOL)isVirtualCurrencyRewardAvailableForZone:(id)zone;
+(int)getVirtualCurrencyRewardAmountForZone:(id)zone;
+(id)getVirtualCurrencyNameForZone:(id)zone;
+(unsigned)zoneStatusForZone:(id)zone;
+(void)cancelAd;
+(void)turnAllAdsOff;
+(BOOL)videoAdCurrentlyRunning;
+(BOOL)didVideoFinishLoadingForZone:(id)zone;
+(id)getZone:(id)zone;
+(id)getNativeAdForZone:(id)zone presentingViewController:(id)controller;
+(void)playVideoAdForZone:(id)zone withDelegate:(id)delegate withV4VCPrePopup:(BOOL)v4VCPrePopup andV4VCPostPopup:(BOOL)popup;
+(void)playVideoAdForZone:(id)zone withDelegate:(id)delegate;
+(void)configureWithAppID:(id)appID zoneIDs:(id)ids delegate:(id)delegate logging:(BOOL)logging;
+(id)getVendorIdentifier;
+(id)getAdvertisingIdentifier;
+(id)getODIN1;
+(id)getUniqueDeviceID;
+(id)getOpenUDID;
+(id)getCustomID;
+(void)setCustomID:(id)anId;
+(void)userInterestedIn:(id)anIn;
+(void)setUserMetadata:(id)metadata withValue:(id)value;
@end

