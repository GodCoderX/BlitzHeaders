/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class PFACL, PFAsyncTaskQueue, PFUser;

@interface PFDefaultACLController : NSObject {
	PFAsyncTaskQueue* _taskQueue;
	PFACL* _defaultACL;
	BOOL _useCurrentUser;
	PFUser* _lastCurrentUser;
	PFACL* _defaultACLWithCurrentUser;
}
+(void)clearDefaultController;
+(id)defaultController;
-(void).cxx_destruct;
-(id)setDefaultACLAsync:(id)async withCurrentUserAccess:(BOOL)currentUserAccess;
-(id)getDefaultACLAsync;
-(id)init;
@end

