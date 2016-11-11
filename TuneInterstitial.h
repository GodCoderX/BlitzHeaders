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

@class TuneAdInterstitialVC, NSString, UIButton;

@interface TuneInterstitial : TuneAdView <UIWebViewDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate> {
	UIButton* closeButton;
	BOOL closeButtonAdded;
	BOOL showOnLoad;
	TuneAdInterstitialVC* interstitialVC;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)adViewWithDelegate:(id)delegate orientations:(unsigned)orientations;
+(id)adViewWithDelegate:(id)delegate;
+(id)adView;
+(void)initialize;
-(void).cxx_destruct;
-(void)productViewControllerDidFinish:(id)productViewController;
-(BOOL)handleAdClickWithUrl:(id)url;
-(BOOL)isCloseButtonUrl:(id)url;
-(void)showInAppStoreForAppId:(id)appId campaignToken:(id)token affiliateToken:(id)token3 requestUrl:(id)url;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webViewDidFinishLoad:(id)webView;
-(void)dismissInterstitial;
-(void)closeAction;
-(void)handleDisplayAd:(id)ad metadata:(id)metadata;
-(void)addCloseButton;
-(void)cacheForPlacement:(id)placement adMetadata:(id)metadata;
-(void)cacheForPlacement:(id)placement;
-(void)showForPlacement:(id)placement viewController:(id)controller adMetadata:(id)metadata;
-(void)showForPlacement:(id)placement viewController:(id)controller;
-(void)displayAd:(id)ad metadata:(id)metadata;
-(id)initWithDelegate:(id)delegate orientations:(unsigned)orientations;
@end

