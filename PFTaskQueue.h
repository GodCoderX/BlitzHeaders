/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class BFTask;

@interface PFTaskQueue : NSObject {
	NSObject* _mutex;
	BFTask* _tail;
}
@property(retain, nonatomic) BFTask* tail;
@property(retain, nonatomic) NSObject* mutex;
-(void).cxx_destruct;
-(id)enqueue:(id)enqueue;
-(id)init;
@end
