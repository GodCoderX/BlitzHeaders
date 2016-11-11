/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@protocol FBSDKMessengerURLHandlerDelegate;

@interface FBSDKMessengerURLHandler : NSObject {
	id<FBSDKMessengerURLHandlerDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<FBSDKMessengerURLHandlerDelegate> delegate;
-(void).cxx_destruct;
-(id)_valueForKey:(id)key fromComponents:(id)components;
-(void)_processCancel;
-(void)_processOpenFromComposer:(id)composer;
-(void)_processReply:(id)reply;
-(id)_appIDsForExtras:(id)extras;
-(id)_appLinkParamsForURL:(id)url;
-(id)_appLinksDictionary:(id)dictionary;
-(BOOL)openURL:(id)url sourceApplication:(id)application;
-(BOOL)canOpenURL:(id)url sourceApplication:(id)application;
@end
