/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import </libobjc.A.h>
#import "FBSDKWebDialogViewDelegate.h"

@class FBSDKWebDialogView, NSDictionary, UIView, NSString;
@protocol FBSDKWebDialogDelegate;

@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate> {
	UIView* _backgroundView;
	FBSDKWebDialogView* _dialogView;
	BOOL _deferVisibility;
	id<FBSDKWebDialogDelegate> _delegate;
	NSString* _name;
	NSDictionary* _parameters;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSDictionary* parameters;
@property(copy, nonatomic) NSString* name;
@property(assign, nonatomic) id<FBSDKWebDialogDelegate> delegate;
@property(assign, nonatomic) BOOL deferVisibility;
+(id)showWithName:(id)name parameters:(id)parameters delegate:(id)delegate;
-(void).cxx_destruct;
-(void)_updateViewsWithScale:(float)scale alpha:(float)alpha animationDuration:(double)duration completion:(id)completion;
-(CGRect)_applicationFrameForOrientation;
-(CGAffineTransform)_transformForOrientation;
-(BOOL)_showWebView;
-(id)_generateURL:(id*)url;
-(id)_findWindow;
-(void)_failWithError:(id)error;
-(void)_dismissAnimated:(BOOL)animated;
-(void)_completeWithResults:(id)results;
-(void)_cancel;
-(void)_removeObservers;
-(void)_deviceOrientationDidChangeNotification:(id)_deviceOrientation;
-(void)_addObservers;
-(void)webDialogViewDidFinishLoad:(id)webDialogView;
-(void)webDialogViewDidCancel:(id)webDialogView;
-(void)webDialogView:(id)view didFailWithError:(id)error;
-(void)webDialogView:(id)view didCompleteWithResults:(id)results;
-(BOOL)show;
-(void)dealloc;
@end
