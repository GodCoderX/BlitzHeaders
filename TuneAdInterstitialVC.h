/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>

@class TuneInterstitial;

@interface TuneAdInterstitialVC : UIViewController {
	BOOL _disabled;
	TuneInterstitial* _adView;
}
@property(assign, nonatomic) __weak TuneInterstitial* adView;
@property(assign, nonatomic) BOOL disabled;
-(void).cxx_destruct;
-(BOOL)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(id)initWithAdView:(id)adView;
@end

