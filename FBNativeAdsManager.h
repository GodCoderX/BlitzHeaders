/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "FBNativeAdDelegate.h"
#import "FBAdProviderDelegate.h"

@class NSArray, NSString, NSMutableSet, FBAdTimer, FBAdProvider;
@protocol FBNativeAdsManagerDelegate;

@interface FBNativeAdsManager : NSObject <FBAdProviderDelegate, FBNativeAdDelegate> {
	BOOL _valid;
	BOOL _refreshDisabled;
	BOOL _observingNotificaions;
	id<FBNativeAdsManagerDelegate> _delegate;
	int _mediaCachePolicy;
	NSString* _placementID;
	FBAdProvider* _adProvider;
	int _refreshInterval;
	FBAdTimer* _refreshTimer;
	unsigned _version;
	NSArray* _nativeAds;
	NSMutableSet* _nativeAdsLoaded;
	unsigned _numAdsRequested;
	int _nativeAdsFailedCount;
	NSArray* _currentNativeAds;
	unsigned _currentNativeAdPos;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned currentNativeAdPos;
@property(retain, nonatomic) NSArray* currentNativeAds;
@property(assign, nonatomic) int nativeAdsFailedCount;
@property(assign, nonatomic) unsigned numAdsRequested;
@property(retain, nonatomic) NSMutableSet* nativeAdsLoaded;
@property(retain, nonatomic) NSArray* nativeAds;
@property(assign, nonatomic) unsigned version;
@property(assign, nonatomic) BOOL observingNotificaions;
@property(retain, nonatomic) FBAdTimer* refreshTimer;
@property(assign, nonatomic, getter=isRefreshDisabled) BOOL refreshDisabled;
@property(assign, nonatomic) int refreshInterval;
@property(retain, nonatomic) FBAdProvider* adProvider;
@property(retain, nonatomic) NSString* placementID;
@property(assign, nonatomic, getter=isValid) BOOL valid;
@property(readonly, assign, nonatomic) unsigned uniqueNativeAdCount;
@property(assign, nonatomic) int mediaCachePolicy;
@property(assign, nonatomic) __weak id<FBNativeAdsManagerDelegate> delegate;
-(void).cxx_destruct;
-(void)nativeAd:(id)ad didFailWithError:(id)error;
-(void)nativeAdDidLoad:(id)nativeAd;
-(void)onAdSourceRequestError:(id)error;
-(void)onAdRequestError:(id)error;
-(void)onAdRequestSuccess:(id)success;
-(void)imagesAllCached:(id)cached;
-(void)adsAllLoaded;
-(void)stopObservingNotifications;
-(void)onApplicationForegrounded;
-(void)onApplicationBackgrounded;
-(void)startObservingNotifications;
-(void)updateRefreshInterval:(int)interval;
-(void)invalidateRefresh;
-(void)scheduleRefresh;
-(void)disableAutoRefresh;
-(id)nextNativeAd;
-(void)dealloc;
-(void)cancel;
-(void)loadAds;
-(id)initWithPlacementID:(id)placementID forNumAdsRequested:(unsigned)numAdsRequested;
-(id)init;
@end
