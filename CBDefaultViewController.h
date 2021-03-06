//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CBDefaultBackgroundView, CBLoadingView;

@interface CBDefaultViewController : UIViewController
{
    CBLoadingView *_loadingView;
    CBDefaultBackgroundView *_backgroundView;
    CBDefaultBackgroundView *_reversedBackgroundView;
}

+ (id)shared;
@property(retain) CBDefaultBackgroundView *reversedBackgroundView; // @synthesize reversedBackgroundView=_reversedBackgroundView;
@property(retain) CBDefaultBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) CBLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (struct CGRect)adjustFrameForStatusBar:(struct CGRect)arg1;
- (double)orientationToAngle:(long long)arg1;
- (void)pauseImpression:(id)arg1;
- (void)hideImpression:(id)arg1;
- (void)showImpression:(id)arg1;
- (void)resumeImpression:(id)arg1;
- (void)dismissLoadingView;
- (void)rotateLoadingView;
- (void)displayLoadingViewInViewController:(id)arg1;
- (void)dismissMoreApps:(id)arg1;
- (void)rotateImpression:(id)arg1 toOrientation:(long long)arg2 animated:(_Bool)arg3;
- (void)dismissInterstitial:(id)arg1 didClose:(_Bool)arg2;
- (_Bool)displayMoreApps:(id)arg1;
- (_Bool)displayInterstitial:(id)arg1;
- (id)chartboostRootView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

