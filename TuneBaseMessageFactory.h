//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString, TuneCampaign, TunePointerSet;

@interface TuneBaseMessageFactory : NSObject
{
    int _limit;
    int _scope;
    int _lifetimeMaximum;
    NSDictionary *_messageDictionary;
    NSMutableDictionary *_images;
    NSString *_messageID;
    NSString *_campaignStepID;
    TuneCampaign *_campaign;
    NSDate *_startDate;
    NSDate *_endDate;
    TunePointerSet *_visibleViews;
}

@property(retain, nonatomic) TunePointerSet *visibleViews; // @synthesize visibleViews=_visibleViews;
@property(nonatomic) int lifetimeMaximum; // @synthesize lifetimeMaximum=_lifetimeMaximum;
@property(nonatomic) int scope; // @synthesize scope=_scope;
@property(nonatomic) int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) TuneCampaign *campaign; // @synthesize campaign=_campaign;
@property(copy, nonatomic) NSString *campaignStepID; // @synthesize campaignStepID=_campaignStepID;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSMutableDictionary *images; // @synthesize images=_images;
@property(copy, nonatomic) NSDictionary *messageDictionary; // @synthesize messageDictionary=_messageDictionary;
- (void).cxx_destruct;
- (void)_buildAndShowMessage;
- (_Bool)messageDictionaryHasPrerequisites;
- (id)getTriggerEvent;
- (void)dismissMessage;
- (void)buildAndShowMessage;
- (_Bool)hasAllAssets;
- (void)acquireImagesWithDispatchGroup:(id)arg1;
- (id)toDictionary;
- (id)getCampaignStepID;
- (id)getMessageID;
- (void)addImageURLForProperty:(id)arg1 inMessageDictionary:(id)arg2;
- (void)parseMessageDetails;
- (_Bool)shouldDisplayBasedOnFrequencyModel:(id)arg1;
- (id)initWithMessageDictionary:(id)arg1;

@end
