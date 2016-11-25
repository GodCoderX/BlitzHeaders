//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSNumber, NSString, TuneAnalyticsSubmitter;

@interface TuneAnalyticsEvent : NSObject
{
    NSString *_uuid;
    TuneAnalyticsSubmitter *_submitter;
    NSString *_appId;
    NSString *_eventType;
    NSString *_action;
    NSString *_category;
    NSString *_control;
    NSString *_controlEvent;
    NSDate *_timestamp;
    NSNumber *_sessionTime;
    NSString *_schemaVersion;
    NSArray *_tags;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(copy, nonatomic) NSNumber *sessionTime; // @synthesize sessionTime=_sessionTime;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *controlEvent; // @synthesize controlEvent=_controlEvent;
@property(copy, nonatomic) NSString *control; // @synthesize control=_control;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) TuneAnalyticsSubmitter *submitter; // @synthesize submitter=_submitter;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)eventId;
- (id)getEventMd5;
- (id)getFiveline;
- (id)initAsTracerEvent;
- (id)initWithTuneEvent:(id)arg1 action:(id)arg2 category:(id)arg3 control:(id)arg4 controlEvent:(id)arg5 event:(id)arg6;
- (id)initWithTuneEvent:(id)arg1;
- (id)initWithEventType:(id)arg1 action:(id)arg2 category:(id)arg3 control:(id)arg4 controlEvent:(id)arg5 tags:(id)arg6 items:(id)arg7;
- (id)initCustomEventWithAction:(id)arg1;
- (id)initWithBaseInfo;

@end

