/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@protocol PFCommandRunning;

@interface PFPushController : NSObject {
	id<PFCommandRunning> _commandRunner;
}
@property(readonly, assign, nonatomic) id<PFCommandRunning> commandRunner;
+(id)controllerWithCommandRunner:(id)commandRunner;
-(void).cxx_destruct;
-(id)sendPushNotificationAsyncWithState:(id)state sessionToken:(id)token;
-(id)initWithCommandRunner:(id)commandRunner;
-(id)init;
@end
