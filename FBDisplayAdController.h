/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import </libobjc.A.h>
#import "FBAdViewabilityValidatorDelegate.h"
#import "FBDisplayAdAdapterDelegate.h"
#import "FBAdProviderDelegate.h"

@class FBAdViewabilityValidator, FBAdProvider, FBAdTimer, FBAdCandidate, NSArray, FBAdPlacementDefinition, FBAdEnvironmentData, NSString, FBDisplayAdAdapter;
@protocol FBDisplayAdControllerDelegate;

@interface FBDisplayAdController : NSObject <FBDisplayAdAdapterDelegate, FBAdProviderDelegate, FBAdViewabilityValidatorDelegate> {
	BOOL _flexibleAdSize;
	BOOL _initialized;
	BOOL _loaded;
	BOOL _started;
	BOOL _adapterHadImpression;
	BOOL _controllerHadImpression;
	id<FBDisplayAdControllerDelegate> _delegate;
	FBDisplayAdAdapter* _currentAdapter;
	FBAdProvider* _adProvider;
	FBAdEnvironmentData* _environment;
	int _currentAdMinViewabilityPercentage;
	FBAdViewabilityValidator* _currentViewabilityValidator;
	FBAdPlacementDefinition* _currentPlacementDefinition;
	FBAdCandidate* _currentAdCandidate;
	FBDisplayAdAdapter* _nextAdapter;
	FBAdTimer* _nextAdapterTimeoutTimer;
	NSString* _nextAdapterName;
	NSArray* _nextAdsData;
	int _nextAdsDataCurrentPos;
	int _nextAdMinViewabilityPercentage;
	int _placementType;
	NSString* _placementID;
	int _refreshInterval;
	FBAdTimer* _refreshTimer;
	int _retryCount;
	FBAdSize _adSizeType;
	CGSize _actualAdSize;
	double _adapterLoadTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) double adapterLoadTime;
@property(assign, nonatomic) int retryCount;
@property(retain, nonatomic) FBAdTimer* refreshTimer;
@property(assign, nonatomic) int refreshInterval;
@property(copy, nonatomic) NSString* placementID;
@property(assign, nonatomic) int placementType;
@property(assign, nonatomic) BOOL controllerHadImpression;
@property(assign, nonatomic) BOOL adapterHadImpression;
@property(assign, nonatomic) BOOL started;
@property(assign, nonatomic) BOOL loaded;
@property(assign, nonatomic) BOOL initialized;
@property(assign, nonatomic, getter=isFlexibleAdSize) BOOL flexibleAdSize;
@property(assign, nonatomic) CGSize actualAdSize;
@property(assign, nonatomic) FBAdSize adSizeType;
@property(assign, nonatomic) int nextAdMinViewabilityPercentage;
@property(assign, nonatomic) int nextAdsDataCurrentPos;
@property(retain, nonatomic) NSArray* nextAdsData;
@property(retain, nonatomic) NSString* nextAdapterName;
@property(retain, nonatomic) FBAdTimer* nextAdapterTimeoutTimer;
@property(retain, nonatomic) FBDisplayAdAdapter* nextAdapter;
@property(retain, nonatomic) FBAdCandidate* currentAdCandidate;
@property(retain, nonatomic) FBAdPlacementDefinition* currentPlacementDefinition;
@property(retain, nonatomic) FBAdViewabilityValidator* currentViewabilityValidator;
@property(assign, nonatomic) int currentAdMinViewabilityPercentage;
@property(retain, nonatomic) FBAdEnvironmentData* environment;
@property(retain, nonatomic) FBAdProvider* adProvider;
@property(retain, nonatomic) FBDisplayAdAdapter* currentAdapter;
@property(readonly, assign, nonatomic) int minViewabilityPercentage;
@property(assign, nonatomic) __weak id<FBDisplayAdControllerDelegate> delegate;
-(void).cxx_destruct;
-(BOOL)viewDidAppearOnScreen;
-(BOOL)tryNextAdFromList;
-(void)onAdRequestSuccess:(id)success;
-(void)onAdRequestError:(id)error;
-(void)invalidateCurrentAd;
-(void)invalidateInProgressAd;
-(void)setInitialAdViewSize:(FBAdSize)size;
-(void)loadAd;
-(void)initialLoadAd;
-(void)stopObservingNotifications;
-(void)onApplicationForegrounded;
-(void)onApplicationBackgrounded;
-(void)startObservingNotifications;
-(void)scheduleTimeout:(int)timeout;
-(void)invalidateTimeoutTimer;
-(void)updateRefreshInterval:(int)interval;
-(void)scheduleRefreshIn:(int)anIn;
-(void)scheduleRefresh;
-(void)invalidateRefreshTimer;
-(void)adapter:(id)adapter didFailWithError:(id)error;
-(void)adapterDidLoad:(id)adapter;
-(void)disableViewabilityValidator;
-(void)ensureViewabilityValidator;
-(void)adapterWillLogImpression:(id)adapter;
-(void)adapterDidUnload:(id)adapter;
-(void)adapterWillUnload:(id)adapter;
-(void)adapterDidFinishHandlingClick:(id)adapter;
-(void)adapterDidClick:(id)adapter url:(id)url playerHandles:(BOOL)handles;
-(void)notifyAdUserClose;
-(void)notifyAdClickThruWithURL:(id)url playerHandles:(BOOL)handles;
-(void)notifyAdError:(id)error;
-(void)notifyAdStopped;
-(void)notifyAdImpression;
-(void)notifyAdViewPresented;
-(void)notifyAdLoaded;
-(void)logImpressionFromSource:(int)source;
-(void)disableAutoRefresh;
-(void)retry;
-(void)refresh;
-(BOOL)startAdFromRootViewController:(id)rootViewController;
-(BOOL)startAd;
-(void)checkInitialization;
-(void)dealloc;
-(void)loadAdWithPlacementId:(id)placementId withPlacementType:(int)placementType withAdSize:(FBAdSize)adSize withAdProvider:(id)adProvider;
-(void)loadAdWithPlacementId:(id)placementId withPlacementType:(int)placementType withAdSize:(FBAdSize)adSize;
-(void)loadAdWithPlacementId:(id)placementId withPlacementType:(int)placementType;
@end
