/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import "wotblitz-Structs.h"
#import "FBSDKButton.h"
#import "FBSDKButtonImpressionTracking.h"

@class FBSDKLoginManager, NSString, NSArray;
@protocol FBSDKLoginButtonDelegate;

@interface FBSDKLoginButton : FBSDKButton <FBSDKButtonImpressionTracking, UIActionSheetDelegate> {
	BOOL _hasShownTooltipBubble;
	FBSDKLoginManager* _loginManager;
	NSString* _userID;
	NSString* _userName;
	id<FBSDKLoginButtonDelegate> _delegate;
	NSArray* _publishPermissions;
	NSArray* _readPermissions;
	unsigned _tooltipBehavior;
	unsigned _tooltipColorStyle;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned tooltipColorStyle;
@property(assign, nonatomic) unsigned tooltipBehavior;
@property(copy, nonatomic) NSArray* readPermissions;
@property(copy, nonatomic) NSArray* publishPermissions;
@property(assign, nonatomic) unsigned loginBehavior;
@property(assign, nonatomic) __weak id<FBSDKLoginButtonDelegate> delegate;
@property(assign, nonatomic) unsigned defaultAudience;
-(void).cxx_destruct;
-(void)_updateContent;
-(void)_showTooltipIfNeeded;
-(id)_shortLogInTitle;
-(id)_longLogInTitle;
-(id)_logOutTitle;
-(void)_buttonPressed:(id)pressed;
-(void)_acessTokenDidChangeNotification:(id)_acessToken;
-(void)configureButton;
-(id)impressionTrackingIdentifier;
-(id)impressionTrackingEventName;
-(id)analyticsParameters;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)dealloc;
@end

