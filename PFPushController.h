//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFPushController : NSObject
{
    id <PFCommandRunning> _commandRunner;
}

+ (id)controllerWithCommandRunner:(id)arg1;
@property(readonly, nonatomic) id <PFCommandRunning> commandRunner; // @synthesize commandRunner=_commandRunner;
- (void).cxx_destruct;
- (id)sendPushNotificationAsyncWithState:(id)arg1 sessionToken:(id)arg2;
- (id)initWithCommandRunner:(id)arg1;
- (id)init;

@end

