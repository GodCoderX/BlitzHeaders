//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AdColonyDelegate <NSObject>

@optional
- (void)onAdColonyV4VCReward:(_Bool)arg1 currencyName:(NSString *)arg2 currencyAmount:(int)arg3 inZone:(NSString *)arg4;
- (void)onAdColonyAdAvailabilityChange:(_Bool)arg1 inZone:(NSString *)arg2;
@end

