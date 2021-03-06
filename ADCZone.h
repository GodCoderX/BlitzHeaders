//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADCV4VCCurrency, NSArray, NSDate, NSDictionary, NSString;

@interface ADCZone : NSObject
{
    int _ad_position;
    int _play_attempts;
    int _session_plays;
    int _play_interval;
    long long _zone_state;
    NSDictionary *_tracking;
    NSArray *_play_order;
    _Bool _initialized;
    int _min_config_window;
    int _max_config_window;
    int _min_ad_threshold;
    _Bool _disabling;
    _Bool _enabled;
    _Bool _v4vc;
    _Bool _eligible_for_reconfig;
    NSString *_uuid;
    NSArray *_ads;
    ADCV4VCCurrency *_currency;
    NSDate *_last_config;
}

@property(retain, nonatomic) NSDate *last_config; // @synthesize last_config=_last_config;
@property(nonatomic) _Bool eligible_for_reconfig; // @synthesize eligible_for_reconfig=_eligible_for_reconfig;
@property(readonly, nonatomic) _Bool v4vc; // @synthesize v4vc=_v4vc;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) ADCV4VCCurrency *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)onAdSuccessfullyPlayed;
- (id)playNextAd:(id)arg1 withV4VCPrePopup:(_Bool)arg2 andV4VCPostPopup:(_Bool)arg3;
- (int)getReadyAdCount;
- (int)getTotalAdCount;
- (_Bool)hasAdsOfType:(long long)arg1;
- (id)getAdByUUID:(id)arg1;
- (id)getNativeAdViewWithViewController:(id)arg1 delegate:(id)arg2;
- (void)onEventRequest:(long long)arg1;
- (id)getNextAd:(_Bool)arg1 ofType:(long long)arg2;
- (unsigned long long)zoneStatus;
- (void)updateZoneState;
- (_Bool)doV4VCReward;
- (void)onNewSession;
- (void)dereference;
- (void)update:(id)arg1;
- (id)init:(id)arg1;

@end

