//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKKeychainStore, FBSDKLoginManagerLogger, NSSet, UIViewController;

@interface FBSDKLoginManager : NSObject
{
    CDUnknownBlockType _handler;
    FBSDKLoginManagerLogger *_logger;
    _Bool _performingLogIn;
    FBSDKKeychainStore *_keychainStore;
    unsigned long long _defaultAudience;
    unsigned long long _loginBehavior;
    UIViewController *_fromViewController;
    NSSet *_requestedPermissions;
}

+ (id)stringForChallenge;
+ (void)renewSystemCredentials:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSSet *requestedPermissions; // @synthesize requestedPermissions=_requestedPermissions;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) unsigned long long loginBehavior; // @synthesize loginBehavior=_loginBehavior;
@property(nonatomic) unsigned long long defaultAudience; // @synthesize defaultAudience=_defaultAudience;
- (void).cxx_destruct;
- (void)setRequestedPermissions:(id)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1;
- (void)validateReauthentication:(id)arg1 withResult:(id)arg2;
- (void)storeExpectedChallenge:(id)arg1;
- (void)logInWithBehavior:(unsigned long long)arg1;
- (void)logInWithPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)logInParametersWithPermissions:(id)arg1;
- (id)loadExpectedChallenge;
- (void)invokeHandler:(id)arg1 error:(id)arg2;
- (void)determineRecentlyGrantedPermissions:(id *)arg1 recentlyDeclinedPermissions:(id *)arg2 forGrantedPermission:(id)arg3 declinedPermissions:(id)arg4;
- (void)completeAuthentication:(id)arg1 expectChallenge:(_Bool)arg2;
- (void)assertPermissions:(id)arg1;
- (void)logOut;
- (void)logInWithPublishPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInWithPublishPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)logInWithReadPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInWithReadPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end

