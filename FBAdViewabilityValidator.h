//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAdTimer, NSObject<FBAdViewabilityValidatorDelegate>, UIView;

@interface FBAdViewabilityValidator : NSObject
{
    _Bool _viewOnScreenNotificationSent;
    _Bool _observingNotifications;
    NSObject<FBAdViewabilityValidatorDelegate> *_delegate;
    FBAdTimer *_checkViewabilityTimer;
    UIView *_view;
    long long _minViewabilityPercentage;
}

@property(nonatomic) long long minViewabilityPercentage; // @synthesize minViewabilityPercentage=_minViewabilityPercentage;
@property(nonatomic, getter=isObservingNotifications) _Bool observingNotifications; // @synthesize observingNotifications=_observingNotifications;
@property(nonatomic, getter=isViewOnScreenNotificationSent) _Bool viewOnScreenNotificationSent; // @synthesize viewOnScreenNotificationSent=_viewOnScreenNotificationSent;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) FBAdTimer *checkViewabilityTimer; // @synthesize checkViewabilityTimer=_checkViewabilityTimer;
@property(nonatomic) __weak NSObject<FBAdViewabilityValidatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopObservingNotifications;
- (void)onApplicationForegrounded;
- (void)onApplicationBackgrounded;
- (void)startObservingNotifications;
- (void)resumeTimer;
- (void)invalidateTimer;
- (void)stopViewabilityCheck;
- (void)scheduleViewabilityCheck:(double)arg1;
- (void)scheduleViewabilityCheck;
- (void)sendViewOffScreenNotification;
- (void)sendViewOnScreenNotification;
- (void)checkViewability;
- (void)isViewOnScreenWithBlock:(CDUnknownBlockType)arg1;
- (id)logSuccess:(_Bool)arg1 withReason:(id)arg2;
- (void)dealloc;
- (id)initWithView:(id)arg1 minViewability:(long long)arg2 shouldObserveNotifications:(_Bool)arg3;
- (id)init;

@end

