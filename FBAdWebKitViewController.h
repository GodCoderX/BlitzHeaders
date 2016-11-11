/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WKNavigationDelegate.h"
#import <UIKit/UIViewController.h>

@class NSString, NSObject, WKWebView, UIBarButtonItem, UIToolbar;
@protocol FBAdSafariViewControllerDelegate;

@interface FBAdWebKitViewController : UIViewController <WKNavigationDelegate> {
	BOOL _statusBarHidden;
	WKWebView* _webView;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _forwardButton;
	UIBarButtonItem* _refreshButton;
	UIBarButtonItem* _spinnerButton;
	UIToolbar* _toolBar;
	NSObject<FBAdSafariViewControllerDelegate>* _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property(assign, nonatomic) __weak NSObject<FBAdSafariViewControllerDelegate>* delegate;
@property(retain, nonatomic) UIToolbar* toolBar;
@property(retain, nonatomic) UIBarButtonItem* spinnerButton;
@property(retain, nonatomic) UIBarButtonItem* refreshButton;
@property(retain, nonatomic) UIBarButtonItem* forwardButton;
@property(retain, nonatomic) UIBarButtonItem* backButton;
@property(retain, nonatomic) WKWebView* webView;
-(void).cxx_destruct;
-(void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
-(void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
-(void)webView:(id)view didFinishNavigation:(id)navigation;
-(void)webView:(id)view didStartProvisionalNavigation:(id)navigation;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction decisionHandler:(id)handler;
-(void)doneButtonClicked:(id)clicked;
-(void)refreshButtonClicked:(id)clicked;
-(void)forwardButtonClicked:(id)clicked;
-(void)backButtonClicked:(id)clicked;
-(int)preferredInterfaceOrientationForPresentation;
-(BOOL)prefersStatusBarHidden;
-(void)loadURL:(id)url;
-(void)clearContent;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

