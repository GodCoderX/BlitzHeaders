/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBAdViewDelegate.h"
#import "FBDisplayAdControllerDelegate.h"
#import <UIKit/UIViewController.h>

@class NSString, FBDisplayAdController;
@protocol FBInterstitialAdDelegate;

@interface FBInterstitialAd : UIViewController <FBDisplayAdControllerDelegate, FBAdViewDelegate> {
	BOOL _initialized;
	BOOL _ready;
	NSString* _placementID;
	id<FBInterstitialAdDelegate> _delegate;
	unsigned _maxShowCount;
	FBDisplayAdController* _adController;
	unsigned _showCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned showCount;
@property(assign, nonatomic, getter=isReady) BOOL ready;
@property(assign, nonatomic, getter=isInitialized) BOOL initialized;
@property(retain, nonatomic) FBDisplayAdController* adController;
@property(assign, nonatomic) unsigned maxShowCount;
@property(readonly, assign, nonatomic, getter=isAdValid) BOOL adValid;
@property(assign, nonatomic) __weak id<FBInterstitialAdDelegate> delegate;
@property(copy, nonatomic) NSString* placementID;
-(void).cxx_destruct;
-(void)displayAdControllerStopped:(id)stopped;
-(void)displayAdControllerUserClosed:(id)closed;
-(void)displayAdController:(id)controller clickThruWithURL:(id)url;
-(void)displayAdControllerImpression:(id)impression;
-(void)displayAdController:(id)controller didFailWithError:(id)error;
-(void)displayAdControllerLoaded:(id)loaded;
-(void)displayAdController:(id)controller presentedView:(id)view;
-(BOOL)showAdFromRootViewController:(id)rootViewController;
-(void)loadAd;
-(int)preferredInterfaceOrientationForPresentation;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithPlacementID:(id)placementID;
-(id)init;
@end

