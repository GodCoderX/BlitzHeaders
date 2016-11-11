/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SKStoreProductViewControllerDelegate.h"
#import "wotblitz-Structs.h"
#import "TuneAdView.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class TuneAdMetadata, NSTimer, NSString;

@interface TuneBanner : TuneAdView <UIWebViewDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate> {
	BOOL shouldDisplayAd;
	BOOL appActive;
	BOOL appWasActive;
	NSTimer* bannerTimer;
	BOOL firstLoad;
	BOOL timerStarted;
	BOOL bannerVisible;
	TuneAdMetadata* _metadata;
	NSString* _placement;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* placement;
@property(retain, nonatomic) TuneAdMetadata* metadata;
+(id)adViewWithDelegate:(id)delegate orientations:(unsigned)orientations;
+(id)adViewWithDelegate:(id)delegate;
-(void).cxx_destruct;
-(void)productViewControllerDidFinish:(id)productViewController;
-(void)bannerTimerFired;
-(void)showInAppStoreForAppId:(id)appId campaignToken:(id)token affiliateToken:(id)token3 requestUrl:(id)url;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webViewDidFinishLoad:(id)webView;
-(void)handleAppWillResignActive:(id)handleApp;
-(void)handleAppBecameActive:(id)active;
-(void)handleNetworkChange:(id)change;
-(void)preloadAd:(id)ad;
-(void)getNextAd;
-(void)handleDisplayAd;
-(void)reset;
-(void)showForPlacement:(id)placement adMetadata:(id)metadata;
-(void)showForPlacement:(id)placement;
-(void)displayAd;
-(id)initWithDelegate:(id)delegate orientations:(unsigned)orientations;
@end
