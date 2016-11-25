//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class FBSDKErrorConfiguration, NSDate, NSDictionary, NSString;

@interface FBSDKServerConfiguration : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSDictionary *_dialogConfigurations;
    NSDictionary *_dialogFlows;
    _Bool _advertisingIDEnabled;
    _Bool _defaults;
    _Bool _implicitLoggingEnabled;
    _Bool _implicitPurchaseLoggingEnabled;
    _Bool _loginTooltipEnabled;
    _Bool _nativeAuthFlowEnabled;
    _Bool _systemAuthenticationEnabled;
    NSString *_appID;
    NSString *_appName;
    NSString *_defaultShareMode;
    FBSDKErrorConfiguration *_errorConfiguration;
    NSString *_loginTooltipText;
    NSDate *_timestamp;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *loginTooltipText; // @synthesize loginTooltipText=_loginTooltipText;
@property(readonly, nonatomic, getter=isSystemAuthenticationEnabled) _Bool systemAuthenticationEnabled; // @synthesize systemAuthenticationEnabled=_systemAuthenticationEnabled;
@property(readonly, nonatomic, getter=isNativeAuthFlowEnabled) _Bool nativeAuthFlowEnabled; // @synthesize nativeAuthFlowEnabled=_nativeAuthFlowEnabled;
@property(readonly, nonatomic, getter=isLoginTooltipEnabled) _Bool loginTooltipEnabled; // @synthesize loginTooltipEnabled=_loginTooltipEnabled;
@property(readonly, nonatomic, getter=isImplicitPurchaseLoggingSupported) _Bool implicitPurchaseLoggingEnabled; // @synthesize implicitPurchaseLoggingEnabled=_implicitPurchaseLoggingEnabled;
@property(readonly, nonatomic, getter=isImplicitLoggingSupported) _Bool implicitLoggingEnabled; // @synthesize implicitLoggingEnabled=_implicitLoggingEnabled;
@property(readonly, nonatomic) FBSDKErrorConfiguration *errorConfiguration; // @synthesize errorConfiguration=_errorConfiguration;
@property(readonly, copy, nonatomic) NSString *defaultShareMode; // @synthesize defaultShareMode=_defaultShareMode;
@property(readonly, nonatomic, getter=isDefaults) _Bool defaults; // @synthesize defaults=_defaults;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic, getter=isAdvertisingIDEnabled) _Bool advertisingIDEnabled; // @synthesize advertisingIDEnabled=_advertisingIDEnabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_useFeatureWithKey:(id)arg1 dialogName:(id)arg2;
- (_Bool)useSafariViewControllerForDialogName:(id)arg1;
- (_Bool)useNativeDialogForDialogName:(id)arg1;
- (id)dialogConfigurationForDialogName:(id)arg1;
- (id)initWithAppID:(id)arg1 appName:(id)arg2 loginTooltipEnabled:(_Bool)arg3 loginTooltipText:(id)arg4 defaultShareMode:(id)arg5 advertisingIDEnabled:(_Bool)arg6 implicitLoggingEnabled:(_Bool)arg7 implicitPurchaseLoggingEnabled:(_Bool)arg8 systemAuthenticationEnabled:(_Bool)arg9 nativeAuthFlowEnabled:(_Bool)arg10 dialogConfigurations:(id)arg11 dialogFlows:(id)arg12 timestamp:(id)arg13 errorConfiguration:(id)arg14 defaults:(_Bool)arg15;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

