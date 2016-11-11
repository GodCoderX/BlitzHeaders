/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "wotblitz-Structs.h"
#import "CBViewProtocol.h"
#import "WKNavigationDelegate.h"
#import "CBInterstitialPlayback.h"
#import "UIWebViewDelegate.h"

@class CBAdUnitData, NSTimer, UIWebView, NSDictionary, WKWebView, NSString;

@interface CBWebVideoView : UIView <UIWebViewDelegate, WKNavigationDelegate, CBViewProtocol, CBInterstitialPlayback> {
	BOOL _videoConfirmationEnabled;
	BOOL _videoFinished;
	BOOL _videoPlaying;
	BOOL _videoLoadSuccess;
	BOOL _closing;
	id _clickCallback;
	id _closeCallback;
	id _displayCallback;
	id _readyToDisplayCallback;
	id _failCallback;
	id _playbackCompletedCallback;
	int _orientation;
	UIWebView* _webview;
	WKWebView* _webkit;
	int _state;
	unsigned _playCount;
	unsigned _completedCount;
	NSString* _template_id;
	NSString* _ad_id;
	CBAdUnitData* _template;
	NSString* _html;
	NSDictionary* _trackingEvents;
	NSTimer* _loadingTimer;
	dispatch_group_s* _group;
	double _currentItemPlayableDuration;
	double _currentItemPlayTime;
}
@property(readonly, assign) unsigned supportedOrientations;
@property(assign) int orientation;
@property(copy) id failCallback;
@property(copy) id playbackCompletedCallback;
@property(copy) id displayCallback;
@property(copy) id readyToDisplayCallback;
@property(copy) id clickCallback;
@property(copy) id closeCallback;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) dispatch_group_s* group;
@property(retain, nonatomic) NSTimer* loadingTimer;
@property(retain, nonatomic) NSDictionary* trackingEvents;
@property(retain, nonatomic) NSString* html;
@property(retain, nonatomic) CBAdUnitData* template;
@property(retain, nonatomic) NSString* ad_id;
@property(retain, nonatomic) NSString* template_id;
@property(assign, nonatomic) BOOL closing;
@property(assign, nonatomic) unsigned completedCount;
@property(assign, nonatomic) unsigned playCount;
@property(assign, nonatomic) BOOL videoLoadSuccess;
@property(assign, nonatomic) BOOL videoPlaying;
@property(assign, nonatomic) BOOL videoFinished;
@property(assign, nonatomic) int state;
@property(retain, nonatomic) WKWebView* webkit;
@property(retain, nonatomic) UIWebView* webview;
@property(assign, nonatomic) double currentItemPlayTime;
@property(assign, nonatomic) double currentItemPlayableDuration;
@property(assign, nonatomic) BOOL videoConfirmationEnabled;
+(void)prefetchAssets:(id)assets;
+(id)parseNativeURL:(id)url;
-(void).cxx_destruct;
-(BOOL)shouldAdjustFrameForStatusBar;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)traitCollection;
-(void)didMoveToSuperview;
-(void)stopPlayback;
-(void)startPlayback:(BOOL)playback;
-(void)templateReady;
-(void)startPlayback;
-(void)loadingViewTimerFinished:(id)finished;
-(id)startLoadingViewTimer;
-(void)checkTemplateComplete;
-(void)videoDidPlayToEndTime;
-(void)willResignActive;
-(void)didBecomeActive;
-(void)approvedClick;
-(void)adClicked;
-(void)close;
-(void)displayUI;
-(id)prepareWithResponse:(id)response;
-(void)audioRouteHeadphones;
-(void)audioRoutePhoneCall;
-(void)audioInterruptShouldResume;
-(void)pause;
-(void)playerLayerHack;
-(void)delayedPlay;
-(void)play;
-(void)callTrackingURL:(id)url;
-(void)sendTrackingEvent:(id)event;
-(id)callJSFunction:(id)function withArgs:(id)args;
-(void)callNativeFunction:(id)function withArgs:(id)args;
-(BOOL)processURL:(id)url;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction decisionHandler:(id)handler;
-(void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
-(void)webView:(id)view didFinishNavigation:(id)navigation;
-(void)webView:(id)view didStartProvisionalNavigation:(id)navigation;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(BOOL)canDisplay;
-(void)destroy;
-(void)initialize;
-(id)initWithFrame:(CGRect)frame;
@end
