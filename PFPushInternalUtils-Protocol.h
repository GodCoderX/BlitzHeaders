//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PFPushInternalUtils <NSObject>

@optional
+ (void)playAudioWithName:(NSString *)arg1;
+ (void)playVibrate;
+ (void)showAlertViewWithTitle:(NSString *)arg1 message:(NSString *)arg2;
+ (void)clearDeviceToken;
+ (NSString *)getDeviceTokenFromKeychain;
+ (NSString *)convertDeviceTokenToString:(id)arg1;
@end

