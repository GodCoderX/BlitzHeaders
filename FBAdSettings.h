//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBAdSettings : NSObject
{
}

+ (void)resetSessionID;
+ (id)sessionID;
+ (void)setLogLevel:(long long)arg1;
+ (long long)getLogLevel;
+ (id)getBaseURL;
+ (id)getWebviewBaseURL;
+ (id)getDeliveryEndpoint;
+ (void)setUrlPrefix:(id)arg1;
+ (id)getMediationService;
+ (void)setMediationService:(id)arg1;
+ (_Bool)shouldUseLiveRailEndpoint;
+ (_Bool)isChildDirected;
+ (_Bool)isTestMode;
+ (void)setIsChildDirected:(_Bool)arg1;
+ (void)clearTestDevices;
+ (void)addTestDevices:(id)arg1;
+ (void)addTestDevice:(id)arg1;
+ (id)testDevices;
+ (id)testDeviceHash;

@end

