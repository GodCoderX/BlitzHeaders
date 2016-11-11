/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class FBSDKAppInviteContent, UIViewController;
@protocol FBSDKAppInviteDialogDelegate;

@interface FBSDKAppInviteDialog : NSObject {
	UIViewController* _fromViewController;
	id<FBSDKAppInviteDialogDelegate> _delegate;
	FBSDKAppInviteContent* _content;
}
@property(copy, nonatomic) FBSDKAppInviteContent* content;
@property(assign, nonatomic) __weak id<FBSDKAppInviteDialogDelegate> delegate;
@property(assign, nonatomic) __weak UIViewController* fromViewController;
+(id)showFromViewController:(id)viewController withContent:(id)content delegate:(id)delegate;
+(id)showWithContent:(id)content delegate:(id)delegate;
+(void)initialize;
-(void).cxx_destruct;
-(void)_logDialogShow;
-(void)_invokeDelegateDidFailWithError:(id)_invokeDelegate;
-(void)_invokeDelegateDidCompleteWithResults:(id)_invokeDelegate;
-(void)_handleCompletionWithDialogResults:(id)dialogResults error:(id)error;
-(BOOL)_canShowNative;
-(BOOL)validateWithError:(id*)error;
-(BOOL)show;
-(BOOL)canShow;
@end

