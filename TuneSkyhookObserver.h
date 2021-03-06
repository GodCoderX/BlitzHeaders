//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TuneSkyhookObserver : NSObject
{
    int _priority;
    id _observer;
    SEL _selector;
    id _sender;
}

@property(readonly) int priority; // @synthesize priority=_priority;
@property(readonly) __weak id sender; // @synthesize sender=_sender;
@property(readonly) SEL selector; // @synthesize selector=_selector;
@property(readonly) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isStillValid;
- (_Bool)matchesSender:(id)arg1;
- (void)sendPayload:(id)arg1;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 sender:(id)arg3 priority:(int)arg4;

@end

