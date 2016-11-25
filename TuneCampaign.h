//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString;

@interface TuneCampaign : NSObject
{
    NSDate *_timestampToStopReportingAnalytics;
    NSString *_campaignId;
    NSString *_campaignSource;
    NSString *_variationId;
    NSDate *_lastViewed;
    NSNumber *_numberOfSecondsToReportAnalytics;
}

+ (id)parseNumberOfSecondsToReportAnalyticsFromDictionary:(id)arg1 withKey:(id)arg2;
+ (id)parseCampaignIdFromDictionary:(id)arg1 withKey:(id)arg2;
+ (id)parseNumberOfSecondsToReportAnalyticsFromNotificationDictionary:(id)arg1;
+ (id)parseCampaignIdFromNotificationDictionary:(id)arg1;
+ (id)parseNumberOfSecondsToReportAnalyticsFromPlaylistDictionary:(id)arg1;
+ (id)parseCampaignIdFromPlaylistDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *numberOfSecondsToReportAnalytics; // @synthesize numberOfSecondsToReportAnalytics=_numberOfSecondsToReportAnalytics;
@property(retain, nonatomic) NSDate *lastViewed; // @synthesize lastViewed=_lastViewed;
@property(copy, nonatomic) NSString *variationId; // @synthesize variationId=_variationId;
@property(copy, nonatomic) NSString *campaignSource; // @synthesize campaignSource=_campaignSource;
@property(copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)needToReportCampaignAnalytics;
- (void)markCampaignViewed;
- (void)calculateTimestampToStopReportingAnalytics;
- (id)toDictionary;
- (_Bool)isTest;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)initWithCampaignId:(id)arg1 variationId:(id)arg2 andNumberOfSecondsToReportAnalytics:(id)arg3;

@end

