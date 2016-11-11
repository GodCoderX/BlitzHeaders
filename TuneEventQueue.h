/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSOperationQueue, NSMutableArray;
@protocol TuneEventQueueDelegate;

@interface TuneEventQueue : NSObject {
	NSOperationQueue* requestOpQueue;
	NSMutableArray* events;
	NSString* storageDir;
	id<TuneEventQueueDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<TuneEventQueueDelegate> delegate;
+(double)retryDelayForAttempt:(int)attempt;
+(void)enqueueUrlRequest:(id)request encryptParams:(id)params postData:(id)data runDate:(id)date;
+(void)setDelegate:(id)delegate;
+(void)initialize;
-(void).cxx_destruct;
-(void)saveQueue;
-(void)loadQueue;
-(void)dumpQueue;
-(id)updateTrackingLink:(id)link encryptParams:(id)params;
-(void)appendOrIncrementRetryCount:(id*)count sendDate:(id*)date;
-(void)enqueueUrlRequest:(id)request encryptParams:(id)params postData:(id)data runDate:(id)date;
-(void)networkChangeHandler;
-(void)prependItemsFromLegacyQueue;
-(void)createQueueStorageDirectory;
-(void)addNetworkAndAppNotificationListeners;
-(id)init;
@end
