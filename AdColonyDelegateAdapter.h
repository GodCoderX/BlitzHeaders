//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AdColonyAdDelegate.h"
#import "AdColonyDelegate.h"

@class NSString;

@interface AdColonyDelegateAdapter : NSObject <AdColonyDelegate, AdColonyAdDelegate>
{
    struct Delegate *_delegateImpl;
}

@property struct Delegate *delegateImpl; // @synthesize delegateImpl=_delegateImpl;
- (void)onAdColonyAdFinishedWithInfo:(id)arg1;
- (void)onAdColonyAdStartedInZone:(id)arg1;
- (void)onAdColonyV4VCReward:(_Bool)arg1 currencyName:(id)arg2 currencyAmount:(int)arg3 inZone:(id)arg4;
- (void)onAdColonyAdAvailabilityChange:(_Bool)arg1 inZone:(id)arg2;
- (id)initWithUniversalDelegate:(struct Delegate *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

